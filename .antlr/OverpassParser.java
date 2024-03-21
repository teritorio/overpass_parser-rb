// Generated from /home/fred/teritorio/code/overpass_parser-rb/Overpass.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class OverpassParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		WS=25, SL_COMMENT=26, ML_COMMENT=27, FLOAT_NUMBER=28, INTEGER_NUMBER=29, 
		OPERATOR=30, NOT=31, UNQUOTED_STRING=32, SIMPLE_QUOTED_STRING=33, DOUBLE_QUOTED_STRING=34, 
		ID=35, DOT_ID=36;
	public static final int
		RULE_token = 0, RULE_metadata = 1, RULE_selector = 2, RULE_filter_bbox = 3, 
		RULE_filter_osm_id = 4, RULE_filter_osm_ids = 5, RULE_filter_area = 6, 
		RULE_filter_around = 7, RULE_filter = 8, RULE_asignation = 9, RULE_object_type = 10, 
		RULE_query_object = 11, RULE_query_recurse = 12, RULE_query = 13, RULE_query_group = 14, 
		RULE_query_sequence = 15, RULE_ouput = 16, RULE_request = 17;
	private static String[] makeRuleNames() {
		return new String[] {
			"token", "metadata", "selector", "filter_bbox", "filter_osm_id", "filter_osm_ids", 
			"filter_area", "filter_around", "filter", "asignation", "object_type", 
			"query_object", "query_recurse", "query", "query_group", "query_sequence", 
			"ouput", "request"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
			"'around'", "':'", "'('", "')'", "'->'", "'node'", "'way'", "'relation'", 
			"'nwr'", "'<'", "'<<'", "'>'", "'>>'", "';'", "'out'", "'center'", "'meta'", 
			null, null, null, null, null, null, "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "WS", "SL_COMMENT", "ML_COMMENT", "FLOAT_NUMBER", "INTEGER_NUMBER", 
			"OPERATOR", "NOT", "UNQUOTED_STRING", "SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", 
			"ID", "DOT_ID"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Overpass.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public OverpassParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class TokenContext extends ParserRuleContext {
		public TerminalNode SIMPLE_QUOTED_STRING() { return getToken(OverpassParser.SIMPLE_QUOTED_STRING, 0); }
		public TerminalNode DOUBLE_QUOTED_STRING() { return getToken(OverpassParser.DOUBLE_QUOTED_STRING, 0); }
		public TerminalNode UNQUOTED_STRING() { return getToken(OverpassParser.UNQUOTED_STRING, 0); }
		public TerminalNode FLOAT_NUMBER() { return getToken(OverpassParser.FLOAT_NUMBER, 0); }
		public TokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_token; }
	}

	public final TokenContext token() throws RecognitionException {
		TokenContext _localctx = new TokenContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_token);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(36);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FLOAT_NUMBER) | (1L << UNQUOTED_STRING) | (1L << SIMPLE_QUOTED_STRING) | (1L << DOUBLE_QUOTED_STRING))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MetadataContext extends ParserRuleContext {
		public TerminalNode INTEGER_NUMBER() { return getToken(OverpassParser.INTEGER_NUMBER, 0); }
		public MetadataContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_metadata; }
	}

	public final MetadataContext metadata() throws RecognitionException {
		MetadataContext _localctx = new MetadataContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_metadata);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			match(T__0);
			setState(39);
			match(T__1);
			setState(40);
			match(T__2);
			setState(45);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(41);
				match(T__0);
				setState(42);
				match(T__3);
				setState(43);
				match(INTEGER_NUMBER);
				setState(44);
				match(T__2);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectorContext extends ParserRuleContext {
		public TokenContext key;
		public TokenContext value;
		public TerminalNode OPERATOR() { return getToken(OverpassParser.OPERATOR, 0); }
		public List<TokenContext> token() {
			return getRuleContexts(TokenContext.class);
		}
		public TokenContext token(int i) {
			return getRuleContext(TokenContext.class,i);
		}
		public TerminalNode NOT() { return getToken(OverpassParser.NOT, 0); }
		public SelectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selector; }
	}

	public final SelectorContext selector() throws RecognitionException {
		SelectorContext _localctx = new SelectorContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_selector);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			match(T__0);
			setState(56);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				{
				setState(49);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(48);
					match(NOT);
					}
				}

				setState(51);
				((SelectorContext)_localctx).key = token();
				}
				}
				break;
			case 2:
				{
				{
				setState(52);
				((SelectorContext)_localctx).key = token();
				setState(53);
				match(OPERATOR);
				setState(54);
				((SelectorContext)_localctx).value = token();
				}
				}
				break;
			}
			setState(58);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Filter_bboxContext extends ParserRuleContext {
		public List<TerminalNode> FLOAT_NUMBER() { return getTokens(OverpassParser.FLOAT_NUMBER); }
		public TerminalNode FLOAT_NUMBER(int i) {
			return getToken(OverpassParser.FLOAT_NUMBER, i);
		}
		public Filter_bboxContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_bbox; }
	}

	public final Filter_bboxContext filter_bbox() throws RecognitionException {
		Filter_bboxContext _localctx = new Filter_bboxContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_filter_bbox);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			match(FLOAT_NUMBER);
			setState(61);
			match(T__4);
			setState(62);
			match(FLOAT_NUMBER);
			setState(63);
			match(T__4);
			setState(64);
			match(FLOAT_NUMBER);
			setState(65);
			match(T__4);
			setState(66);
			match(FLOAT_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Filter_osm_idContext extends ParserRuleContext {
		public TerminalNode INTEGER_NUMBER() { return getToken(OverpassParser.INTEGER_NUMBER, 0); }
		public Filter_osm_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_osm_id; }
	}

	public final Filter_osm_idContext filter_osm_id() throws RecognitionException {
		Filter_osm_idContext _localctx = new Filter_osm_idContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_filter_osm_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(68);
			match(INTEGER_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Filter_osm_idsContext extends ParserRuleContext {
		public List<TerminalNode> INTEGER_NUMBER() { return getTokens(OverpassParser.INTEGER_NUMBER); }
		public TerminalNode INTEGER_NUMBER(int i) {
			return getToken(OverpassParser.INTEGER_NUMBER, i);
		}
		public Filter_osm_idsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_osm_ids; }
	}

	public final Filter_osm_idsContext filter_osm_ids() throws RecognitionException {
		Filter_osm_idsContext _localctx = new Filter_osm_idsContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_filter_osm_ids);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(T__5);
			setState(71);
			match(INTEGER_NUMBER);
			setState(76);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(72);
				match(T__4);
				setState(73);
				match(INTEGER_NUMBER);
				}
				}
				setState(78);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Filter_areaContext extends ParserRuleContext {
		public TerminalNode DOT_ID() { return getToken(OverpassParser.DOT_ID, 0); }
		public Filter_areaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_area; }
	}

	public final Filter_areaContext filter_area() throws RecognitionException {
		Filter_areaContext _localctx = new Filter_areaContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_filter_area);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			match(T__6);
			setState(80);
			match(DOT_ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Filter_aroundContext extends ParserRuleContext {
		public TerminalNode DOT_ID() { return getToken(OverpassParser.DOT_ID, 0); }
		public TerminalNode FLOAT_NUMBER() { return getToken(OverpassParser.FLOAT_NUMBER, 0); }
		public Filter_aroundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_around; }
	}

	public final Filter_aroundContext filter_around() throws RecognitionException {
		Filter_aroundContext _localctx = new Filter_aroundContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_filter_around);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
			match(T__7);
			setState(83);
			match(DOT_ID);
			setState(84);
			match(T__8);
			setState(85);
			match(FLOAT_NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FilterContext extends ParserRuleContext {
		public Filter_bboxContext filter_bbox() {
			return getRuleContext(Filter_bboxContext.class,0);
		}
		public Filter_osm_idContext filter_osm_id() {
			return getRuleContext(Filter_osm_idContext.class,0);
		}
		public Filter_osm_idsContext filter_osm_ids() {
			return getRuleContext(Filter_osm_idsContext.class,0);
		}
		public Filter_areaContext filter_area() {
			return getRuleContext(Filter_areaContext.class,0);
		}
		public Filter_aroundContext filter_around() {
			return getRuleContext(Filter_aroundContext.class,0);
		}
		public FilterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter; }
	}

	public final FilterContext filter() throws RecognitionException {
		FilterContext _localctx = new FilterContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_filter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(T__9);
			setState(93);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FLOAT_NUMBER:
				{
				setState(88);
				filter_bbox();
				}
				break;
			case INTEGER_NUMBER:
				{
				setState(89);
				filter_osm_id();
				}
				break;
			case T__5:
				{
				setState(90);
				filter_osm_ids();
				}
				break;
			case T__6:
				{
				setState(91);
				filter_area();
				}
				break;
			case T__7:
				{
				setState(92);
				filter_around();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(95);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AsignationContext extends ParserRuleContext {
		public TerminalNode DOT_ID() { return getToken(OverpassParser.DOT_ID, 0); }
		public AsignationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_asignation; }
	}

	public final AsignationContext asignation() throws RecognitionException {
		AsignationContext _localctx = new AsignationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_asignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(97);
			match(T__11);
			setState(98);
			match(DOT_ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Object_typeContext extends ParserRuleContext {
		public Object_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_object_type; }
	}

	public final Object_typeContext object_type() throws RecognitionException {
		Object_typeContext _localctx = new Object_typeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_object_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Query_objectContext extends ParserRuleContext {
		public Object_typeContext object_type() {
			return getRuleContext(Object_typeContext.class,0);
		}
		public TerminalNode DOT_ID() { return getToken(OverpassParser.DOT_ID, 0); }
		public List<SelectorContext> selector() {
			return getRuleContexts(SelectorContext.class);
		}
		public SelectorContext selector(int i) {
			return getRuleContext(SelectorContext.class,i);
		}
		public List<FilterContext> filter() {
			return getRuleContexts(FilterContext.class);
		}
		public FilterContext filter(int i) {
			return getRuleContext(FilterContext.class,i);
		}
		public AsignationContext asignation() {
			return getRuleContext(AsignationContext.class,0);
		}
		public Query_objectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_object; }
	}

	public final Query_objectContext query_object() throws RecognitionException {
		Query_objectContext _localctx = new Query_objectContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_query_object);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(102);
			object_type();
			setState(104);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT_ID) {
				{
				setState(103);
				match(DOT_ID);
				}
			}

			setState(109);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(106);
				selector();
				}
				}
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(115);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__9) {
				{
				{
				setState(112);
				filter();
				}
				}
				setState(117);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__11) {
				{
				setState(118);
				asignation();
				}
			}

			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Query_recurseContext extends ParserRuleContext {
		public Query_recurseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_recurse; }
	}

	public final Query_recurseContext query_recurse() throws RecognitionException {
		Query_recurseContext _localctx = new Query_recurseContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_query_recurse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(121);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryContext extends ParserRuleContext {
		public Query_objectContext query_object() {
			return getRuleContext(Query_objectContext.class,0);
		}
		public Query_recurseContext query_recurse() {
			return getRuleContext(Query_recurseContext.class,0);
		}
		public QueryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query; }
	}

	public final QueryContext query() throws RecognitionException {
		QueryContext _localctx = new QueryContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_query);
		try {
			setState(125);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
				enterOuterAlt(_localctx, 1);
				{
				setState(123);
				query_object();
				}
				break;
			case T__16:
			case T__17:
			case T__18:
			case T__19:
				enterOuterAlt(_localctx, 2);
				{
				setState(124);
				query_recurse();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Query_groupContext extends ParserRuleContext {
		public List<Query_sequenceContext> query_sequence() {
			return getRuleContexts(Query_sequenceContext.class);
		}
		public Query_sequenceContext query_sequence(int i) {
			return getRuleContext(Query_sequenceContext.class,i);
		}
		public Query_groupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_group; }
	}

	public final Query_groupContext query_group() throws RecognitionException {
		Query_groupContext _localctx = new Query_groupContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_query_group);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(127);
			match(T__9);
			setState(131); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(128);
				query_sequence();
				setState(129);
				match(T__20);
				}
				}
				setState(133); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__9) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19))) != 0) );
			setState(135);
			match(T__10);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Query_sequenceContext extends ParserRuleContext {
		public QueryContext query() {
			return getRuleContext(QueryContext.class,0);
		}
		public Query_groupContext query_group() {
			return getRuleContext(Query_groupContext.class,0);
		}
		public Query_sequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_sequence; }
	}

	public final Query_sequenceContext query_sequence() throws RecognitionException {
		Query_sequenceContext _localctx = new Query_sequenceContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_query_sequence);
		try {
			setState(139);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
			case T__18:
			case T__19:
				enterOuterAlt(_localctx, 1);
				{
				setState(137);
				query();
				}
				break;
			case T__9:
				enterOuterAlt(_localctx, 2);
				{
				setState(138);
				query_group();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OuputContext extends ParserRuleContext {
		public OuputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ouput; }
	}

	public final OuputContext ouput() throws RecognitionException {
		OuputContext _localctx = new OuputContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_ouput);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			match(T__21);
			setState(142);
			match(T__22);
			setState(143);
			match(T__23);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RequestContext extends ParserRuleContext {
		public MetadataContext metadata() {
			return getRuleContext(MetadataContext.class,0);
		}
		public List<Query_sequenceContext> query_sequence() {
			return getRuleContexts(Query_sequenceContext.class);
		}
		public Query_sequenceContext query_sequence(int i) {
			return getRuleContext(Query_sequenceContext.class,i);
		}
		public OuputContext ouput() {
			return getRuleContext(OuputContext.class,0);
		}
		public RequestContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_request; }
	}

	public final RequestContext request() throws RecognitionException {
		RequestContext _localctx = new RequestContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_request);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(145);
				metadata();
				setState(146);
				match(T__20);
				}
			}

			setState(153); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(150);
				query_sequence();
				setState(151);
				match(T__20);
				}
				}
				setState(155); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__9) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19))) != 0) );
			setState(160);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__21) {
				{
				setState(157);
				ouput();
				setState(158);
				match(T__20);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3&\u00a5\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\60\n\3\3\4\3\4\5\4"+
		"\64\n\4\3\4\3\4\3\4\3\4\3\4\5\4;\n\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\7\7M\n\7\f\7\16\7P\13\7\3\b\3\b\3\b\3\t"+
		"\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\5\n`\n\n\3\n\3\n\3\13\3\13\3"+
		"\13\3\f\3\f\3\r\3\r\5\rk\n\r\3\r\7\rn\n\r\f\r\16\rq\13\r\3\r\7\rt\n\r"+
		"\f\r\16\rw\13\r\3\r\5\rz\n\r\3\16\3\16\3\17\3\17\5\17\u0080\n\17\3\20"+
		"\3\20\3\20\3\20\6\20\u0086\n\20\r\20\16\20\u0087\3\20\3\20\3\21\3\21\5"+
		"\21\u008e\n\21\3\22\3\22\3\22\3\22\3\23\3\23\3\23\5\23\u0097\n\23\3\23"+
		"\3\23\3\23\6\23\u009c\n\23\r\23\16\23\u009d\3\23\3\23\3\23\5\23\u00a3"+
		"\n\23\3\23\2\2\24\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$\2\5\4\2\36"+
		"\36\"$\4\2\t\t\17\22\3\2\23\26\2\u00a4\2&\3\2\2\2\4(\3\2\2\2\6\61\3\2"+
		"\2\2\b>\3\2\2\2\nF\3\2\2\2\fH\3\2\2\2\16Q\3\2\2\2\20T\3\2\2\2\22Y\3\2"+
		"\2\2\24c\3\2\2\2\26f\3\2\2\2\30h\3\2\2\2\32{\3\2\2\2\34\177\3\2\2\2\36"+
		"\u0081\3\2\2\2 \u008d\3\2\2\2\"\u008f\3\2\2\2$\u0096\3\2\2\2&\'\t\2\2"+
		"\2\'\3\3\2\2\2()\7\3\2\2)*\7\4\2\2*/\7\5\2\2+,\7\3\2\2,-\7\6\2\2-.\7\37"+
		"\2\2.\60\7\5\2\2/+\3\2\2\2/\60\3\2\2\2\60\5\3\2\2\2\61:\7\3\2\2\62\64"+
		"\7!\2\2\63\62\3\2\2\2\63\64\3\2\2\2\64\65\3\2\2\2\65;\5\2\2\2\66\67\5"+
		"\2\2\2\678\7 \2\289\5\2\2\29;\3\2\2\2:\63\3\2\2\2:\66\3\2\2\2;<\3\2\2"+
		"\2<=\7\5\2\2=\7\3\2\2\2>?\7\36\2\2?@\7\7\2\2@A\7\36\2\2AB\7\7\2\2BC\7"+
		"\36\2\2CD\7\7\2\2DE\7\36\2\2E\t\3\2\2\2FG\7\37\2\2G\13\3\2\2\2HI\7\b\2"+
		"\2IN\7\37\2\2JK\7\7\2\2KM\7\37\2\2LJ\3\2\2\2MP\3\2\2\2NL\3\2\2\2NO\3\2"+
		"\2\2O\r\3\2\2\2PN\3\2\2\2QR\7\t\2\2RS\7&\2\2S\17\3\2\2\2TU\7\n\2\2UV\7"+
		"&\2\2VW\7\13\2\2WX\7\36\2\2X\21\3\2\2\2Y_\7\f\2\2Z`\5\b\5\2[`\5\n\6\2"+
		"\\`\5\f\7\2]`\5\16\b\2^`\5\20\t\2_Z\3\2\2\2_[\3\2\2\2_\\\3\2\2\2_]\3\2"+
		"\2\2_^\3\2\2\2`a\3\2\2\2ab\7\r\2\2b\23\3\2\2\2cd\7\16\2\2de\7&\2\2e\25"+
		"\3\2\2\2fg\t\3\2\2g\27\3\2\2\2hj\5\26\f\2ik\7&\2\2ji\3\2\2\2jk\3\2\2\2"+
		"ko\3\2\2\2ln\5\6\4\2ml\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pu\3\2\2\2"+
		"qo\3\2\2\2rt\5\22\n\2sr\3\2\2\2tw\3\2\2\2us\3\2\2\2uv\3\2\2\2vy\3\2\2"+
		"\2wu\3\2\2\2xz\5\24\13\2yx\3\2\2\2yz\3\2\2\2z\31\3\2\2\2{|\t\4\2\2|\33"+
		"\3\2\2\2}\u0080\5\30\r\2~\u0080\5\32\16\2\177}\3\2\2\2\177~\3\2\2\2\u0080"+
		"\35\3\2\2\2\u0081\u0085\7\f\2\2\u0082\u0083\5 \21\2\u0083\u0084\7\27\2"+
		"\2\u0084\u0086\3\2\2\2\u0085\u0082\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0085"+
		"\3\2\2\2\u0087\u0088\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008a\7\r\2\2\u008a"+
		"\37\3\2\2\2\u008b\u008e\5\34\17\2\u008c\u008e\5\36\20\2\u008d\u008b\3"+
		"\2\2\2\u008d\u008c\3\2\2\2\u008e!\3\2\2\2\u008f\u0090\7\30\2\2\u0090\u0091"+
		"\7\31\2\2\u0091\u0092\7\32\2\2\u0092#\3\2\2\2\u0093\u0094\5\4\3\2\u0094"+
		"\u0095\7\27\2\2\u0095\u0097\3\2\2\2\u0096\u0093\3\2\2\2\u0096\u0097\3"+
		"\2\2\2\u0097\u009b\3\2\2\2\u0098\u0099\5 \21\2\u0099\u009a\7\27\2\2\u009a"+
		"\u009c\3\2\2\2\u009b\u0098\3\2\2\2\u009c\u009d\3\2\2\2\u009d\u009b\3\2"+
		"\2\2\u009d\u009e\3\2\2\2\u009e\u00a2\3\2\2\2\u009f\u00a0\5\"\22\2\u00a0"+
		"\u00a1\7\27\2\2\u00a1\u00a3\3\2\2\2\u00a2\u009f\3\2\2\2\u00a2\u00a3\3"+
		"\2\2\2\u00a3%\3\2\2\2\21/\63:N_jouy\177\u0087\u008d\u0096\u009d\u00a2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}