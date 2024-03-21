#include <iostream>

#include <antlr4-runtime.h>

#include "antlrgen/OverpassParser.h"
#include "antlrgen/OverpassBaseVisitor.h"
#include "antlrgen/OverpassLexer.h"

#include <rice/rice.hpp>
#include <rice/stl.hpp>

#ifdef _WIN32
#undef OPTIONAL
#undef IN
#undef OUT
#endif

#undef FALSE
#undef TRUE

#undef TYPE

using namespace std;
using namespace Rice;
using namespace antlr4;

Class rb_cTokenContext;
Class rb_cMetadataContext;
Class rb_cSelectorContext;
Class rb_cFilter_bboxContext;
Class rb_cFilter_osm_idContext;
Class rb_cFilter_osm_idsContext;
Class rb_cFilter_areaContext;
Class rb_cFilter_aroundContext;
Class rb_cFilterContext;
Class rb_cAsignationContext;
Class rb_cObject_typeContext;
Class rb_cQuery_objectContext;
Class rb_cQuery_recurseContext;
Class rb_cQueryContext;
Class rb_cQuery_groupContext;
Class rb_cQuery_sequenceContext;
Class rb_cOuputContext;
Class rb_cRequestContext;
Class rb_cToken;
Class rb_cParser;
Class rb_cParseTree;
Class rb_cTerminalNode;
Class rb_cContextProxy;

namespace Rice::detail {
  template <>
  class To_Ruby<Token*> {
  public:
    VALUE convert(Token* const &x) {
      if (!x) return Nil;
      return Data_Object<Token>(x, false, rb_cToken);
    }
  };

  template <>
  class To_Ruby<tree::ParseTree*> {
  public:
    VALUE convert(tree::ParseTree* const &x) {
      if (!x) return Nil;
      return Data_Object<tree::ParseTree>(x, false, rb_cParseTree);
    }
  };

  template <>
  class To_Ruby<tree::TerminalNode*> {
  public:
    VALUE convert(tree::TerminalNode* const &x) {
      if (!x) return Nil;
      return Data_Object<tree::TerminalNode>(x, false, rb_cTerminalNode);
    }
  };
}

class ContextProxy {
public:
  ContextProxy(tree::ParseTree* orig) {
    this -> orig = orig;
  }

  tree::ParseTree* getOriginal() {
    return orig;
  }

  std::string getText() {
    return orig -> getText();
  }

