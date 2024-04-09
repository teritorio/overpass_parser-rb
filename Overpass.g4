grammar Overpass;

// Lexer rules

WS: (' ' | '\t' | '\n' | '\r' | '\f') -> channel(HIDDEN);
SL_COMMENT: '//' .*? '\r'? '\n' -> channel(HIDDEN);
ML_COMMENT: '/*' .*? '*/' -> channel(HIDDEN);

INTEGER: [0-9]+;
FLOAT: '-'? INTEGER '.' INTEGER;
OPERATOR: '=' | '~=' | '=~' | '!=' | '!~' | '~';
NOT: '!';
UNQUOTED_STRING: [-_a-zA-Z0-9]+;
SIMPLE_QUOTED_STRING: ['] (~['] | '\\' ["])* ['];
DOUBLE_QUOTED_STRING: '"' (~["] | '\\' ["])* '"';
ID: [a-zA-Z_] [-_a-zA-Z0-9]*;
DOT_ID: '.' ID;

// Parser rules

osm_id: INTEGER;
number: INTEGER | FLOAT;

token:
	SIMPLE_QUOTED_STRING
	| DOUBLE_QUOTED_STRING
	| UNQUOTED_STRING
	| number;

metadata:
	'[' (out_json = 'out:json') ']' (
		'[' 'timeout:' (timeout = number) ']'
	)?;

selector:
	'[' (
		(NOT? key = token)
		| (key = token OPERATOR value = token)
	) ']';

filter_bbox: number ',' number ',' number ',' number;
filter_osm_id: osm_id;
filter_osm_ids: 'id:' osm_id (',' osm_id)*;
filter_area: 'area' DOT_ID;
filter_around: 'around' DOT_ID ':' number;
filter:
	'(' (
		filter_bbox
		| filter_osm_id
		| filter_osm_ids
		| filter_area
		| filter_around
	) ')';
asignation: '->' DOT_ID;

object_type: 'node' | 'way' | 'relation' | 'area' | 'nwr';
query_object: object_type DOT_ID? selector* filter* asignation?;

query_recurse: ('<' | '<<' | '>' | '>>') asignation?;

query: query_object | query_recurse;

query_union: ('(' (query_sequence ';')+ ')') asignation?;
query_sequence: query | query_union;

out_geom: 'geom' | 'center' | 'bb';
out_level_of_details: 'ids' | 'skel' | 'body' | 'tags' | 'meta';
out: 'out' out_geom? out_level_of_details?;

request: (metadata ';')? (query_sequence ';')+ (out ';')?;
