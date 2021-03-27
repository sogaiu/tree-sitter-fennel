#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_false = 2,
  anon_sym_true = 3,
  sym_keyword = 4,
  sym_nil = 5,
  sym__dec = 6,
  sym__hex = 7,
  sym_string = 8,
  sym_symbol = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_BQUOTE = 16,
  anon_sym_AT = 17,
  anon_sym_COMMA = 18,
  sym_source_file = 19,
  sym__form = 20,
  sym_boolean = 21,
  sym_number = 22,
  sym_array = 23,
  sym_list = 24,
  sym_table = 25,
  sym_syntax_quote_form = 26,
  sym_unquote_form = 27,
  aux_sym_source_file_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_keyword] = "keyword",
  [sym_nil] = "nil",
  [sym__dec] = "_dec",
  [sym__hex] = "_hex",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__form] = "_form",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_array] = "array",
  [sym_list] = "list",
  [sym_table] = "table",
  [sym_syntax_quote_form] = "syntax_quote_form",
  [sym_unquote_form] = "unquote_form",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_keyword] = sym_keyword,
  [sym_nil] = sym_nil,
  [sym__dec] = sym__dec,
  [sym__hex] = sym__hex,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source_file] = sym_source_file,
  [sym__form] = sym__form,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_array] = sym_array,
  [sym_list] = sym_list,
  [sym_table] = sym_table,
  [sym_syntax_quote_form] = sym_syntax_quote_form,
  [sym_unquote_form] = sym_unquote_form,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax_quote_form] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_form] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '~' || c == 955))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? c == '^'
        : c <= 'z')
      : (c <= '~' || c == 955))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < 'G'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? c == '^'
        : c <= 'z')
      : (c <= '~' || c == 955))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '<'
        ? (c >= '-' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < '~'
      ? (c < 'b'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '~' || c == 955))));
}

static inline bool sym_symbol_character_set_5(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '*' || (c < '<'
        ? (c >= '/' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? c == '^'
        : c <= 'z')
      : (c <= '~' || c == 955))));
}

