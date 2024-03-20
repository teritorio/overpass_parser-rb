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

## Dev

Rubocop
```
bundle exec rubocop -c .rubocop.yml --autocorrect
```

## License
Licensed under the MIT license. See LICENSE.txt for details.
