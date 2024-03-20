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
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, WS=23, SL_COMMENT=24, 
		ML_COMMENT=25, NUMBER=26, OPERATOR=27, NOT=28, UNQUOTED_STRING=29, QUOTED_STRING=30, 
		ID=31, DOT_ID=32;
	public static final int
		RULE_token = 0, RULE_metadata = 1, RULE_selector = 2, RULE_filter_bbox = 3, 
		RULE_filter_osm_id = 4, RULE_filter_osm_ids = 5, RULE_filter_area = 6, 
		RULE_filter = 7, RULE_asignation = 8, RULE_object_type = 9, RULE_query_object = 10, 
		RULE_query_recurse = 11, RULE_query = 12, RULE_query_group = 13, RULE_query_sequence = 14, 
		RULE_ouput = 15, RULE_request = 16;
	private static String[] makeRuleNames() {
		return new String[] {
			"token", "metadata", "selector", "filter_bbox", "filter_osm_id", "filter_osm_ids", 
			"filter_area", "filter", "asignation", "object_type", "query_object", 
			"query_recurse", "query", "query_group", "query_sequence", "ouput", "request"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
			"'('", "')'", "'->'", "'node'", "'way'", "'relation'", "'nwr'", "'<'", 
			"'<<'", "'>'", "'>>'", "';'", "'out'", "'center'", "'meta'", null, null, 
			null, null, null, "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, "WS", 
			"SL_COMMENT", "ML_COMMENT", "NUMBER", "OPERATOR", "NOT", "UNQUOTED_STRING", 
			"QUOTED_STRING", "ID", "DOT_ID"
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
		public TerminalNode QUOTED_STRING() { return getToken(OverpassParser.QUOTED_STRING, 0); }
		public TerminalNode UNQUOTED_STRING() { return getToken(OverpassParser.UNQUOTED_STRING, 0); }
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
			setState(34);
			_la = _input.LA(1);
			if ( !(_la==UNQUOTED_STRING || _la==QUOTED_STRING) ) {
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
		public TerminalNode NUMBER() { return getToken(OverpassParser.NUMBER, 0); }
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
			setState(36);
			match(T__0);
			setState(37);
			match(T__1);
			setState(38);
			match(T__2);
			setState(43);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(39);
				match(T__0);
				setState(40);
				match(T__3);
				setState(41);
				match(NUMBER);
				setState(42);
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
			setState(45);
			match(T__0);
			setState(54);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				{
				setState(47);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(46);
					match(NOT);
					}
				}

				setState(49);
				((SelectorContext)_localctx).key = token();
				}
				}
				break;
			case 2:
				{
				{
				setState(50);
				((SelectorContext)_localctx).key = token();
				setState(51);
				match(OPERATOR);
				setState(52);
				((SelectorContext)_localctx).value = token();
				}
				}
				break;
			}
			setState(56);
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
		public List<TerminalNode> NUMBER() { return getTokens(OverpassParser.NUMBER); }
		public TerminalNode NUMBER(int i) {
			return getToken(OverpassParser.NUMBER, i);
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
			setState(58);
			match(NUMBER);
			setState(59);
			match(T__4);
			setState(60);
			match(NUMBER);
			setState(61);
			match(T__4);
			setState(62);
			match(NUMBER);
			setState(63);
			match(T__4);
			setState(64);
			match(NUMBER);
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
		public TerminalNode NUMBER() { return getToken(OverpassParser.NUMBER, 0); }
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
			setState(66);
			match(NUMBER);
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
		public List<TerminalNode> NUMBER() { return getTokens(OverpassParser.NUMBER); }
		public TerminalNode NUMBER(int i) {
			return getToken(OverpassParser.NUMBER, i);
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
			setState(68);
			match(T__5);
			setState(69);
			match(NUMBER);
			setState(74);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(70);
				match(T__4);
				setState(71);
				match(NUMBER);
				}
				}
				setState(76);
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
			setState(77);
			match(T__6);
			setState(78);
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
		public FilterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter; }
	}

	public final FilterContext filter() throws RecognitionException {
		FilterContext _localctx = new FilterContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_filter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
			match(T__7);
			setState(85);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				{
				setState(81);
				filter_bbox();
				}
				break;
			case 2:
				{
				setState(82);
				filter_osm_id();
				}
				break;
			case 3:
				{
				setState(83);
				filter_osm_ids();
				}
				break;
			case 4:
				{
				setState(84);
				filter_area();
				}
				break;
			}
			setState(87);
			match(T__8);
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
		enterRule(_localctx, 16, RULE_asignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(T__9);
			setState(90);
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
		enterRule(_localctx, 18, RULE_object_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13))) != 0)) ) {
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
		enterRule(_localctx, 20, RULE_query_object);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(94);
			object_type();
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT_ID) {
				{
				setState(95);
				match(DOT_ID);
				}
			}

			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(98);
				selector();
				}
				}
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__7) {
				{
				{
				setState(104);
				filter();
				}
				}
				setState(109);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__9) {
				{
				setState(110);
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
		enterRule(_localctx, 22, RULE_query_recurse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0)) ) {
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
		enterRule(_localctx, 24, RULE_query);
		try {
			setState(117);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
			case T__10:
			case T__11:
			case T__12:
			case T__13:
				enterOuterAlt(_localctx, 1);
				{
				setState(115);
				query_object();
				}
				break;
			case T__14:
			case T__15:
			case T__16:
			case T__17:
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
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
		enterRule(_localctx, 26, RULE_query_group);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(119);
			match(T__7);
			setState(123); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(120);
				query_sequence();
				setState(121);
				match(T__18);
				}
				}
				setState(125); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__7) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0) );
			setState(127);
			match(T__8);
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
		enterRule(_localctx, 28, RULE_query_sequence);
		try {
			setState(131);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
			case T__10:
			case T__11:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
				enterOuterAlt(_localctx, 1);
				{
				setState(129);
				query();
				}
				break;
			case T__7:
				enterOuterAlt(_localctx, 2);
				{
				setState(130);
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
		enterRule(_localctx, 30, RULE_ouput);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(133);
			match(T__19);
			setState(134);
			match(T__20);
			setState(135);
			match(T__21);
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
		enterRule(_localctx, 32, RULE_request);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(140);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(137);
				metadata();
				setState(138);
				match(T__18);
				}
			}

			setState(145); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(142);
				query_sequence();
				setState(143);
				match(T__18);
				}
				}
				setState(147); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__7) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0) );
			setState(152);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__19) {
				{
				setState(149);
				ouput();
				setState(150);
				match(T__18);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\"\u009d\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3.\n\3\3\4\3\4\5\4\62\n\4\3\4\3"+
		"\4\3\4\3\4\3\4\5\49\n\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3"+
		"\6\3\7\3\7\3\7\3\7\7\7K\n\7\f\7\16\7N\13\7\3\b\3\b\3\b\3\t\3\t\3\t\3\t"+
		"\3\t\5\tX\n\t\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\f\3\f\5\fc\n\f\3\f\7\ff"+
		"\n\f\f\f\16\fi\13\f\3\f\7\fl\n\f\f\f\16\fo\13\f\3\f\5\fr\n\f\3\r\3\r\3"+
		"\16\3\16\5\16x\n\16\3\17\3\17\3\17\3\17\6\17~\n\17\r\17\16\17\177\3\17"+
		"\3\17\3\20\3\20\5\20\u0086\n\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22\5\22"+
		"\u008f\n\22\3\22\3\22\3\22\6\22\u0094\n\22\r\22\16\22\u0095\3\22\3\22"+
		"\3\22\5\22\u009b\n\22\3\22\2\2\23\2\4\6\b\n\f\16\20\22\24\26\30\32\34"+
		"\36 \"\2\5\3\2\37 \4\2\t\t\r\20\3\2\21\24\2\u009c\2$\3\2\2\2\4&\3\2\2"+
		"\2\6/\3\2\2\2\b<\3\2\2\2\nD\3\2\2\2\fF\3\2\2\2\16O\3\2\2\2\20R\3\2\2\2"+
		"\22[\3\2\2\2\24^\3\2\2\2\26`\3\2\2\2\30s\3\2\2\2\32w\3\2\2\2\34y\3\2\2"+
		"\2\36\u0085\3\2\2\2 \u0087\3\2\2\2\"\u008e\3\2\2\2$%\t\2\2\2%\3\3\2\2"+
		"\2&\'\7\3\2\2\'(\7\4\2\2(-\7\5\2\2)*\7\3\2\2*+\7\6\2\2+,\7\34\2\2,.\7"+
		"\5\2\2-)\3\2\2\2-.\3\2\2\2.\5\3\2\2\2/8\7\3\2\2\60\62\7\36\2\2\61\60\3"+
		"\2\2\2\61\62\3\2\2\2\62\63\3\2\2\2\639\5\2\2\2\64\65\5\2\2\2\65\66\7\35"+
		"\2\2\66\67\5\2\2\2\679\3\2\2\28\61\3\2\2\28\64\3\2\2\29:\3\2\2\2:;\7\5"+
		"\2\2;\7\3\2\2\2<=\7\34\2\2=>\7\7\2\2>?\7\34\2\2?@\7\7\2\2@A\7\34\2\2A"+
		"B\7\7\2\2BC\7\34\2\2C\t\3\2\2\2DE\7\34\2\2E\13\3\2\2\2FG\7\b\2\2GL\7\34"+
		"\2\2HI\7\7\2\2IK\7\34\2\2JH\3\2\2\2KN\3\2\2\2LJ\3\2\2\2LM\3\2\2\2M\r\3"+
		"\2\2\2NL\3\2\2\2OP\7\t\2\2PQ\7\"\2\2Q\17\3\2\2\2RW\7\n\2\2SX\5\b\5\2T"+
		"X\5\n\6\2UX\5\f\7\2VX\5\16\b\2WS\3\2\2\2WT\3\2\2\2WU\3\2\2\2WV\3\2\2\2"+
		"XY\3\2\2\2YZ\7\13\2\2Z\21\3\2\2\2[\\\7\f\2\2\\]\7\"\2\2]\23\3\2\2\2^_"+
		"\t\3\2\2_\25\3\2\2\2`b\5\24\13\2ac\7\"\2\2ba\3\2\2\2bc\3\2\2\2cg\3\2\2"+
		"\2df\5\6\4\2ed\3\2\2\2fi\3\2\2\2ge\3\2\2\2gh\3\2\2\2hm\3\2\2\2ig\3\2\2"+
		"\2jl\5\20\t\2kj\3\2\2\2lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2nq\3\2\2\2om\3\2"+
		"\2\2pr\5\22\n\2qp\3\2\2\2qr\3\2\2\2r\27\3\2\2\2st\t\4\2\2t\31\3\2\2\2"+
		"ux\5\26\f\2vx\5\30\r\2wu\3\2\2\2wv\3\2\2\2x\33\3\2\2\2y}\7\n\2\2z{\5\36"+
		"\20\2{|\7\25\2\2|~\3\2\2\2}z\3\2\2\2~\177\3\2\2\2\177}\3\2\2\2\177\u0080"+
		"\3\2\2\2\u0080\u0081\3\2\2\2\u0081\u0082\7\13\2\2\u0082\35\3\2\2\2\u0083"+
		"\u0086\5\32\16\2\u0084\u0086\5\34\17\2\u0085\u0083\3\2\2\2\u0085\u0084"+
		"\3\2\2\2\u0086\37\3\2\2\2\u0087\u0088\7\26\2\2\u0088\u0089\7\27\2\2\u0089"+
		"\u008a\7\30\2\2\u008a!\3\2\2\2\u008b\u008c\5\4\3\2\u008c\u008d\7\25\2"+
		"\2\u008d\u008f\3\2\2\2\u008e\u008b\3\2\2\2\u008e\u008f\3\2\2\2\u008f\u0093"+
		"\3\2\2\2\u0090\u0091\5\36\20\2\u0091\u0092\7\25\2\2\u0092\u0094\3\2\2"+
		"\2\u0093\u0090\3\2\2\2\u0094\u0095\3\2\2\2\u0095\u0093\3\2\2\2\u0095\u0096"+
		"\3\2\2\2\u0096\u009a\3\2\2\2\u0097\u0098\5 \21\2\u0098\u0099\7\25\2\2"+
		"\u0099\u009b\3\2\2\2\u009a\u0097\3\2\2\2\u009a\u009b\3\2\2\2\u009b#\3"+
		"\2\2\2\21-\618LWbgmqw\177\u0085\u008e\u0095\u009a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}