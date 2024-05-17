// Generated from /home/fred/teritorio/code/overpass_parser-rb/Overpass.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class OverpassParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		WS=32, SL_COMMENT=33, ML_COMMENT=34, INTEGER=35, FLOAT=36, OPERATOR=37, 
		NOT=38, UNQUOTED_STRING=39, SIMPLE_QUOTE=40, DOUBLE_QUOTE=41, SIMPLE_QUOTED_STRING=42, 
		DOUBLE_QUOTED_STRING=43, ID=44, DOT_ID=45;
	public static final int
		RULE_osm_id = 0, RULE_number = 1, RULE_token = 2, RULE_metadata = 3, RULE_selector = 4, 
		RULE_filter_bbox = 5, RULE_filter_poly = 6, RULE_filter_osm_id = 7, RULE_filter_osm_ids = 8, 
		RULE_filter_area = 9, RULE_filter_around = 10, RULE_filter = 11, RULE_asignation = 12, 
		RULE_object_type = 13, RULE_query_object = 14, RULE_query_recurse = 15, 
		RULE_query = 16, RULE_query_union = 17, RULE_query_sequence = 18, RULE_out_geom = 19, 
		RULE_out_level_of_details = 20, RULE_out = 21, RULE_request = 22;
	private static String[] makeRuleNames() {
		return new String[] {
			"osm_id", "number", "token", "metadata", "selector", "filter_bbox", "filter_poly", 
			"filter_osm_id", "filter_osm_ids", "filter_area", "filter_around", "filter", 
			"asignation", "object_type", "query_object", "query_recurse", "query", 
			"query_union", "query_sequence", "out_geom", "out_level_of_details", 
			"out", "request"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'['", "'out:json'", "']'", "'timeout:'", "','", "'poly:'", "'id:'", 
			"'area'", "'around'", "':'", "'('", "')'", "'->'", "'node'", "'way'", 
			"'relation'", "'nwr'", "'<'", "'<<'", "'>'", "'>>'", "';'", "'geom'", 
			"'center'", "'bb'", "'ids'", "'skel'", "'body'", "'tags'", "'meta'", 
			"'out'", null, null, null, null, null, null, "'!'", null, "'''", "'\"'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, "WS", "SL_COMMENT", "ML_COMMENT", 
			"INTEGER", "FLOAT", "OPERATOR", "NOT", "UNQUOTED_STRING", "SIMPLE_QUOTE", 
			"DOUBLE_QUOTE", "SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", "ID", 
			"DOT_ID"
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(46);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(48);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(54);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SIMPLE_QUOTED_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(50);
				match(SIMPLE_QUOTED_STRING);
				}
				break;
			case DOUBLE_QUOTED_STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(51);
				match(DOUBLE_QUOTED_STRING);
				}
				break;
			case UNQUOTED_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(52);
				match(UNQUOTED_STRING);
				}
				break;
			case INTEGER:
			case FLOAT:
				enterOuterAlt(_localctx, 4);
				{
				setState(53);
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

	@SuppressWarnings("CheckReturnValue")
	public static class MetadataContext extends ParserRuleContext {
		public Token out_json;
		public NumberContext timeout;
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
			setState(56);
			match(T__0);
			{
			setState(57);
			((MetadataContext)_localctx).out_json = match(T__1);
			}
			setState(58);
			match(T__2);
			setState(64);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(59);
				match(T__0);
				setState(60);
				match(T__3);
				{
				setState(61);
				((MetadataContext)_localctx).timeout = number();
				}
				setState(62);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(66);
			match(T__0);
			setState(75);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				{
				setState(68);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(67);
					match(NOT);
					}
				}

				setState(70);
				((SelectorContext)_localctx).key = token();
				}
				}
				break;
			case 2:
				{
				{
				setState(71);
				((SelectorContext)_localctx).key = token();
				setState(72);
				match(OPERATOR);
				setState(73);
				((SelectorContext)_localctx).value = token();
				}
				}
				break;
			}
			setState(77);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(79);
			number();
			setState(80);
			match(T__4);
			setState(81);
			number();
			setState(82);
			match(T__4);
			setState(83);
			number();
			setState(84);
			match(T__4);
			setState(85);
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

	@SuppressWarnings("CheckReturnValue")
	public static class Filter_polyContext extends ParserRuleContext {
		public TerminalNode SIMPLE_QUOTED_STRING() { return getToken(OverpassParser.SIMPLE_QUOTED_STRING, 0); }
		public TerminalNode DOUBLE_QUOTED_STRING() { return getToken(OverpassParser.DOUBLE_QUOTED_STRING, 0); }
		public Filter_polyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_poly; }
	}

	public final Filter_polyContext filter_poly() throws RecognitionException {
		Filter_polyContext _localctx = new Filter_polyContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_filter_poly);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(T__5);
			setState(88);
			_la = _input.LA(1);
			if ( !(_la==SIMPLE_QUOTED_STRING || _la==DOUBLE_QUOTED_STRING) ) {
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

	@SuppressWarnings("CheckReturnValue")
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
		enterRule(_localctx, 14, RULE_filter_osm_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
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

	@SuppressWarnings("CheckReturnValue")
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
		enterRule(_localctx, 16, RULE_filter_osm_ids);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			match(T__6);
			setState(93);
			osm_id();
			setState(98);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(94);
				match(T__4);
				setState(95);
				osm_id();
				}
				}
				setState(100);
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

	@SuppressWarnings("CheckReturnValue")
	public static class Filter_areaContext extends ParserRuleContext {
		public TerminalNode DOT_ID() { return getToken(OverpassParser.DOT_ID, 0); }
		public Filter_areaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_area; }
	}

	public final Filter_areaContext filter_area() throws RecognitionException {
		Filter_areaContext _localctx = new Filter_areaContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_filter_area);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			match(T__7);
			setState(102);
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

	@SuppressWarnings("CheckReturnValue")
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
		enterRule(_localctx, 20, RULE_filter_around);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			match(T__8);
			setState(105);
			match(DOT_ID);
			setState(106);
			match(T__9);
			setState(107);
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

	@SuppressWarnings("CheckReturnValue")
	public static class FilterContext extends ParserRuleContext {
		public Filter_bboxContext filter_bbox() {
			return getRuleContext(Filter_bboxContext.class,0);
		}
		public Filter_polyContext filter_poly() {
			return getRuleContext(Filter_polyContext.class,0);
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
		enterRule(_localctx, 22, RULE_filter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(109);
			match(T__10);
			setState(116);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(110);
				filter_bbox();
				}
				break;
			case 2:
				{
				setState(111);
				filter_poly();
				}
				break;
			case 3:
				{
				setState(112);
				filter_osm_id();
				}
				break;
			case 4:
				{
				setState(113);
				filter_osm_ids();
				}
				break;
			case 5:
				{
				setState(114);
				filter_area();
				}
				break;
			case 6:
				{
				setState(115);
				filter_around();
				}
				break;
			}
			setState(118);
			match(T__11);
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

	@SuppressWarnings("CheckReturnValue")
	public static class AsignationContext extends ParserRuleContext {
		public TerminalNode DOT_ID() { return getToken(OverpassParser.DOT_ID, 0); }
		public AsignationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_asignation; }
	}

	public final AsignationContext asignation() throws RecognitionException {
		AsignationContext _localctx = new AsignationContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_asignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			match(T__12);
			setState(121);
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

	@SuppressWarnings("CheckReturnValue")
	public static class Object_typeContext extends ParserRuleContext {
		public Object_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_object_type; }
	}

	public final Object_typeContext object_type() throws RecognitionException {
		Object_typeContext _localctx = new Object_typeContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_object_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 246016L) != 0)) ) {
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

	@SuppressWarnings("CheckReturnValue")
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
		enterRule(_localctx, 28, RULE_query_object);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			object_type();
			setState(127);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT_ID) {
				{
				setState(126);
				match(DOT_ID);
				}
			}

			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(129);
				selector();
				}
				}
				setState(134);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(135);
				filter();
				}
				}
				setState(140);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(142);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__12) {
				{
				setState(141);
				asignation();
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

	@SuppressWarnings("CheckReturnValue")
	public static class Query_recurseContext extends ParserRuleContext {
		public AsignationContext asignation() {
			return getRuleContext(AsignationContext.class,0);
		}
		public Query_recurseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query_recurse; }
	}

	public final Query_recurseContext query_recurse() throws RecognitionException {
		Query_recurseContext _localctx = new Query_recurseContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_query_recurse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 3932160L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__12) {
				{
				setState(145);
				asignation();
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

	@SuppressWarnings("CheckReturnValue")
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
		enterRule(_localctx, 32, RULE_query);
		try {
			setState(150);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
			case T__13:
			case T__14:
			case T__15:
			case T__16:
				enterOuterAlt(_localctx, 1);
				{
				setState(148);
				query_object();
				}
				break;
			case T__17:
			case T__18:
			case T__19:
			case T__20:
				enterOuterAlt(_localctx, 2);
				{
				setState(149);
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

	@SuppressWarnings("CheckReturnValue")
	public static class Query_unionContext extends ParserRuleContext {
		public AsignationContext asignation() {
			return getRuleContext(AsignationContext.class,0);
		}
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
		enterRule(_localctx, 34, RULE_query_union);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(152);
			match(T__10);
			setState(156); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(153);
				query_sequence();
				setState(154);
				match(T__21);
				}
				}
				setState(158); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 4180224L) != 0) );
			setState(160);
			match(T__11);
			}
			setState(163);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__12) {
				{
				setState(162);
				asignation();
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

	@SuppressWarnings("CheckReturnValue")
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
		enterRule(_localctx, 36, RULE_query_sequence);
		try {
			setState(167);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
			case T__13:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
			case T__18:
			case T__19:
			case T__20:
				enterOuterAlt(_localctx, 1);
				{
				setState(165);
				query();
				}
				break;
			case T__10:
				enterOuterAlt(_localctx, 2);
				{
				setState(166);
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

	@SuppressWarnings("CheckReturnValue")
	public static class Out_geomContext extends ParserRuleContext {
		public Out_geomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_out_geom; }
	}

	public final Out_geomContext out_geom() throws RecognitionException {
		Out_geomContext _localctx = new Out_geomContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_out_geom);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(169);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 58720256L) != 0)) ) {
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

	@SuppressWarnings("CheckReturnValue")
	public static class Out_level_of_detailsContext extends ParserRuleContext {
		public Out_level_of_detailsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_out_level_of_details; }
	}

	public final Out_level_of_detailsContext out_level_of_details() throws RecognitionException {
		Out_level_of_detailsContext _localctx = new Out_level_of_detailsContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_out_level_of_details);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(171);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2080374784L) != 0)) ) {
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

	@SuppressWarnings("CheckReturnValue")
	public static class OutContext extends ParserRuleContext {
		public Out_geomContext out_geom() {
			return getRuleContext(Out_geomContext.class,0);
		}
		public Out_level_of_detailsContext out_level_of_details() {
			return getRuleContext(Out_level_of_detailsContext.class,0);
		}
		public OutContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_out; }
	}

	public final OutContext out() throws RecognitionException {
		OutContext _localctx = new OutContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_out);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(173);
			match(T__30);
			setState(175);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 58720256L) != 0)) {
				{
				setState(174);
				out_geom();
				}
			}

			setState(178);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2080374784L) != 0)) {
				{
				setState(177);
				out_level_of_details();
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

	@SuppressWarnings("CheckReturnValue")
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
		public OutContext out() {
			return getRuleContext(OutContext.class,0);
		}
		public RequestContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_request; }
	}

	public final RequestContext request() throws RecognitionException {
		RequestContext _localctx = new RequestContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_request);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(180);
				metadata();
				setState(181);
				match(T__21);
				}
			}

			setState(188); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(185);
				query_sequence();
				setState(186);
				match(T__21);
				}
				}
				setState(190); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 4180224L) != 0) );
			setState(195);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__30) {
				{
				setState(192);
				out();
				setState(193);
				match(T__21);
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
		"\u0004\u0001-\u00c6\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u00027\b\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0003\u0003A\b\u0003\u0001\u0004\u0001\u0004"+
		"\u0003\u0004E\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0003\u0004L\b\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0005\ba\b\b\n\b\f\bd\t\b\u0001\t\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b"+
		"u\b\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\r\u0001"+
		"\r\u0001\u000e\u0001\u000e\u0003\u000e\u0080\b\u000e\u0001\u000e\u0005"+
		"\u000e\u0083\b\u000e\n\u000e\f\u000e\u0086\t\u000e\u0001\u000e\u0005\u000e"+
		"\u0089\b\u000e\n\u000e\f\u000e\u008c\t\u000e\u0001\u000e\u0003\u000e\u008f"+
		"\b\u000e\u0001\u000f\u0001\u000f\u0003\u000f\u0093\b\u000f\u0001\u0010"+
		"\u0001\u0010\u0003\u0010\u0097\b\u0010\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0004\u0011\u009d\b\u0011\u000b\u0011\f\u0011\u009e\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0003\u0011\u00a4\b\u0011\u0001\u0012\u0001"+
		"\u0012\u0003\u0012\u00a8\b\u0012\u0001\u0013\u0001\u0013\u0001\u0014\u0001"+
		"\u0014\u0001\u0015\u0001\u0015\u0003\u0015\u00b0\b\u0015\u0001\u0015\u0003"+
		"\u0015\u00b3\b\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0003\u0016\u00b8"+
		"\b\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0004\u0016\u00bd\b\u0016"+
		"\u000b\u0016\f\u0016\u00be\u0001\u0016\u0001\u0016\u0001\u0016\u0003\u0016"+
		"\u00c4\b\u0016\u0001\u0016\u0000\u0000\u0017\u0000\u0002\u0004\u0006\b"+
		"\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,\u0000"+
		"\u0006\u0001\u0000#$\u0001\u0000*+\u0002\u0000\b\b\u000e\u0011\u0001\u0000"+
		"\u0012\u0015\u0001\u0000\u0017\u0019\u0001\u0000\u001a\u001e\u00c8\u0000"+
		".\u0001\u0000\u0000\u0000\u00020\u0001\u0000\u0000\u0000\u00046\u0001"+
		"\u0000\u0000\u0000\u00068\u0001\u0000\u0000\u0000\bB\u0001\u0000\u0000"+
		"\u0000\nO\u0001\u0000\u0000\u0000\fW\u0001\u0000\u0000\u0000\u000eZ\u0001"+
		"\u0000\u0000\u0000\u0010\\\u0001\u0000\u0000\u0000\u0012e\u0001\u0000"+
		"\u0000\u0000\u0014h\u0001\u0000\u0000\u0000\u0016m\u0001\u0000\u0000\u0000"+
		"\u0018x\u0001\u0000\u0000\u0000\u001a{\u0001\u0000\u0000\u0000\u001c}"+
		"\u0001\u0000\u0000\u0000\u001e\u0090\u0001\u0000\u0000\u0000 \u0096\u0001"+
		"\u0000\u0000\u0000\"\u0098\u0001\u0000\u0000\u0000$\u00a7\u0001\u0000"+
		"\u0000\u0000&\u00a9\u0001\u0000\u0000\u0000(\u00ab\u0001\u0000\u0000\u0000"+
		"*\u00ad\u0001\u0000\u0000\u0000,\u00b7\u0001\u0000\u0000\u0000./\u0005"+
		"#\u0000\u0000/\u0001\u0001\u0000\u0000\u000001\u0007\u0000\u0000\u0000"+
		"1\u0003\u0001\u0000\u0000\u000027\u0005*\u0000\u000037\u0005+\u0000\u0000"+
		"47\u0005\'\u0000\u000057\u0003\u0002\u0001\u000062\u0001\u0000\u0000\u0000"+
		"63\u0001\u0000\u0000\u000064\u0001\u0000\u0000\u000065\u0001\u0000\u0000"+
		"\u00007\u0005\u0001\u0000\u0000\u000089\u0005\u0001\u0000\u00009:\u0005"+
		"\u0002\u0000\u0000:@\u0005\u0003\u0000\u0000;<\u0005\u0001\u0000\u0000"+
		"<=\u0005\u0004\u0000\u0000=>\u0003\u0002\u0001\u0000>?\u0005\u0003\u0000"+
		"\u0000?A\u0001\u0000\u0000\u0000@;\u0001\u0000\u0000\u0000@A\u0001\u0000"+
		"\u0000\u0000A\u0007\u0001\u0000\u0000\u0000BK\u0005\u0001\u0000\u0000"+
		"CE\u0005&\u0000\u0000DC\u0001\u0000\u0000\u0000DE\u0001\u0000\u0000\u0000"+
		"EF\u0001\u0000\u0000\u0000FL\u0003\u0004\u0002\u0000GH\u0003\u0004\u0002"+
		"\u0000HI\u0005%\u0000\u0000IJ\u0003\u0004\u0002\u0000JL\u0001\u0000\u0000"+
		"\u0000KD\u0001\u0000\u0000\u0000KG\u0001\u0000\u0000\u0000LM\u0001\u0000"+
		"\u0000\u0000MN\u0005\u0003\u0000\u0000N\t\u0001\u0000\u0000\u0000OP\u0003"+
		"\u0002\u0001\u0000PQ\u0005\u0005\u0000\u0000QR\u0003\u0002\u0001\u0000"+
		"RS\u0005\u0005\u0000\u0000ST\u0003\u0002\u0001\u0000TU\u0005\u0005\u0000"+
		"\u0000UV\u0003\u0002\u0001\u0000V\u000b\u0001\u0000\u0000\u0000WX\u0005"+
		"\u0006\u0000\u0000XY\u0007\u0001\u0000\u0000Y\r\u0001\u0000\u0000\u0000"+
		"Z[\u0003\u0000\u0000\u0000[\u000f\u0001\u0000\u0000\u0000\\]\u0005\u0007"+
		"\u0000\u0000]b\u0003\u0000\u0000\u0000^_\u0005\u0005\u0000\u0000_a\u0003"+
		"\u0000\u0000\u0000`^\u0001\u0000\u0000\u0000ad\u0001\u0000\u0000\u0000"+
		"b`\u0001\u0000\u0000\u0000bc\u0001\u0000\u0000\u0000c\u0011\u0001\u0000"+
		"\u0000\u0000db\u0001\u0000\u0000\u0000ef\u0005\b\u0000\u0000fg\u0005-"+
		"\u0000\u0000g\u0013\u0001\u0000\u0000\u0000hi\u0005\t\u0000\u0000ij\u0005"+
		"-\u0000\u0000jk\u0005\n\u0000\u0000kl\u0003\u0002\u0001\u0000l\u0015\u0001"+
		"\u0000\u0000\u0000mt\u0005\u000b\u0000\u0000nu\u0003\n\u0005\u0000ou\u0003"+
		"\f\u0006\u0000pu\u0003\u000e\u0007\u0000qu\u0003\u0010\b\u0000ru\u0003"+
		"\u0012\t\u0000su\u0003\u0014\n\u0000tn\u0001\u0000\u0000\u0000to\u0001"+
		"\u0000\u0000\u0000tp\u0001\u0000\u0000\u0000tq\u0001\u0000\u0000\u0000"+
		"tr\u0001\u0000\u0000\u0000ts\u0001\u0000\u0000\u0000uv\u0001\u0000\u0000"+
		"\u0000vw\u0005\f\u0000\u0000w\u0017\u0001\u0000\u0000\u0000xy\u0005\r"+
		"\u0000\u0000yz\u0005-\u0000\u0000z\u0019\u0001\u0000\u0000\u0000{|\u0007"+
		"\u0002\u0000\u0000|\u001b\u0001\u0000\u0000\u0000}\u007f\u0003\u001a\r"+
		"\u0000~\u0080\u0005-\u0000\u0000\u007f~\u0001\u0000\u0000\u0000\u007f"+
		"\u0080\u0001\u0000\u0000\u0000\u0080\u0084\u0001\u0000\u0000\u0000\u0081"+
		"\u0083\u0003\b\u0004\u0000\u0082\u0081\u0001\u0000\u0000\u0000\u0083\u0086"+
		"\u0001\u0000\u0000\u0000\u0084\u0082\u0001\u0000\u0000\u0000\u0084\u0085"+
		"\u0001\u0000\u0000\u0000\u0085\u008a\u0001\u0000\u0000\u0000\u0086\u0084"+
		"\u0001\u0000\u0000\u0000\u0087\u0089\u0003\u0016\u000b\u0000\u0088\u0087"+
		"\u0001\u0000\u0000\u0000\u0089\u008c\u0001\u0000\u0000\u0000\u008a\u0088"+
		"\u0001\u0000\u0000\u0000\u008a\u008b\u0001\u0000\u0000\u0000\u008b\u008e"+
		"\u0001\u0000\u0000\u0000\u008c\u008a\u0001\u0000\u0000\u0000\u008d\u008f"+
		"\u0003\u0018\f\u0000\u008e\u008d\u0001\u0000\u0000\u0000\u008e\u008f\u0001"+
		"\u0000\u0000\u0000\u008f\u001d\u0001\u0000\u0000\u0000\u0090\u0092\u0007"+
		"\u0003\u0000\u0000\u0091\u0093\u0003\u0018\f\u0000\u0092\u0091\u0001\u0000"+
		"\u0000\u0000\u0092\u0093\u0001\u0000\u0000\u0000\u0093\u001f\u0001\u0000"+
		"\u0000\u0000\u0094\u0097\u0003\u001c\u000e\u0000\u0095\u0097\u0003\u001e"+
		"\u000f\u0000\u0096\u0094\u0001\u0000\u0000\u0000\u0096\u0095\u0001\u0000"+
		"\u0000\u0000\u0097!\u0001\u0000\u0000\u0000\u0098\u009c\u0005\u000b\u0000"+
		"\u0000\u0099\u009a\u0003$\u0012\u0000\u009a\u009b\u0005\u0016\u0000\u0000"+
		"\u009b\u009d\u0001\u0000\u0000\u0000\u009c\u0099\u0001\u0000\u0000\u0000"+
		"\u009d\u009e\u0001\u0000\u0000\u0000\u009e\u009c\u0001\u0000\u0000\u0000"+
		"\u009e\u009f\u0001\u0000\u0000\u0000\u009f\u00a0\u0001\u0000\u0000\u0000"+
		"\u00a0\u00a1\u0005\f\u0000\u0000\u00a1\u00a3\u0001\u0000\u0000\u0000\u00a2"+
		"\u00a4\u0003\u0018\f\u0000\u00a3\u00a2\u0001\u0000\u0000\u0000\u00a3\u00a4"+
		"\u0001\u0000\u0000\u0000\u00a4#\u0001\u0000\u0000\u0000\u00a5\u00a8\u0003"+
		" \u0010\u0000\u00a6\u00a8\u0003\"\u0011\u0000\u00a7\u00a5\u0001\u0000"+
		"\u0000\u0000\u00a7\u00a6\u0001\u0000\u0000\u0000\u00a8%\u0001\u0000\u0000"+
		"\u0000\u00a9\u00aa\u0007\u0004\u0000\u0000\u00aa\'\u0001\u0000\u0000\u0000"+
		"\u00ab\u00ac\u0007\u0005\u0000\u0000\u00ac)\u0001\u0000\u0000\u0000\u00ad"+
		"\u00af\u0005\u001f\u0000\u0000\u00ae\u00b0\u0003&\u0013\u0000\u00af\u00ae"+
		"\u0001\u0000\u0000\u0000\u00af\u00b0\u0001\u0000\u0000\u0000\u00b0\u00b2"+
		"\u0001\u0000\u0000\u0000\u00b1\u00b3\u0003(\u0014\u0000\u00b2\u00b1\u0001"+
		"\u0000\u0000\u0000\u00b2\u00b3\u0001\u0000\u0000\u0000\u00b3+\u0001\u0000"+
		"\u0000\u0000\u00b4\u00b5\u0003\u0006\u0003\u0000\u00b5\u00b6\u0005\u0016"+
		"\u0000\u0000\u00b6\u00b8\u0001\u0000\u0000\u0000\u00b7\u00b4\u0001\u0000"+
		"\u0000\u0000\u00b7\u00b8\u0001\u0000\u0000\u0000\u00b8\u00bc\u0001\u0000"+
		"\u0000\u0000\u00b9\u00ba\u0003$\u0012\u0000\u00ba\u00bb\u0005\u0016\u0000"+
		"\u0000\u00bb\u00bd\u0001\u0000\u0000\u0000\u00bc\u00b9\u0001\u0000\u0000"+
		"\u0000\u00bd\u00be\u0001\u0000\u0000\u0000\u00be\u00bc\u0001\u0000\u0000"+
		"\u0000\u00be\u00bf\u0001\u0000\u0000\u0000\u00bf\u00c3\u0001\u0000\u0000"+
		"\u0000\u00c0\u00c1\u0003*\u0015\u0000\u00c1\u00c2\u0005\u0016\u0000\u0000"+
		"\u00c2\u00c4\u0001\u0000\u0000\u0000\u00c3\u00c0\u0001\u0000\u0000\u0000"+
		"\u00c3\u00c4\u0001\u0000\u0000\u0000\u00c4-\u0001\u0000\u0000\u0000\u0014"+
		"6@DKbt\u007f\u0084\u008a\u008e\u0092\u0096\u009e\u00a3\u00a7\u00af\u00b2"+
		"\u00b7\u00be\u00c3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}