  Object getStart() {
    auto token = ((ParserRuleContext*) orig) -> getStart();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Object getStop() {
    auto token = ((ParserRuleContext*) orig) -> getStop();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Array getChildren() {
    Array children;
    if (orig != nullptr) {
      for (auto it = orig -> children.begin(); it != orig -> children.end(); it ++) {
        Object parseTree = ContextProxy::wrapParseTree(*it);

        if (parseTree != Nil) {
          children.push(parseTree);
        }
      }
    }
    return children;
  }

  Object getParent() {
    return orig == nullptr ? Nil : ContextProxy::wrapParseTree(orig -> parent);
  }

  size_t childCount() {
    return orig == nullptr ? 0 : orig -> children.size();
  }

  bool doubleEquals(Object other) {
    if (other.is_a(rb_cContextProxy)) {
      return detail::From_Ruby<ContextProxy*>().convert(other) -> getOriginal() == getOriginal();
    } else {
      return false;
    }
  }

private:

  static Object wrapParseTree(tree::ParseTree* node);

protected:
  tree::ParseTree* orig = nullptr;
};

class TerminalNodeProxy : public ContextProxy {
public:
  TerminalNodeProxy(tree::ParseTree* tree) : ContextProxy(tree) { }
};


class TokenContextProxy : public ContextProxy {
public:
  TokenContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object SIMPLE_QUOTED_STRING();
  Object DOUBLE_QUOTED_STRING();
  Object UNQUOTED_STRING();
  Object FLOAT_NUMBER();
};

class MetadataContextProxy : public ContextProxy {
public:
  MetadataContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INTEGER_NUMBER();
};

class SelectorContextProxy : public ContextProxy {
public:
  SelectorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object token();
  Object tokenAt(size_t i);
  Object OPERATOR();
  Object NOT();
};

class Filter_bboxContextProxy : public ContextProxy {
public:
  Filter_bboxContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object FLOAT_NUMBER();
  Object FLOAT_NUMBERAt(size_t i);
};

class Filter_osm_idContextProxy : public ContextProxy {
public:
  Filter_osm_idContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INTEGER_NUMBER();
};

class Filter_osm_idsContextProxy : public ContextProxy {
public:
  Filter_osm_idsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INTEGER_NUMBER();
  Object INTEGER_NUMBERAt(size_t i);
};

class Filter_areaContextProxy : public ContextProxy {
public:
  Filter_areaContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object DOT_ID();
};

class Filter_aroundContextProxy : public ContextProxy {
public:
  Filter_aroundContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object DOT_ID();
  Object FLOAT_NUMBER();
};

class FilterContextProxy : public ContextProxy {
public:
  FilterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object filter_bbox();
  Object filter_osm_id();
  Object filter_osm_ids();
  Object filter_area();
  Object filter_around();

};

class AsignationContextProxy : public ContextProxy {
public:
  AsignationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object DOT_ID();
};

class Object_typeContextProxy : public ContextProxy {
public:
  Object_typeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class Query_objectContextProxy : public ContextProxy {
public:
  Query_objectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object object_type();
  Object selector();
  Object selectorAt(size_t i);
  Object filter();
  Object filterAt(size_t i);
  Object asignation();
  Object DOT_ID();
};

class Query_recurseContextProxy : public ContextProxy {
public:
  Query_recurseContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class QueryContextProxy : public ContextProxy {
public:
  QueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query_object();
  Object query_recurse();

};

class Query_groupContextProxy : public ContextProxy {
public:
  Query_groupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query_sequence();
  Object query_sequenceAt(size_t i);

};

class Query_sequenceContextProxy : public ContextProxy {
public:
  Query_sequenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();
  Object query_group();

};

class OuputContextProxy : public ContextProxy {
public:
  OuputContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class RequestContextProxy : public ContextProxy {
public:
  RequestContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object metadata();
  Object query_sequence();
  Object query_sequenceAt(size_t i);
  Object ouput();

};


namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::TokenContext*> {
  public:
    VALUE convert(OverpassParser::TokenContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::TokenContext>(x, false, rb_cTokenContext);
    }
  };

  template <>
  class To_Ruby<TokenContextProxy*> {
  public:
    VALUE convert(TokenContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TokenContextProxy>(x, false, rb_cTokenContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::MetadataContext*> {
  public:
    VALUE convert(OverpassParser::MetadataContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::MetadataContext>(x, false, rb_cMetadataContext);
    }
  };

  template <>
  class To_Ruby<MetadataContextProxy*> {
  public:
    VALUE convert(MetadataContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<MetadataContextProxy>(x, false, rb_cMetadataContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::SelectorContext*> {
  public:
    VALUE convert(OverpassParser::SelectorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::SelectorContext>(x, false, rb_cSelectorContext);
    }
  };

  template <>
  class To_Ruby<SelectorContextProxy*> {
  public:
    VALUE convert(SelectorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SelectorContextProxy>(x, false, rb_cSelectorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Filter_bboxContext*> {
  public:
    VALUE convert(OverpassParser::Filter_bboxContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Filter_bboxContext>(x, false, rb_cFilter_bboxContext);
    }
  };

  template <>
  class To_Ruby<Filter_bboxContextProxy*> {
  public:
    VALUE convert(Filter_bboxContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Filter_bboxContextProxy>(x, false, rb_cFilter_bboxContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Filter_osm_idContext*> {
  public:
    VALUE convert(OverpassParser::Filter_osm_idContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Filter_osm_idContext>(x, false, rb_cFilter_osm_idContext);
    }
  };

  template <>
  class To_Ruby<Filter_osm_idContextProxy*> {
  public:
    VALUE convert(Filter_osm_idContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Filter_osm_idContextProxy>(x, false, rb_cFilter_osm_idContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Filter_osm_idsContext*> {
  public:
    VALUE convert(OverpassParser::Filter_osm_idsContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Filter_osm_idsContext>(x, false, rb_cFilter_osm_idsContext);
    }
  };

  template <>
  class To_Ruby<Filter_osm_idsContextProxy*> {
  public:
    VALUE convert(Filter_osm_idsContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Filter_osm_idsContextProxy>(x, false, rb_cFilter_osm_idsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Filter_areaContext*> {
  public:
    VALUE convert(OverpassParser::Filter_areaContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Filter_areaContext>(x, false, rb_cFilter_areaContext);
    }
  };

  template <>
  class To_Ruby<Filter_areaContextProxy*> {
  public:
    VALUE convert(Filter_areaContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Filter_areaContextProxy>(x, false, rb_cFilter_areaContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Filter_aroundContext*> {
  public:
    VALUE convert(OverpassParser::Filter_aroundContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Filter_aroundContext>(x, false, rb_cFilter_aroundContext);
    }
  };

  template <>
  class To_Ruby<Filter_aroundContextProxy*> {
  public:
    VALUE convert(Filter_aroundContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Filter_aroundContextProxy>(x, false, rb_cFilter_aroundContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::FilterContext*> {
  public:
    VALUE convert(OverpassParser::FilterContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::FilterContext>(x, false, rb_cFilterContext);
    }
  };

  template <>
  class To_Ruby<FilterContextProxy*> {
  public:
    VALUE convert(FilterContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<FilterContextProxy>(x, false, rb_cFilterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::AsignationContext*> {
  public:
    VALUE convert(OverpassParser::AsignationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::AsignationContext>(x, false, rb_cAsignationContext);
    }
  };

  template <>
  class To_Ruby<AsignationContextProxy*> {
  public:
    VALUE convert(AsignationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<AsignationContextProxy>(x, false, rb_cAsignationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Object_typeContext*> {
  public:
    VALUE convert(OverpassParser::Object_typeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Object_typeContext>(x, false, rb_cObject_typeContext);
    }
  };

  template <>
  class To_Ruby<Object_typeContextProxy*> {
  public:
    VALUE convert(Object_typeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Object_typeContextProxy>(x, false, rb_cObject_typeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Query_objectContext*> {
  public:
    VALUE convert(OverpassParser::Query_objectContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Query_objectContext>(x, false, rb_cQuery_objectContext);
    }
  };

  template <>
  class To_Ruby<Query_objectContextProxy*> {
  public:
    VALUE convert(Query_objectContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Query_objectContextProxy>(x, false, rb_cQuery_objectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Query_recurseContext*> {
  public:
    VALUE convert(OverpassParser::Query_recurseContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Query_recurseContext>(x, false, rb_cQuery_recurseContext);
    }
  };

  template <>
  class To_Ruby<Query_recurseContextProxy*> {
  public:
    VALUE convert(Query_recurseContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Query_recurseContextProxy>(x, false, rb_cQuery_recurseContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::QueryContext*> {
  public:
    VALUE convert(OverpassParser::QueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::QueryContext>(x, false, rb_cQueryContext);
    }
  };

  template <>
  class To_Ruby<QueryContextProxy*> {
  public:
    VALUE convert(QueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryContextProxy>(x, false, rb_cQueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Query_groupContext*> {
  public:
    VALUE convert(OverpassParser::Query_groupContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Query_groupContext>(x, false, rb_cQuery_groupContext);
    }
  };

  template <>
  class To_Ruby<Query_groupContextProxy*> {
  public:
    VALUE convert(Query_groupContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Query_groupContextProxy>(x, false, rb_cQuery_groupContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::Query_sequenceContext*> {
  public:
    VALUE convert(OverpassParser::Query_sequenceContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::Query_sequenceContext>(x, false, rb_cQuery_sequenceContext);
    }
  };

  template <>
  class To_Ruby<Query_sequenceContextProxy*> {
  public:
    VALUE convert(Query_sequenceContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<Query_sequenceContextProxy>(x, false, rb_cQuery_sequenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::OuputContext*> {
  public:
    VALUE convert(OverpassParser::OuputContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::OuputContext>(x, false, rb_cOuputContext);
    }
  };

  template <>
  class To_Ruby<OuputContextProxy*> {
  public:
    VALUE convert(OuputContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<OuputContextProxy>(x, false, rb_cOuputContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<OverpassParser::RequestContext*> {
  public:
    VALUE convert(OverpassParser::RequestContext* const &x) {
      if (!x) return Nil;
      return Data_Object<OverpassParser::RequestContext>(x, false, rb_cRequestContext);
    }
  };

  template <>
  class To_Ruby<RequestContextProxy*> {
  public:
    VALUE convert(RequestContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RequestContextProxy>(x, false, rb_cRequestContext);
    }
  };
}


Object TokenContextProxy::SIMPLE_QUOTED_STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::TokenContext*)orig) -> SIMPLE_QUOTED_STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TokenContextProxy::DOUBLE_QUOTED_STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::TokenContext*)orig) -> DOUBLE_QUOTED_STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TokenContextProxy::UNQUOTED_STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::TokenContext*)orig) -> UNQUOTED_STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TokenContextProxy::FLOAT_NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::TokenContext*)orig) -> FLOAT_NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object MetadataContextProxy::INTEGER_NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::MetadataContext*)orig) -> INTEGER_NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SelectorContextProxy::token() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((OverpassParser::SelectorContext*)orig) -> token().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(tokenAt(i));
    }
  }

  return std::move(a);
}

Object SelectorContextProxy::tokenAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::SelectorContext*)orig) -> token(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SelectorContextProxy::OPERATOR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::SelectorContext*)orig) -> OPERATOR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SelectorContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::SelectorContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Filter_bboxContextProxy::FLOAT_NUMBER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((OverpassParser::Filter_bboxContext*)orig) -> FLOAT_NUMBER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object Filter_bboxContextProxy::FLOAT_NUMBERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Filter_bboxContext*)orig) -> FLOAT_NUMBER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Filter_osm_idContextProxy::INTEGER_NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Filter_osm_idContext*)orig) -> INTEGER_NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Filter_osm_idsContextProxy::INTEGER_NUMBER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((OverpassParser::Filter_osm_idsContext*)orig) -> INTEGER_NUMBER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object Filter_osm_idsContextProxy::INTEGER_NUMBERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Filter_osm_idsContext*)orig) -> INTEGER_NUMBER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Filter_areaContextProxy::DOT_ID() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Filter_areaContext*)orig) -> DOT_ID();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Filter_aroundContextProxy::DOT_ID() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Filter_aroundContext*)orig) -> DOT_ID();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Filter_aroundContextProxy::FLOAT_NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Filter_aroundContext*)orig) -> FLOAT_NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FilterContextProxy::filter_bbox() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::FilterContext*)orig) -> filter_bbox();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FilterContextProxy::filter_osm_id() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::FilterContext*)orig) -> filter_osm_id();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FilterContextProxy::filter_osm_ids() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::FilterContext*)orig) -> filter_osm_ids();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FilterContextProxy::filter_area() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::FilterContext*)orig) -> filter_area();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FilterContextProxy::filter_around() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::FilterContext*)orig) -> filter_around();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object AsignationContextProxy::DOT_ID() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::AsignationContext*)orig) -> DOT_ID();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Query_objectContextProxy::object_type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_objectContext*)orig) -> object_type();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_objectContextProxy::selector() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((OverpassParser::Query_objectContext*)orig) -> selector().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(selectorAt(i));
    }
  }

  return std::move(a);
}

Object Query_objectContextProxy::selectorAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_objectContext*)orig) -> selector(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_objectContextProxy::filter() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((OverpassParser::Query_objectContext*)orig) -> filter().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(filterAt(i));
    }
  }

  return std::move(a);
}

Object Query_objectContextProxy::filterAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_objectContext*)orig) -> filter(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_objectContextProxy::asignation() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_objectContext*)orig) -> asignation();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_objectContextProxy::DOT_ID() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((OverpassParser::Query_objectContext*)orig) -> DOT_ID();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryContextProxy::query_object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::QueryContext*)orig) -> query_object();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QueryContextProxy::query_recurse() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::QueryContext*)orig) -> query_recurse();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_groupContextProxy::query_sequence() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((OverpassParser::Query_groupContext*)orig) -> query_sequence().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(query_sequenceAt(i));
    }
  }

  return std::move(a);
}