static inline bool sym_symbol_character_set_6(int32_t c) {
  return (c < 'A'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '*' || (c < '<'
        ? (c >= '.' && c <= ':')
        : c <= '?')))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? c == '^'
        : c <= 'z')
      : (c <= '~' || c == 955))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '~' ||
          lookahead == 955) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_keyword);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_nil);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '_') ADVANCE(26);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(31);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(35);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(39);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(39);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(40);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(39);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '_') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(35);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(39);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(53);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(12);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(11);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(54);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(56);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(14);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(57);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(51);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(50);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '_') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__form] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_number] = STATE(3),
    [sym_array] = STATE(3),
    [sym_list] = STATE(3),
    [sym_table] = STATE(3),
    [sym_syntax_quote_form] = STATE(3),
    [sym_unquote_form] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(9),
    [sym_nil] = ACTIONS(11),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [2] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [sym_table] = STATE(2),
    [sym_syntax_quote_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_keyword] = ACTIONS(30),
    [sym_nil] = ACTIONS(33),
    [sym__dec] = ACTIONS(36),
    [sym__hex] = ACTIONS(36),
    [sym_string] = ACTIONS(30),
    [sym_symbol] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
  },
  [3] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [sym_table] = STATE(2),
    [sym_syntax_quote_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(56),
    [sym_nil] = ACTIONS(58),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(56),
    [sym_symbol] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [4] = {
    [sym__form] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_number] = STATE(7),
    [sym_array] = STATE(7),
    [sym_list] = STATE(7),
    [sym_table] = STATE(7),
    [sym_syntax_quote_form] = STATE(7),
    [sym_unquote_form] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(60),
    [sym_nil] = ACTIONS(62),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(60),
    [sym_symbol] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [5] = {
    [sym__form] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_number] = STATE(8),
    [sym_array] = STATE(8),
    [sym_list] = STATE(8),
    [sym_table] = STATE(8),
    [sym_syntax_quote_form] = STATE(8),
    [sym_unquote_form] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(66),
    [sym_nil] = ACTIONS(68),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(66),
    [sym_symbol] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [6] = {
    [sym__form] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym_number] = STATE(9),
    [sym_array] = STATE(9),
    [sym_list] = STATE(9),
    [sym_table] = STATE(9),
    [sym_syntax_quote_form] = STATE(9),
    [sym_unquote_form] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(72),
    [sym_nil] = ACTIONS(74),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(72),
    [sym_symbol] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [7] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [sym_table] = STATE(2),
    [sym_syntax_quote_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(56),
    [sym_nil] = ACTIONS(58),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(56),
    [sym_symbol] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [8] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [sym_table] = STATE(2),
    [sym_syntax_quote_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(56),
    [sym_nil] = ACTIONS(58),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(56),
    [sym_symbol] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [9] = {
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_number] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [sym_table] = STATE(2),
    [sym_syntax_quote_form] = STATE(2),
    [sym_unquote_form] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(56),
    [sym_nil] = ACTIONS(58),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(56),
    [sym_symbol] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [10] = {
    [sym__form] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_number] = STATE(16),
    [sym_array] = STATE(16),
    [sym_list] = STATE(16),
    [sym_table] = STATE(16),
    [sym_syntax_quote_form] = STATE(16),
    [sym_unquote_form] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(84),
    [sym_nil] = ACTIONS(86),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(84),
    [sym_symbol] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [11] = {
    [sym__form] = STATE(17),
    [sym_boolean] = STATE(17),
    [sym_number] = STATE(17),
    [sym_array] = STATE(17),
    [sym_list] = STATE(17),
    [sym_table] = STATE(17),
    [sym_syntax_quote_form] = STATE(17),
    [sym_unquote_form] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [sym_keyword] = ACTIONS(88),
    [sym_nil] = ACTIONS(90),
    [sym__dec] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym_string] = ACTIONS(88),
    [sym_symbol] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(94),
    [sym_keyword] = ACTIONS(92),
    [sym_nil] = ACTIONS(94),
    [sym__dec] = ACTIONS(94),
    [sym__hex] = ACTIONS(94),
    [sym_string] = ACTIONS(92),
    [sym_symbol] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(98),
    [sym_keyword] = ACTIONS(96),
    [sym_nil] = ACTIONS(98),
    [sym__dec] = ACTIONS(98),
    [sym__hex] = ACTIONS(98),
    [sym_string] = ACTIONS(96),
    [sym_symbol] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(102),
    [sym_keyword] = ACTIONS(100),
    [sym_nil] = ACTIONS(102),
    [sym__dec] = ACTIONS(102),
    [sym__hex] = ACTIONS(102),
    [sym_string] = ACTIONS(100),
    [sym_symbol] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(106),
    [sym_keyword] = ACTIONS(104),
    [sym_nil] = ACTIONS(106),
    [sym__dec] = ACTIONS(106),
    [sym__hex] = ACTIONS(106),
    [sym_string] = ACTIONS(104),
    [sym_symbol] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(110),
    [sym_keyword] = ACTIONS(108),
    [sym_nil] = ACTIONS(110),
    [sym__dec] = ACTIONS(110),
    [sym__hex] = ACTIONS(110),
    [sym_string] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(114),
    [sym_keyword] = ACTIONS(112),
    [sym_nil] = ACTIONS(114),
    [sym__dec] = ACTIONS(114),
    [sym__hex] = ACTIONS(114),
    [sym_string] = ACTIONS(112),
    [sym_symbol] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(118),
    [sym_keyword] = ACTIONS(116),
    [sym_nil] = ACTIONS(118),
    [sym__dec] = ACTIONS(118),
    [sym__hex] = ACTIONS(118),
    [sym_string] = ACTIONS(116),
    [sym_symbol] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [sym_keyword] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym__dec] = ACTIONS(122),
    [sym__hex] = ACTIONS(122),
    [sym_string] = ACTIONS(120),
    [sym_symbol] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [sym_keyword] = ACTIONS(124),
    [sym_nil] = ACTIONS(126),
    [sym__dec] = ACTIONS(126),
    [sym__hex] = ACTIONS(126),
    [sym_string] = ACTIONS(124),
    [sym_symbol] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [sym_keyword] = ACTIONS(128),
    [sym_nil] = ACTIONS(130),
    [sym__dec] = ACTIONS(130),
    [sym__hex] = ACTIONS(130),
    [sym_string] = ACTIONS(128),
    [sym_symbol] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_quote_form, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax_quote_form, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_form, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_form, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fennel(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
