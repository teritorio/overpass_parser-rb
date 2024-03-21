grammar Overpass;

// Lexer rules

WS: (' ' | '\t' | '\n' | '\r' | '\f') -> channel(HIDDEN);
SL_COMMENT: '//' .*? '\r'? '\n' -> channel(HIDDEN);
ML_COMMENT: '/*' .*? '*/' -> channel(HIDDEN);

NUMBER: [0-9]+ ('.' [0-9]+)?;
OPERATOR: '=' | '~=' | '=~' | '!=' | '!~' | '~';
NOT: '!';
UNQUOTED_STRING: [-_a-zA-Z0-9]+;
SIMPLE_QUOTED_STRING:
	'\'' (~('"' | '\\' | '\r' | '\n') | '\\' ('"' | '\\'))* '\'';
DOUBLE_QUOTED_STRING:
	'"' (~('\'' | '\\' | '\r' | '\n') | '\\' ('"' | '\\'))* '"';
ID: [a-zA-Z_] [-_a-zA-Z0-9]*;
DOT_ID: '.' ID;

// Parser rules

token:
	SIMPLE_QUOTED_STRING
	| DOUBLE_QUOTED_STRING
	| UNQUOTED_STRING
	| NUMBER;

metadata: '[' 'out:json' ']' ('[' 'timeout:' NUMBER ']')?;

selector:
	'[' (
		(NOT? key = token)
		| (key = token OPERATOR value = token)
	) ']';

filter_bbox: NUMBER ',' NUMBER ',' NUMBER ',' NUMBER;
filter_osm_id: NUMBER;
filter_osm_ids: 'id:' NUMBER (',' NUMBER)*;
filter_area: 'area' DOT_ID;
filter:
	'(' (
		filter_bbox
		| filter_osm_id
		| filter_osm_ids
		| filter_area
	) ')';
asignation: '->' DOT_ID;

object_type: 'node' | 'way' | 'relation' | 'area' | 'nwr';
query_object: (object_type DOT_ID? selector* filter* asignation?);

query_recurse: '<' | '<<' | '>' | '>>';

query: query_object | query_recurse;

query_group: ('(' (query_sequence ';')+ ')');
query_sequence: query | query_group;

ouput: 'out' 'center' 'meta';

request: (metadata ';')? (query_sequence ';')+ (ouput ';')?;
