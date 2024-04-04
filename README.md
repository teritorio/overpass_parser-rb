Gem based on (antlr-gemerator)[https://github.com/camertron/antlr-gemerator].

After change in the g4 file:
```
bundle exec rake generate
bundle exec rake compile
```

## Use

```ruby
require 'overpass_parser/visitor'

tree = OverpassParser.tree('[out:json]...')
```

## SQL

```sql
CREATE TEMP VIEW area AS
SELECT id, version, created, tags, NULL::bigint[] AS nodes, NULL::jsonb AS members, geom, 'a' AS osm_type FROM osm_base_areas;
CREATE TEMP VIEW node AS
SELECT id, version, created, tags, NULL::bigint[] AS nodes, NULL::jsonb AS members, geom, objtype AS osm_type FROM osm_base WHERE objtype = 'n';
CREATE TEMP VIEW way AS
SELECT id, version, created, tags, nodes, NULL::jsonb AS members, geom, objtype AS osm_type FROM osm_base WHERE objtype = 'w';
CREATE TEMP VIEW relation AS
SELECT id, version, created, tags, NULL::bigint[] AS nodes, members, geom, objtype AS osm_type FROM osm_base WHERE objtype = 'r';
CREATE TEMP VIEW nwr AS
SELECT id, version, created, tags, nodes, members, geom, objtype AS osm_type FROM osm_base;
```

### Cli

```sh
echo '
[out:json][timeout:25];
area(7009125)->.a;
nwr.a["tourism"="information"];
out center meta;
' | bin/overpass2sql
```

## Dev

Rubocop
```
bundle exec rubocop -c .rubocop.yml --autocorrect
```

## License
Licensed under the MIT license. See LICENSE.txt for details.
