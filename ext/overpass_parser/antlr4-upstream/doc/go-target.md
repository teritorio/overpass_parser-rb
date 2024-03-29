# ANTLR4 Language Target, Runtime for Go

### First steps

#### 1. Install ANTLR4

[The getting started guide](getting-started.md) should get you started.

#### 2. Get the Go ANTLR runtime

Each target language for ANTLR has a runtime package for running parser generated by ANTLR4. The runtime provides a common set of tools for using your parser.

Get the runtime and install it on your GOPATH:

```bash
go get github.com/antlr/antlr4/runtime/Go/antlr
```

#### 3. Set the release tag (optional)

`go get` has no native way to specify a branch or commit. So, when you run it, you'll download the latest commits. This may or may not be your preference.

You'll need to use git to set the release. For example, to set the release tag for release 4.9.3:

```bash
cd $GOPATH/src/github.com/antlr/antlr4 # enter the antlr4 source directory
git checkout tags/4.9.3 # the go runtime was added in release 4.9.3
```

A complete list of releases can be found on [the release page](https://github.com/antlr/antlr4/releases).

#### 4. Generate your parser

You use the ANTLR4 "tool" to generate a parser. These will reference the ANTLR runtime, installed above.

Suppose you're using a UNIX system and have set up an alias for the ANTLR4 tool as described in [the getting started guide](getting-started.md). To generate your go parser, you'll need to invoke:

```bash
antlr4 -Dlanguage=Go MyGrammar.g4
```

For a full list of antlr4 tool options, please visit the [tool documentation page](tool-options.md).

### Referencing the Go ANTLR runtime

You can reference the go ANTLR runtime package like this:

```go
import "github.com/antlr/antlr4/runtime/Go/antlr"
```

### Complete example

Suppose you're using the JSON grammar from https://github.com/antlr/grammars-v4/tree/master/json.

Then, invoke `antlr4 -Dlanguage=Go JSON.g4`. The result of this is a collection of .go files in the `parser` directory including:
```
json_parser.go
json_base_listener.go
json_lexer.go
json_listener.go
```

Another common option to the ANTLR tool is `-visitor`, which generates a parse tree visitor, but we won't be doing that here. For a full list of antlr4 tool options, please visit the [tool documentation page](tool-options.md).

We'll write a small main func to call the generated parser/lexer (assuming they are separate). This one writes out the encountered `ParseTreeContext`'s. Suppose the gen'ed parser code is in the `parser` directory relative to this code:

```golang
package main

import (
	"github.com/antlr/antlr4/runtime/Go/antlr"
	"./parser"
	"os"
	"fmt"
)

type TreeShapeListener struct {
	*parser.BaseJSONListener
}

func NewTreeShapeListener() *TreeShapeListener {
	return new(TreeShapeListener)
}

func (this *TreeShapeListener) EnterEveryRule(ctx antlr.ParserRuleContext) {
	fmt.Println(ctx.GetText())
}

func main() {
	input, _ := antlr.NewFileStream(os.Args[1])
	lexer := parser.NewJSONLexer(input)
	stream := antlr.NewCommonTokenStream(lexer,0)
	p := parser.NewJSONParser(stream)
	p.AddErrorListener(antlr.NewDiagnosticErrorListener(true))
	p.BuildParseTrees = true
	tree := p.Json()
	antlr.ParseTreeWalkerDefault.Walk(NewTreeShapeListener(), tree)
}
```

This one expects the input to be passed on the command line:

```
go run test.go input
```

The output is:

```
{"a":1}
{"a":1}
"a":1
1
```