Object Query_groupContextProxy::query_sequenceAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_groupContext*)orig) -> query_sequence(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_sequenceContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_sequenceContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object Query_sequenceContextProxy::query_group() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::Query_sequenceContext*)orig) -> query_group();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RequestContextProxy::metadata() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::RequestContext*)orig) -> metadata();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RequestContextProxy::query_sequence() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((OverpassParser::RequestContext*)orig) -> query_sequence().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(query_sequenceAt(i));
    }
  }

  return std::move(a);
}

Object RequestContextProxy::query_sequenceAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::RequestContext*)orig) -> query_sequence(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RequestContextProxy::ouput() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((OverpassParser::RequestContext*)orig) -> ouput();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}


class VisitorProxy : public OverpassBaseVisitor, public Director {
public:
  VisitorProxy(Object self) : Director(self) { }

  Object ruby_visit(ContextProxy* proxy) {
    auto result = visit(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  Object ruby_visitChildren(ContextProxy* proxy) {
    auto result = visitChildren(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  virtual antlrcpp::Any visitToken(OverpassParser::TokenContext *ctx) override {
    TokenContextProxy proxy(ctx);
    return getSelf().call("visit_token", &proxy);
  }

  virtual antlrcpp::Any visitMetadata(OverpassParser::MetadataContext *ctx) override {
    MetadataContextProxy proxy(ctx);
    return getSelf().call("visit_metadata", &proxy);
  }

  virtual antlrcpp::Any visitSelector(OverpassParser::SelectorContext *ctx) override {
    SelectorContextProxy proxy(ctx);
    return getSelf().call("visit_selector", &proxy);
  }

  virtual antlrcpp::Any visitFilter_bbox(OverpassParser::Filter_bboxContext *ctx) override {
    Filter_bboxContextProxy proxy(ctx);
    return getSelf().call("visit_filter_bbox", &proxy);
  }

  virtual antlrcpp::Any visitFilter_osm_id(OverpassParser::Filter_osm_idContext *ctx) override {
    Filter_osm_idContextProxy proxy(ctx);
    return getSelf().call("visit_filter_osm_id", &proxy);
  }

  virtual antlrcpp::Any visitFilter_osm_ids(OverpassParser::Filter_osm_idsContext *ctx) override {
    Filter_osm_idsContextProxy proxy(ctx);
    return getSelf().call("visit_filter_osm_ids", &proxy);
  }

  virtual antlrcpp::Any visitFilter_area(OverpassParser::Filter_areaContext *ctx) override {
    Filter_areaContextProxy proxy(ctx);
    return getSelf().call("visit_filter_area", &proxy);
  }

  virtual antlrcpp::Any visitFilter_around(OverpassParser::Filter_aroundContext *ctx) override {
    Filter_aroundContextProxy proxy(ctx);
    return getSelf().call("visit_filter_around", &proxy);
  }

  virtual antlrcpp::Any visitFilter(OverpassParser::FilterContext *ctx) override {
    FilterContextProxy proxy(ctx);
    return getSelf().call("visit_filter", &proxy);
  }

  virtual antlrcpp::Any visitAsignation(OverpassParser::AsignationContext *ctx) override {
    AsignationContextProxy proxy(ctx);
    return getSelf().call("visit_asignation", &proxy);
  }

  virtual antlrcpp::Any visitObject_type(OverpassParser::Object_typeContext *ctx) override {
    Object_typeContextProxy proxy(ctx);
    return getSelf().call("visit_object_type", &proxy);
  }

  virtual antlrcpp::Any visitQuery_object(OverpassParser::Query_objectContext *ctx) override {
    Query_objectContextProxy proxy(ctx);
    return getSelf().call("visit_query_object", &proxy);
  }

  virtual antlrcpp::Any visitQuery_recurse(OverpassParser::Query_recurseContext *ctx) override {
    Query_recurseContextProxy proxy(ctx);
    return getSelf().call("visit_query_recurse", &proxy);
  }

  virtual antlrcpp::Any visitQuery(OverpassParser::QueryContext *ctx) override {
    QueryContextProxy proxy(ctx);
    return getSelf().call("visit_query", &proxy);
  }

  virtual antlrcpp::Any visitQuery_group(OverpassParser::Query_groupContext *ctx) override {
    Query_groupContextProxy proxy(ctx);
    return getSelf().call("visit_query_group", &proxy);
  }

  virtual antlrcpp::Any visitQuery_sequence(OverpassParser::Query_sequenceContext *ctx) override {
    Query_sequenceContextProxy proxy(ctx);
    return getSelf().call("visit_query_sequence", &proxy);
  }

  virtual antlrcpp::Any visitOuput(OverpassParser::OuputContext *ctx) override {
    OuputContextProxy proxy(ctx);
    return getSelf().call("visit_ouput", &proxy);
  }

  virtual antlrcpp::Any visitRequest(OverpassParser::RequestContext *ctx) override {
    RequestContextProxy proxy(ctx);
    return getSelf().call("visit_request", &proxy);
  }

};


class ParserProxy {
public:
  static ParserProxy* parse(string code) {
    auto input = new ANTLRInputStream(code);
    return parseStream(input);
  }

  static ParserProxy* parseFile(string file) {
    ifstream stream;
    stream.open(file);

    auto input = new ANTLRInputStream(stream);
    auto parser = parseStream(input);

    stream.close();

    return parser;
  }

  Object request() {
    auto ctx = this -> parser -> request();

    RequestContextProxy proxy((OverpassParser::RequestContext*) ctx);
    return detail::To_Ruby<RequestContextProxy>().convert(proxy);
  }

  Object visit(VisitorProxy* visitor) {
    auto result = visitor -> visit(this -> parser -> request());

    // reset for the next visit call
    this -> lexer -> reset();
    this -> parser -> reset();

    return std::any_cast<Object>(result);
  }

  ~ParserProxy() {
    delete this -> parser;
    delete this -> tokens;
    delete this -> lexer;
    delete this -> input;
  }

private:
  static ParserProxy* parseStream(ANTLRInputStream* input) {
    ParserProxy* parser = new ParserProxy();

    parser -> input = input;
    parser -> lexer = new OverpassLexer(parser -> input);
    parser -> tokens = new CommonTokenStream(parser -> lexer);
    parser -> parser = new OverpassParser(parser -> tokens);

    return parser;
  }

  ParserProxy() {};

  ANTLRInputStream* input;
  OverpassLexer* lexer;
  CommonTokenStream* tokens;
  OverpassParser* parser;
};

namespace Rice::detail {
  template <>
  class To_Ruby<ParserProxy*> {
  public:
    VALUE convert(ParserProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ParserProxy>(x, false, rb_cParser);
    }
  };
}


Object ContextProxy::wrapParseTree(tree::ParseTree* node) {
  if (antlrcpp::is<OverpassParser::TokenContext*>(node)) {
    TokenContextProxy proxy((OverpassParser::TokenContext*)node);
    return detail::To_Ruby<TokenContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::MetadataContext*>(node)) {
    MetadataContextProxy proxy((OverpassParser::MetadataContext*)node);
    return detail::To_Ruby<MetadataContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::SelectorContext*>(node)) {
    SelectorContextProxy proxy((OverpassParser::SelectorContext*)node);
    return detail::To_Ruby<SelectorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Filter_bboxContext*>(node)) {
    Filter_bboxContextProxy proxy((OverpassParser::Filter_bboxContext*)node);
    return detail::To_Ruby<Filter_bboxContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Filter_osm_idContext*>(node)) {
    Filter_osm_idContextProxy proxy((OverpassParser::Filter_osm_idContext*)node);
    return detail::To_Ruby<Filter_osm_idContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Filter_osm_idsContext*>(node)) {
    Filter_osm_idsContextProxy proxy((OverpassParser::Filter_osm_idsContext*)node);
    return detail::To_Ruby<Filter_osm_idsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Filter_areaContext*>(node)) {
    Filter_areaContextProxy proxy((OverpassParser::Filter_areaContext*)node);
    return detail::To_Ruby<Filter_areaContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Filter_aroundContext*>(node)) {
    Filter_aroundContextProxy proxy((OverpassParser::Filter_aroundContext*)node);
    return detail::To_Ruby<Filter_aroundContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::FilterContext*>(node)) {
    FilterContextProxy proxy((OverpassParser::FilterContext*)node);
    return detail::To_Ruby<FilterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::AsignationContext*>(node)) {
    AsignationContextProxy proxy((OverpassParser::AsignationContext*)node);
    return detail::To_Ruby<AsignationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Object_typeContext*>(node)) {
    Object_typeContextProxy proxy((OverpassParser::Object_typeContext*)node);
    return detail::To_Ruby<Object_typeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Query_objectContext*>(node)) {
    Query_objectContextProxy proxy((OverpassParser::Query_objectContext*)node);
    return detail::To_Ruby<Query_objectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Query_recurseContext*>(node)) {
    Query_recurseContextProxy proxy((OverpassParser::Query_recurseContext*)node);
    return detail::To_Ruby<Query_recurseContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::QueryContext*>(node)) {
    QueryContextProxy proxy((OverpassParser::QueryContext*)node);
    return detail::To_Ruby<QueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Query_groupContext*>(node)) {
    Query_groupContextProxy proxy((OverpassParser::Query_groupContext*)node);
    return detail::To_Ruby<Query_groupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::Query_sequenceContext*>(node)) {
    Query_sequenceContextProxy proxy((OverpassParser::Query_sequenceContext*)node);
    return detail::To_Ruby<Query_sequenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::OuputContext*>(node)) {
    OuputContextProxy proxy((OverpassParser::OuputContext*)node);
    return detail::To_Ruby<OuputContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<OverpassParser::RequestContext*>(node)) {
    RequestContextProxy proxy((OverpassParser::RequestContext*)node);
    return detail::To_Ruby<RequestContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<tree::TerminalNodeImpl*>(node)) {
    TerminalNodeProxy proxy(node);
    return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
  } else {
    return Nil;
  }
}


extern "C"
void Init_overpass_parser() {
  Module rb_mOverpassParser = define_module("OverpassParser");

  rb_cToken = define_class_under<Token>(rb_mOverpassParser, "Token")
    .define_method("text", &Token::getText)
    .define_method("channel", &Token::getChannel)
    .define_method("token_index", &Token::getTokenIndex);

  rb_cParseTree = define_class_under<tree::ParseTree>(rb_mOverpassParser, "ParseTree");

  rb_cContextProxy = define_class_under<ContextProxy>(rb_mOverpassParser, "Context")
    .define_method("children", &ContextProxy::getChildren)
    .define_method("child_count", &ContextProxy::childCount)
    .define_method("text", &ContextProxy::getText)
    .define_method("start", &ContextProxy::getStart)
    .define_method("stop", &ContextProxy::getStop)
    .define_method("parent", &ContextProxy::getParent)
    .define_method("==", &ContextProxy::doubleEquals);

  rb_cTerminalNode = define_class_under<TerminalNodeProxy, ContextProxy>(rb_mOverpassParser, "TerminalNodeImpl");

  define_class_under<OverpassBaseVisitor>(rb_mOverpassParser, "Visitor")
    .define_director<VisitorProxy>()
    .define_constructor(Constructor<VisitorProxy, Object>())
    .define_method("visit", &VisitorProxy::ruby_visit)
    .define_method("visit_children", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_token", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_metadata", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_selector", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter_bbox", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter_osm_id", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter_osm_ids", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter_area", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter_around", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_asignation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_recurse", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_sequence", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_ouput", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_request", &VisitorProxy::ruby_visitChildren);

  rb_cParser = define_class_under<ParserProxy>(rb_mOverpassParser, "Parser")
    .define_singleton_function("parse", &ParserProxy::parse)
    .define_singleton_function("parse_file", &ParserProxy::parseFile)
    .define_method("request", &ParserProxy::request)
    .define_method("visit", &ParserProxy::visit);

  rb_cTokenContext = define_class_under<TokenContextProxy, ContextProxy>(rb_mOverpassParser, "TokenContext")
    .define_method("SIMPLE_QUOTED_STRING", &TokenContextProxy::SIMPLE_QUOTED_STRING)
    .define_method("DOUBLE_QUOTED_STRING", &TokenContextProxy::DOUBLE_QUOTED_STRING)
    .define_method("UNQUOTED_STRING", &TokenContextProxy::UNQUOTED_STRING)
    .define_method("FLOAT_NUMBER", &TokenContextProxy::FLOAT_NUMBER);

  rb_cMetadataContext = define_class_under<MetadataContextProxy, ContextProxy>(rb_mOverpassParser, "MetadataContext")
    .define_method("INTEGER_NUMBER", &MetadataContextProxy::INTEGER_NUMBER);

  rb_cSelectorContext = define_class_under<SelectorContextProxy, ContextProxy>(rb_mOverpassParser, "SelectorContext")
    .define_method("token", &SelectorContextProxy::token)
    .define_method("token_at", &SelectorContextProxy::tokenAt)
    .define_method("OPERATOR", &SelectorContextProxy::OPERATOR)
    .define_method("NOT", &SelectorContextProxy::NOT);

  rb_cFilter_bboxContext = define_class_under<Filter_bboxContextProxy, ContextProxy>(rb_mOverpassParser, "Filter_bboxContext")
    .define_method("FLOAT_NUMBER", &Filter_bboxContextProxy::FLOAT_NUMBER)
    .define_method("FLOAT_NUMBERAt", &Filter_bboxContextProxy::FLOAT_NUMBER);

  rb_cFilter_osm_idContext = define_class_under<Filter_osm_idContextProxy, ContextProxy>(rb_mOverpassParser, "Filter_osm_idContext")
    .define_method("INTEGER_NUMBER", &Filter_osm_idContextProxy::INTEGER_NUMBER);

  rb_cFilter_osm_idsContext = define_class_under<Filter_osm_idsContextProxy, ContextProxy>(rb_mOverpassParser, "Filter_osm_idsContext")
    .define_method("INTEGER_NUMBER", &Filter_osm_idsContextProxy::INTEGER_NUMBER)
    .define_method("INTEGER_NUMBERAt", &Filter_osm_idsContextProxy::INTEGER_NUMBER);

  rb_cFilter_areaContext = define_class_under<Filter_areaContextProxy, ContextProxy>(rb_mOverpassParser, "Filter_areaContext")
    .define_method("DOT_ID", &Filter_areaContextProxy::DOT_ID);

  rb_cFilter_aroundContext = define_class_under<Filter_aroundContextProxy, ContextProxy>(rb_mOverpassParser, "Filter_aroundContext")
    .define_method("DOT_ID", &Filter_aroundContextProxy::DOT_ID)
    .define_method("FLOAT_NUMBER", &Filter_aroundContextProxy::FLOAT_NUMBER);

  rb_cFilterContext = define_class_under<FilterContextProxy, ContextProxy>(rb_mOverpassParser, "FilterContext")
    .define_method("filter_bbox", &FilterContextProxy::filter_bbox)
    .define_method("filter_osm_id", &FilterContextProxy::filter_osm_id)
    .define_method("filter_osm_ids", &FilterContextProxy::filter_osm_ids)
    .define_method("filter_area", &FilterContextProxy::filter_area)
    .define_method("filter_around", &FilterContextProxy::filter_around);

  rb_cAsignationContext = define_class_under<AsignationContextProxy, ContextProxy>(rb_mOverpassParser, "AsignationContext")
    .define_method("DOT_ID", &AsignationContextProxy::DOT_ID);

  rb_cObject_typeContext = define_class_under<Object_typeContextProxy, ContextProxy>(rb_mOverpassParser, "Object_typeContext");

  rb_cQuery_objectContext = define_class_under<Query_objectContextProxy, ContextProxy>(rb_mOverpassParser, "Query_objectContext")
    .define_method("object_type", &Query_objectContextProxy::object_type)
    .define_method("selector", &Query_objectContextProxy::selector)
    .define_method("selector_at", &Query_objectContextProxy::selectorAt)
    .define_method("filter", &Query_objectContextProxy::filter)
    .define_method("filter_at", &Query_objectContextProxy::filterAt)
    .define_method("asignation", &Query_objectContextProxy::asignation)
    .define_method("DOT_ID", &Query_objectContextProxy::DOT_ID);

  rb_cQuery_recurseContext = define_class_under<Query_recurseContextProxy, ContextProxy>(rb_mOverpassParser, "Query_recurseContext");

  rb_cQueryContext = define_class_under<QueryContextProxy, ContextProxy>(rb_mOverpassParser, "QueryContext")
    .define_method("query_object", &QueryContextProxy::query_object)
    .define_method("query_recurse", &QueryContextProxy::query_recurse);

  rb_cQuery_groupContext = define_class_under<Query_groupContextProxy, ContextProxy>(rb_mOverpassParser, "Query_groupContext")
    .define_method("query_sequence", &Query_groupContextProxy::query_sequence)
    .define_method("query_sequence_at", &Query_groupContextProxy::query_sequenceAt);

  rb_cQuery_sequenceContext = define_class_under<Query_sequenceContextProxy, ContextProxy>(rb_mOverpassParser, "Query_sequenceContext")
    .define_method("query", &Query_sequenceContextProxy::query)
    .define_method("query_group", &Query_sequenceContextProxy::query_group);

  rb_cOuputContext = define_class_under<OuputContextProxy, ContextProxy>(rb_mOverpassParser, "OuputContext");

  rb_cRequestContext = define_class_under<RequestContextProxy, ContextProxy>(rb_mOverpassParser, "RequestContext")
    .define_method("metadata", &RequestContextProxy::metadata)
    .define_method("query_sequence", &RequestContextProxy::query_sequence)
    .define_method("query_sequence_at", &RequestContextProxy::query_sequenceAt)
    .define_method("ouput", &RequestContextProxy::ouput);
}

