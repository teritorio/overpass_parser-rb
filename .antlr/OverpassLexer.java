// Generated from /home/fred/teritorio/code/overpass_parser-rb/Overpass.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class OverpassLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, WS=23, SL_COMMENT=24, 
		ML_COMMENT=25, FLOAT_NUMBER=26, INTEGER_NUMBER=27, OPERATOR=28, NOT=29, 
		UNQUOTED_STRING=30, SIMPLE_QUOTED_STRING=31, DOUBLE_QUOTED_STRING=32, 
		ID=33, DOT_ID=34;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
			"T__17", "T__18", "T__19", "T__20", "T__21", "WS", "SL_COMMENT", "ML_COMMENT", 
			"FLOAT_NUMBER", "INTEGER_NUMBER", "OPERATOR", "NOT", "UNQUOTED_STRING", 
			"SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", "ID", "DOT_ID"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
			"'('", "')'", "'->'", "'node'", "'way'", "'relation'", "'nwr'", "'<'", 
			"'<<'", "'>'", "'>>'", "';'", "'out'", "'center'", "'meta'", null, null, 
			null, null, null, null, "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, "WS", 
			"SL_COMMENT", "ML_COMMENT", "FLOAT_NUMBER", "INTEGER_NUMBER", "OPERATOR", 
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


	public OverpassLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Overpass.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2$\u0108\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4"+
		"\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b\3"+
		"\b\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r"+
		"\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3"+
		"\17\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\23\3\23\3\23\3\24\3\24\3\25\3"+
		"\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3"+
		"\27\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\7\31\u00aa\n\31\f\31\16\31"+
		"\u00ad\13\31\3\31\5\31\u00b0\n\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3"+
		"\32\7\32\u00ba\n\32\f\32\16\32\u00bd\13\32\3\32\3\32\3\32\3\32\3\32\3"+
		"\33\6\33\u00c5\n\33\r\33\16\33\u00c6\3\33\3\33\6\33\u00cb\n\33\r\33\16"+
		"\33\u00cc\5\33\u00cf\n\33\3\34\6\34\u00d2\n\34\r\34\16\34\u00d3\3\35\3"+
		"\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5\35\u00e0\n\35\3\36\3\36"+
		"\3\37\6\37\u00e5\n\37\r\37\16\37\u00e6\3 \3 \3 \3 \7 \u00ed\n \f \16 "+
		"\u00f0\13 \3 \3 \3!\3!\3!\3!\7!\u00f8\n!\f!\16!\u00fb\13!\3!\3!\3\"\3"+
		"\"\7\"\u0101\n\"\f\"\16\"\u0104\13\"\3#\3#\3#\4\u00ab\u00bb\2$\3\3\5\4"+
		"\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C"+
		"#E$\3\2\b\5\2\13\f\16\17\"\"\3\2\62;\7\2//\62;C\\aac|\3\2))\3\2$$\5\2"+
		"C\\aac|\2\u0119\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3"+
		"\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2"+
		"\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3"+
		"\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2"+
		"\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\2"+
		"9\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3"+
		"\2\2\2\3G\3\2\2\2\5I\3\2\2\2\7R\3\2\2\2\tT\3\2\2\2\13]\3\2\2\2\r_\3\2"+
		"\2\2\17c\3\2\2\2\21h\3\2\2\2\23j\3\2\2\2\25l\3\2\2\2\27o\3\2\2\2\31t\3"+
		"\2\2\2\33x\3\2\2\2\35\u0081\3\2\2\2\37\u0085\3\2\2\2!\u0087\3\2\2\2#\u008a"+
		"\3\2\2\2%\u008c\3\2\2\2\'\u008f\3\2\2\2)\u0091\3\2\2\2+\u0095\3\2\2\2"+
		"-\u009c\3\2\2\2/\u00a1\3\2\2\2\61\u00a5\3\2\2\2\63\u00b5\3\2\2\2\65\u00c4"+
		"\3\2\2\2\67\u00d1\3\2\2\29\u00df\3\2\2\2;\u00e1\3\2\2\2=\u00e4\3\2\2\2"+
		"?\u00e8\3\2\2\2A\u00f3\3\2\2\2C\u00fe\3\2\2\2E\u0105\3\2\2\2GH\7]\2\2"+
		"H\4\3\2\2\2IJ\7q\2\2JK\7w\2\2KL\7v\2\2LM\7<\2\2MN\7l\2\2NO\7u\2\2OP\7"+
		"q\2\2PQ\7p\2\2Q\6\3\2\2\2RS\7_\2\2S\b\3\2\2\2TU\7v\2\2UV\7k\2\2VW\7o\2"+
		"\2WX\7g\2\2XY\7q\2\2YZ\7w\2\2Z[\7v\2\2[\\\7<\2\2\\\n\3\2\2\2]^\7.\2\2"+
		"^\f\3\2\2\2_`\7k\2\2`a\7f\2\2ab\7<\2\2b\16\3\2\2\2cd\7c\2\2de\7t\2\2e"+
		"f\7g\2\2fg\7c\2\2g\20\3\2\2\2hi\7*\2\2i\22\3\2\2\2jk\7+\2\2k\24\3\2\2"+
		"\2lm\7/\2\2mn\7@\2\2n\26\3\2\2\2op\7p\2\2pq\7q\2\2qr\7f\2\2rs\7g\2\2s"+
		"\30\3\2\2\2tu\7y\2\2uv\7c\2\2vw\7{\2\2w\32\3\2\2\2xy\7t\2\2yz\7g\2\2z"+
		"{\7n\2\2{|\7c\2\2|}\7v\2\2}~\7k\2\2~\177\7q\2\2\177\u0080\7p\2\2\u0080"+
		"\34\3\2\2\2\u0081\u0082\7p\2\2\u0082\u0083\7y\2\2\u0083\u0084\7t\2\2\u0084"+
		"\36\3\2\2\2\u0085\u0086\7>\2\2\u0086 \3\2\2\2\u0087\u0088\7>\2\2\u0088"+
		"\u0089\7>\2\2\u0089\"\3\2\2\2\u008a\u008b\7@\2\2\u008b$\3\2\2\2\u008c"+
		"\u008d\7@\2\2\u008d\u008e\7@\2\2\u008e&\3\2\2\2\u008f\u0090\7=\2\2\u0090"+
		"(\3\2\2\2\u0091\u0092\7q\2\2\u0092\u0093\7w\2\2\u0093\u0094\7v\2\2\u0094"+
		"*\3\2\2\2\u0095\u0096\7e\2\2\u0096\u0097\7g\2\2\u0097\u0098\7p\2\2\u0098"+
		"\u0099\7v\2\2\u0099\u009a\7g\2\2\u009a\u009b\7t\2\2\u009b,\3\2\2\2\u009c"+
		"\u009d\7o\2\2\u009d\u009e\7g\2\2\u009e\u009f\7v\2\2\u009f\u00a0\7c\2\2"+
		"\u00a0.\3\2\2\2\u00a1\u00a2\t\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\u00a4\b"+
		"\30\2\2\u00a4\60\3\2\2\2\u00a5\u00a6\7\61\2\2\u00a6\u00a7\7\61\2\2\u00a7"+
		"\u00ab\3\2\2\2\u00a8\u00aa\13\2\2\2\u00a9\u00a8\3\2\2\2\u00aa\u00ad\3"+
		"\2\2\2\u00ab\u00ac\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad"+
		"\u00ab\3\2\2\2\u00ae\u00b0\7\17\2\2\u00af\u00ae\3\2\2\2\u00af\u00b0\3"+
		"\2\2\2\u00b0\u00b1\3\2\2\2\u00b1\u00b2\7\f\2\2\u00b2\u00b3\3\2\2\2\u00b3"+
		"\u00b4\b\31\2\2\u00b4\62\3\2\2\2\u00b5\u00b6\7\61\2\2\u00b6\u00b7\7,\2"+
		"\2\u00b7\u00bb\3\2\2\2\u00b8\u00ba\13\2\2\2\u00b9\u00b8\3\2\2\2\u00ba"+
		"\u00bd\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc\u00be\3\2"+
		"\2\2\u00bd\u00bb\3\2\2\2\u00be\u00bf\7,\2\2\u00bf\u00c0\7\61\2\2\u00c0"+
		"\u00c1\3\2\2\2\u00c1\u00c2\b\32\2\2\u00c2\64\3\2\2\2\u00c3\u00c5\t\3\2"+
		"\2\u00c4\u00c3\3\2\2\2\u00c5\u00c6\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c6\u00c7"+
		"\3\2\2\2\u00c7\u00ce\3\2\2\2\u00c8\u00ca\7\60\2\2\u00c9\u00cb\t\3\2\2"+
		"\u00ca\u00c9\3\2\2\2\u00cb\u00cc\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cc\u00cd"+
		"\3\2\2\2\u00cd\u00cf\3\2\2\2\u00ce\u00c8\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf"+
		"\66\3\2\2\2\u00d0\u00d2\t\3\2\2\u00d1\u00d0\3\2\2\2\u00d2\u00d3\3\2\2"+
		"\2\u00d3\u00d1\3\2\2\2\u00d3\u00d4\3\2\2\2\u00d48\3\2\2\2\u00d5\u00e0"+
		"\7?\2\2\u00d6\u00d7\7\u0080\2\2\u00d7\u00e0\7?\2\2\u00d8\u00d9\7?\2\2"+
		"\u00d9\u00e0\7\u0080\2\2\u00da\u00db\7#\2\2\u00db\u00e0\7?\2\2\u00dc\u00dd"+
		"\7#\2\2\u00dd\u00e0\7\u0080\2\2\u00de\u00e0\7\u0080\2\2\u00df\u00d5\3"+
		"\2\2\2\u00df\u00d6\3\2\2\2\u00df\u00d8\3\2\2\2\u00df\u00da\3\2\2\2\u00df"+
		"\u00dc\3\2\2\2\u00df\u00de\3\2\2\2\u00e0:\3\2\2\2\u00e1\u00e2\7#\2\2\u00e2"+
		"<\3\2\2\2\u00e3\u00e5\t\4\2\2\u00e4\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2"+
		"\u00e6\u00e4\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7>\3\2\2\2\u00e8\u00ee\t"+
		"\5\2\2\u00e9\u00ed\n\5\2\2\u00ea\u00eb\7^\2\2\u00eb\u00ed\t\6\2\2\u00ec"+
		"\u00e9\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ed\u00f0\3\2\2\2\u00ee\u00ec\3\2"+
		"\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f1\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f1"+
		"\u00f2\t\5\2\2\u00f2@\3\2\2\2\u00f3\u00f9\7$\2\2\u00f4\u00f8\n\6\2\2\u00f5"+
		"\u00f6\7^\2\2\u00f6\u00f8\t\6\2\2\u00f7\u00f4\3\2\2\2\u00f7\u00f5\3\2"+
		"\2\2\u00f8\u00fb\3\2\2\2\u00f9\u00f7\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa"+
		"\u00fc\3\2\2\2\u00fb\u00f9\3\2\2\2\u00fc\u00fd\7$\2\2\u00fdB\3\2\2\2\u00fe"+
		"\u0102\t\7\2\2\u00ff\u0101\t\4\2\2\u0100\u00ff\3\2\2\2\u0101\u0104\3\2"+
		"\2\2\u0102\u0100\3\2\2\2\u0102\u0103\3\2\2\2\u0103D\3\2\2\2\u0104\u0102"+
		"\3\2\2\2\u0105\u0106\7\60\2\2\u0106\u0107\5C\"\2\u0107F\3\2\2\2\21\2\u00ab"+
		"\u00af\u00bb\u00c6\u00cc\u00ce\u00d3\u00df\u00e6\u00ec\u00ee\u00f7\u00f9"+
		"\u0102\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}