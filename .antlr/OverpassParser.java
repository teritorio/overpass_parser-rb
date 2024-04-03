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
		WS=25, SL_COMMENT=26, ML_COMMENT=27, INTEGER=28, FLOAT=29, OPERATOR=30, 
		NOT=31, UNQUOTED_STRING=32, SIMPLE_QUOTED_STRING=33, DOUBLE_QUOTED_STRING=34, 
		ID=35, DOT_ID=36;
	public static final int
		RULE_osm_id = 0, RULE_number = 1, RULE_token = 2, RULE_metadata = 3, RULE_selector = 4, 
		RULE_filter_bbox = 5, RULE_filter_osm_id = 6, RULE_filter_osm_ids = 7, 
		RULE_filter_area = 8, RULE_filter_around = 9, RULE_filter = 10, RULE_asignation = 11, 
		RULE_object_type = 12, RULE_query_object = 13, RULE_query_recurse = 14, 
		RULE_query = 15, RULE_query_union = 16, RULE_query_sequence = 17, RULE_ouput = 18, 
		RULE_request = 19;
	private static String[] makeRuleNames() {
		return new String[] {
			"osm_id", "number", "token", "metadata", "selector", "filter_bbox", "filter_osm_id", 
			"filter_osm_ids", "filter_area", "filter_around", "filter", "asignation", 
			"object_type", "query_object", "query_recurse", "query", "query_union", 
			"query_sequence", "ouput", "request"
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
			null, "WS", "SL_COMMENT", "ML_COMMENT", "INTEGER", "FLOAT", "OPERATOR", 
			"NOT", "UNQUOTED_STRING", "SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", 
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

	public static class Osm_idContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(OverpassParser.INTEGER, 0); }
		public Osm_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_osm_id; }
	}

	public final Osm_idContext osm_id() throws RecognitionException {
		Osm_idContext _localctx = new Osm_idContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_osm_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(40);
			match(INTEGER);
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

	public static class NumberContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(OverpassParser.INTEGER, 0); }
		public TerminalNode FLOAT() { return getToken(OverpassParser.FLOAT, 0); }
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_number);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			_la = _input.LA(1);
			if ( !(_la==INTEGER || _la==FLOAT) ) {
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

	public static class TokenContext extends ParserRuleContext {
		public TerminalNode SIMPLE_QUOTED_STRING() { return getToken(OverpassParser.SIMPLE_QUOTED_STRING, 0); }
		public TerminalNode DOUBLE_QUOTED_STRING() { return getToken(OverpassParser.DOUBLE_QUOTED_STRING, 0); }
		public TerminalNode UNQUOTED_STRING() { return getToken(OverpassParser.UNQUOTED_STRING, 0); }
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_token; }
	}

	public final TokenContext token() throws RecognitionException {
		TokenContext _localctx = new TokenContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_token);
		try {
			setState(48);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SIMPLE_QUOTED_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(44);
				match(SIMPLE_QUOTED_STRING);
				}
				break;
			case DOUBLE_QUOTED_STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(45);
				match(DOUBLE_QUOTED_STRING);
				}
				break;
			case UNQUOTED_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(46);
				match(UNQUOTED_STRING);
				}
				break;
			case INTEGER:
			case FLOAT:
				enterOuterAlt(_localctx, 4);
				{
				setState(47);
				number();
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

	public static class MetadataContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public MetadataContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_metadata; }
	}

	public final MetadataContext metadata() throws RecognitionException {
		MetadataContext _localctx = new MetadataContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_metadata);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			match(T__0);
			setState(51);
			match(T__1);
			setState(52);
			match(T__2);
			setState(58);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(53);
				match(T__0);
				setState(54);
				match(T__3);
				setState(55);
				number();
				setState(56);
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
		enterRule(_localctx, 8, RULE_selector);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			match(T__0);
			setState(69);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				{
				setState(62);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(61);
					match(NOT);
					}
				}

				setState(64);
				((SelectorContext)_localctx).key = token();
				}
				}
				break;
			case 2:
				{
				{
				setState(65);
				((SelectorContext)_localctx).key = token();
				setState(66);
				match(OPERATOR);
				setState(67);
				((SelectorContext)_localctx).value = token();
				}
				}
				break;
			}
			setState(71);
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
		public List<NumberContext> number() {
			return getRuleContexts(NumberContext.class);
		}
		public NumberContext number(int i) {
			return getRuleContext(NumberContext.class,i);
		}
		public Filter_bboxContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_bbox; }
	}

	public final Filter_bboxContext filter_bbox() throws RecognitionException {
		Filter_bboxContext _localctx = new Filter_bboxContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_filter_bbox);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			number();
			setState(74);
			match(T__4);
			setState(75);
			number();
			setState(76);
			match(T__4);
			setState(77);
			number();
			setState(78);
			match(T__4);
			setState(79);
			number();
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
		public Osm_idContext osm_id() {
			return getRuleContext(Osm_idContext.class,0);
		}
		public Filter_osm_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_osm_id; }
	}

	public final Filter_osm_idContext filter_osm_id() throws RecognitionException {
		Filter_osm_idContext _localctx = new Filter_osm_idContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_filter_osm_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			osm_id();
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
		public List<Osm_idContext> osm_id() {
			return getRuleContexts(Osm_idContext.class);
		}
		public Osm_idContext osm_id(int i) {
			return getRuleContext(Osm_idContext.class,i);
		}
		public Filter_osm_idsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_osm_ids; }
	}

	public final Filter_osm_idsContext filter_osm_ids() throws RecognitionException {
		Filter_osm_idsContext _localctx = new Filter_osm_idsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_filter_osm_ids);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(83);
			match(T__5);
			setState(84);
			osm_id();
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(85);
				match(T__4);
				setState(86);
				osm_id();
				}
				}
				setState(91);
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
		enterRule(_localctx, 16, RULE_filter_area);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			match(T__6);
			setState(93);
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
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public Filter_aroundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_around; }
	}

	public final Filter_aroundContext filter_around() throws RecognitionException {
		Filter_aroundContext _localctx = new Filter_aroundContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_filter_around);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(95);
			match(T__7);
			setState(96);
			match(DOT_ID);
			setState(97);
			match(T__8);
			setState(98);
			number();
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
		enterRule(_localctx, 20, RULE_filter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			match(T__9);
			setState(106);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(101);
				filter_bbox();
				}
				break;
			case 2:
				{
				setState(102);
				filter_osm_id();
				}
				break;
			case 3:
				{
				setState(103);
				filter_osm_ids();
				}
				break;
			case 4:
				{
				setState(104);
				filter_area();
				}
				break;
			case 5:
				{
				setState(105);
				filter_around();
				}
				break;
			}
			setState(108);
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
		enterRule(_localctx, 22, RULE_asignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			match(T__11);
			setState(111);
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
		enterRule(_localctx, 24, RULE_object_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
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
		enterRule(_localctx, 26, RULE_query_object);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(115);
			object_type();
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT_ID) {
				{
				setState(116);
				match(DOT_ID);
				}
			}

			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(119);
				selector();
				}
				}
				setState(124);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(128);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__9) {
				{
				{
				setState(125);
				filter();
				}
				}
				setState(130);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__11) {
				{
				setState(131);
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
		enterRule(_localctx, 28, RULE_query_recurse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
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
		enterRule(_localctx, 30, RULE_query);
		try {
			setState(138);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				query_object();
				}
				break;
			case T__16:
			case T__17:
			case T__18:
			case T__19:
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
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

	public static class Query_unionContext extends ParserRuleContext {
		public List<Query_sequenceContext> query_sequence() {
			return getRuleContexts(Query_sequenceContext.class);
		}
		public Query_sequenceContext query_sequence(int i) {
			return getRuleContext(Query_sequenceContext.class,i);
		}
		public Query_unionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_union; }
	}

	public final Query_unionContext query_union() throws RecognitionException {
		Query_unionContext _localctx = new Query_unionContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_query_union);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(140);
			match(T__9);
			setState(144); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(141);
				query_sequence();
				setState(142);
				match(T__20);
				}
				}
				setState(146); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__9) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19))) != 0) );
			setState(148);
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
		public Query_unionContext query_union() {
			return getRuleContext(Query_unionContext.class,0);
		}
		public Query_sequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_sequence; }
	}

	public final Query_sequenceContext query_sequence() throws RecognitionException {
		Query_sequenceContext _localctx = new Query_sequenceContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_query_sequence);
		try {
			setState(152);
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
				setState(150);
				query();
				}
				break;
			case T__9:
				enterOuterAlt(_localctx, 2);
				{
				setState(151);
				query_union();
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
		enterRule(_localctx, 36, RULE_ouput);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(154);
			match(T__21);
			setState(155);
			match(T__22);
			setState(156);
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
		enterRule(_localctx, 38, RULE_request);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(158);
				metadata();
				setState(159);
				match(T__20);
				}
			}

			setState(166); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(163);
				query_sequence();
				setState(164);
				match(T__20);
				}
				}
				setState(168); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__9) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19))) != 0) );
			setState(173);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__21) {
				{
				setState(170);
				ouput();
				setState(171);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3&\u00b2\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\3\3\3\3\4\3\4\3\4\3\4\5\4\63"+
		"\n\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5=\n\5\3\6\3\6\5\6A\n\6\3\6\3\6"+
		"\3\6\3\6\3\6\5\6H\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b"+
		"\3\t\3\t\3\t\3\t\7\tZ\n\t\f\t\16\t]\13\t\3\n\3\n\3\n\3\13\3\13\3\13\3"+
		"\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\5\fm\n\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16"+
		"\3\17\3\17\5\17x\n\17\3\17\7\17{\n\17\f\17\16\17~\13\17\3\17\7\17\u0081"+
		"\n\17\f\17\16\17\u0084\13\17\3\17\5\17\u0087\n\17\3\20\3\20\3\21\3\21"+
		"\5\21\u008d\n\21\3\22\3\22\3\22\3\22\6\22\u0093\n\22\r\22\16\22\u0094"+
		"\3\22\3\22\3\23\3\23\5\23\u009b\n\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25"+
		"\5\25\u00a4\n\25\3\25\3\25\3\25\6\25\u00a9\n\25\r\25\16\25\u00aa\3\25"+
		"\3\25\3\25\5\25\u00b0\n\25\3\25\2\2\26\2\4\6\b\n\f\16\20\22\24\26\30\32"+
		"\34\36 \"$&(\2\5\3\2\36\37\4\2\t\t\17\22\3\2\23\26\2\u00b2\2*\3\2\2\2"+
		"\4,\3\2\2\2\6\62\3\2\2\2\b\64\3\2\2\2\n>\3\2\2\2\fK\3\2\2\2\16S\3\2\2"+
		"\2\20U\3\2\2\2\22^\3\2\2\2\24a\3\2\2\2\26f\3\2\2\2\30p\3\2\2\2\32s\3\2"+
		"\2\2\34u\3\2\2\2\36\u0088\3\2\2\2 \u008c\3\2\2\2\"\u008e\3\2\2\2$\u009a"+
		"\3\2\2\2&\u009c\3\2\2\2(\u00a3\3\2\2\2*+\7\36\2\2+\3\3\2\2\2,-\t\2\2\2"+
		"-\5\3\2\2\2.\63\7#\2\2/\63\7$\2\2\60\63\7\"\2\2\61\63\5\4\3\2\62.\3\2"+
		"\2\2\62/\3\2\2\2\62\60\3\2\2\2\62\61\3\2\2\2\63\7\3\2\2\2\64\65\7\3\2"+
		"\2\65\66\7\4\2\2\66<\7\5\2\2\678\7\3\2\289\7\6\2\29:\5\4\3\2:;\7\5\2\2"+
		";=\3\2\2\2<\67\3\2\2\2<=\3\2\2\2=\t\3\2\2\2>G\7\3\2\2?A\7!\2\2@?\3\2\2"+
		"\2@A\3\2\2\2AB\3\2\2\2BH\5\6\4\2CD\5\6\4\2DE\7 \2\2EF\5\6\4\2FH\3\2\2"+
		"\2G@\3\2\2\2GC\3\2\2\2HI\3\2\2\2IJ\7\5\2\2J\13\3\2\2\2KL\5\4\3\2LM\7\7"+
		"\2\2MN\5\4\3\2NO\7\7\2\2OP\5\4\3\2PQ\7\7\2\2QR\5\4\3\2R\r\3\2\2\2ST\5"+
		"\2\2\2T\17\3\2\2\2UV\7\b\2\2V[\5\2\2\2WX\7\7\2\2XZ\5\2\2\2YW\3\2\2\2Z"+
		"]\3\2\2\2[Y\3\2\2\2[\\\3\2\2\2\\\21\3\2\2\2][\3\2\2\2^_\7\t\2\2_`\7&\2"+
		"\2`\23\3\2\2\2ab\7\n\2\2bc\7&\2\2cd\7\13\2\2de\5\4\3\2e\25\3\2\2\2fl\7"+
		"\f\2\2gm\5\f\7\2hm\5\16\b\2im\5\20\t\2jm\5\22\n\2km\5\24\13\2lg\3\2\2"+
		"\2lh\3\2\2\2li\3\2\2\2lj\3\2\2\2lk\3\2\2\2mn\3\2\2\2no\7\r\2\2o\27\3\2"+
		"\2\2pq\7\16\2\2qr\7&\2\2r\31\3\2\2\2st\t\3\2\2t\33\3\2\2\2uw\5\32\16\2"+
		"vx\7&\2\2wv\3\2\2\2wx\3\2\2\2x|\3\2\2\2y{\5\n\6\2zy\3\2\2\2{~\3\2\2\2"+
		"|z\3\2\2\2|}\3\2\2\2}\u0082\3\2\2\2~|\3\2\2\2\177\u0081\5\26\f\2\u0080"+
		"\177\3\2\2\2\u0081\u0084\3\2\2\2\u0082\u0080\3\2\2\2\u0082\u0083\3\2\2"+
		"\2\u0083\u0086\3\2\2\2\u0084\u0082\3\2\2\2\u0085\u0087\5\30\r\2\u0086"+
		"\u0085\3\2\2\2\u0086\u0087\3\2\2\2\u0087\35\3\2\2\2\u0088\u0089\t\4\2"+
		"\2\u0089\37\3\2\2\2\u008a\u008d\5\34\17\2\u008b\u008d\5\36\20\2\u008c"+
		"\u008a\3\2\2\2\u008c\u008b\3\2\2\2\u008d!\3\2\2\2\u008e\u0092\7\f\2\2"+
		"\u008f\u0090\5$\23\2\u0090\u0091\7\27\2\2\u0091\u0093\3\2\2\2\u0092\u008f"+
		"\3\2\2\2\u0093\u0094\3\2\2\2\u0094\u0092\3\2\2\2\u0094\u0095\3\2\2\2\u0095"+
		"\u0096\3\2\2\2\u0096\u0097\7\r\2\2\u0097#\3\2\2\2\u0098\u009b\5 \21\2"+
		"\u0099\u009b\5\"\22\2\u009a\u0098\3\2\2\2\u009a\u0099\3\2\2\2\u009b%\3"+
		"\2\2\2\u009c\u009d\7\30\2\2\u009d\u009e\7\31\2\2\u009e\u009f\7\32\2\2"+
		"\u009f\'\3\2\2\2\u00a0\u00a1\5\b\5\2\u00a1\u00a2\7\27\2\2\u00a2\u00a4"+
		"\3\2\2\2\u00a3\u00a0\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\u00a8\3\2\2\2\u00a5"+
		"\u00a6\5$\23\2\u00a6\u00a7\7\27\2\2\u00a7\u00a9\3\2\2\2\u00a8\u00a5\3"+
		"\2\2\2\u00a9\u00aa\3\2\2\2\u00aa\u00a8\3\2\2\2\u00aa\u00ab\3\2\2\2\u00ab"+
		"\u00af\3\2\2\2\u00ac\u00ad\5&\24\2\u00ad\u00ae\7\27\2\2\u00ae\u00b0\3"+
		"\2\2\2\u00af\u00ac\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0)\3\2\2\2\22\62<@"+
		"G[lw|\u0082\u0086\u008c\u0094\u009a\u00a3\u00aa\u00af";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}