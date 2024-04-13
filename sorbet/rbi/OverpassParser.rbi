# typed: true

module OverpassParser
  class Visitor
    sig { params(ctx: T.untyped).void }
    def visit_children(ctx); end
  end

  class Parser
    sig { params(script: String).returns(Parser) }
    def self.parse(script); end

    sig { params(visitor: Visitor).void }
    def visit(visitor); end
  end
end
