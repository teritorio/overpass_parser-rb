# typed: true

module OverpassParser
  class Visitor
    sig { params(ctx: T.untyped).void }
    def visit_children(ctx); end
  end

  class BaseErrorListener
    sig { params(line: Integer, char_position_in_line:Integer, msg: String).void }
    def syntax_error(line, char_position_in_line, msg); end

    # sig { void }
    # def report_ambiguity; end

    # sig { void }
    # def report_attempting_full_context; end

    # sig { void }
    # def report_context_sensitivity; end
  end

  class Parser
    sig { params(script: String).returns(Parser) }
    def self.parse(script); end

    sig { params(error_listener: BaseErrorListener).void }
    def add_error_listener(error_listener); end

    sig { params(visitor: Visitor).void }
    def visit(visitor); end
  end
end
