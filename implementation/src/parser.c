#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_AT = 3,
  anon_sym_DOT = 4,
  anon_sym_open = 5,
  anon_sym_BANG = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_let = 9,
  anon_sym_rec = 10,
  anon_sym_and = 11,
  anon_sym_COLON = 12,
  anon_sym_type = 13,
  anon_sym_EQ = 14,
  sym_lident = 15,
  sym_uident = 16,
  sym_comment = 17,
  sym_implementation = 18,
  sym_structure_item_region = 19,
  sym_attributes = 20,
  sym_attribute = 21,
  sym_attribute_id = 22,
  sym_open_description = 23,
  sym_module_long_ident = 24,
  sym_payload = 25,
  sym_let_bindings = 26,
  sym_let_binding_body = 27,
  sym_pattern = 28,
  sym_typ_expr = 29,
  sym_poly_type_expr = 30,
  sym_expr = 31,
  sym_lident_list = 32,
  aux_sym_implementation_repeat1 = 33,
  aux_sym_attributes_repeat1 = 34,
  aux_sym_attribute_id_repeat1 = 35,
  aux_sym_module_long_ident_repeat1 = 36,
  aux_sym_let_bindings_repeat1 = 37,
  aux_sym_lident_list_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [anon_sym_open] = "open",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_and] = "and",
  [anon_sym_COLON] = ":",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [sym_lident] = "lident",
  [sym_uident] = "uident",
  [sym_comment] = "comment",
  [sym_implementation] = "implementation",
  [sym_structure_item_region] = "structure_item_region",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_attribute_id] = "attribute_id",
  [sym_open_description] = "open_description",
  [sym_module_long_ident] = "module_long_ident",
  [sym_payload] = "payload",
  [sym_let_bindings] = "let_bindings",
  [sym_let_binding_body] = "let_binding_body",
  [sym_pattern] = "pattern",
  [sym_typ_expr] = "typ_expr",
  [sym_poly_type_expr] = "poly_type_expr",
  [sym_expr] = "expr",
  [sym_lident_list] = "lident_list",
  [aux_sym_implementation_repeat1] = "implementation_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_id_repeat1] = "attribute_id_repeat1",
  [aux_sym_module_long_ident_repeat1] = "module_long_ident_repeat1",
  [aux_sym_let_bindings_repeat1] = "let_bindings_repeat1",
  [aux_sym_lident_list_repeat1] = "lident_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_lident] = sym_lident,
  [sym_uident] = sym_uident,
  [sym_comment] = sym_comment,
  [sym_implementation] = sym_implementation,
  [sym_structure_item_region] = sym_structure_item_region,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_attribute_id] = sym_attribute_id,
  [sym_open_description] = sym_open_description,
  [sym_module_long_ident] = sym_module_long_ident,
  [sym_payload] = sym_payload,
  [sym_let_bindings] = sym_let_bindings,
  [sym_let_binding_body] = sym_let_binding_body,
  [sym_pattern] = sym_pattern,
  [sym_typ_expr] = sym_typ_expr,
  [sym_poly_type_expr] = sym_poly_type_expr,
  [sym_expr] = sym_expr,
  [sym_lident_list] = sym_lident_list,
  [aux_sym_implementation_repeat1] = aux_sym_implementation_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_id_repeat1] = aux_sym_attribute_id_repeat1,
  [aux_sym_module_long_ident_repeat1] = aux_sym_module_long_ident_repeat1,
  [aux_sym_let_bindings_repeat1] = aux_sym_let_bindings_repeat1,
  [aux_sym_lident_list_repeat1] = aux_sym_lident_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_lident] = {
    .visible = true,
    .named = true,
  },
  [sym_uident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item_region] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_id] = {
    .visible = true,
    .named = true,
  },
  [sym_open_description] = {
    .visible = true,
    .named = true,
  },
  [sym_module_long_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_payload] = {
    .visible = true,
    .named = true,
  },
  [sym_let_bindings] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding_body] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_typ_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_poly_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_lident_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_implementation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_long_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_bindings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lident_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'y') ADVANCE(43);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_uident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_implementation] = STATE(72),
    [sym_structure_item_region] = STATE(36),
    [sym_attributes] = STATE(39),
    [sym_attribute] = STATE(24),
    [sym_open_description] = STATE(47),
    [sym_let_bindings] = STATE(47),
    [aux_sym_attributes_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_open] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(20), 1,
      anon_sym_and,
    ACTIONS(23), 1,
      sym_comment,
    STATE(2), 1,
      aux_sym_let_bindings_repeat1,
    STATE(73), 1,
      sym_attributes,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(15), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [28] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_and,
    STATE(10), 1,
      aux_sym_let_bindings_repeat1,
    STATE(73), 1,
      sym_attributes,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [56] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_and,
    STATE(2), 1,
      aux_sym_let_bindings_repeat1,
    STATE(73), 1,
      sym_attributes,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [84] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_attributes,
    STATE(42), 1,
      sym_structure_item_region,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(47), 2,
      sym_open_description,
      sym_let_bindings,
  [114] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_structure_item_region,
    STATE(39), 1,
      sym_attributes,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(47), 2,
      sym_open_description,
      sym_let_bindings,
  [144] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_structure_item_region,
    STATE(39), 1,
      sym_attributes,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(47), 2,
      sym_open_description,
      sym_let_bindings,
  [174] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_structure_item_region,
    STATE(39), 1,
      sym_attributes,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(47), 2,
      sym_open_description,
      sym_let_bindings,
  [204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_structure_item_region,
    STATE(39), 1,
      sym_attributes,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(47), 2,
      sym_open_description,
      sym_let_bindings,
  [234] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_and,
    STATE(2), 1,
      aux_sym_let_bindings_repeat1,
    STATE(73), 1,
      sym_attributes,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(45), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [262] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_and,
    STATE(4), 1,
      aux_sym_let_bindings_repeat1,
    STATE(73), 1,
      sym_attributes,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    STATE(38), 1,
      sym_structure_item_region,
    STATE(39), 1,
      sym_attributes,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(47), 2,
      sym_open_description,
      sym_let_bindings,
  [317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(51), 5,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_LPAREN,
      anon_sym_let,
      anon_sym_and,
  [334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(55), 5,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_LPAREN,
      anon_sym_let,
      anon_sym_and,
  [351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(57), 5,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_LPAREN,
      anon_sym_let,
      anon_sym_and,
  [368] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [386] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(70), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [400] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(15), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [414] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(74), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [428] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(78), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_payload,
    ACTIONS(80), 4,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [458] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(94), 3,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(96), 3,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [508] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(100), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_LPAREN,
      anon_sym_let,
      anon_sym_and,
  [534] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(104), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [548] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(108), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [566] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(112), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_and,
  [580] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [593] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_implementation_repeat1,
  [612] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym_implementation_repeat1,
  [628] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_rec,
    ACTIONS(134), 1,
      sym_lident,
    STATE(11), 1,
      sym_let_binding_body,
    STATE(61), 1,
      sym_pattern,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 4,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [666] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_implementation_repeat1,
  [682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [692] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_let,
    STATE(45), 2,
      sym_open_description,
      sym_let_bindings,
  [718] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [740] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_implementation_repeat1,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [766] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_implementation_repeat1,
  [782] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(168), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_AT,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
  [804] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(174), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      sym_lident,
    STATE(49), 1,
      aux_sym_lident_list_repeat1,
    STATE(67), 1,
      sym_lident_list,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      sym_lident,
    STATE(53), 1,
      aux_sym_lident_list_repeat1,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute_id,
    ACTIONS(184), 2,
      sym_lident,
      sym_uident,
  [856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_lident,
    STATE(18), 1,
      sym_let_binding_body,
    STATE(61), 1,
      sym_pattern,
  [869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_lident,
    STATE(3), 1,
      sym_let_binding_body,
    STATE(61), 1,
      sym_pattern,
  [882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      sym_lident,
    STATE(53), 1,
      aux_sym_lident_list_repeat1,
  [895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_type,
    ACTIONS(195), 1,
      sym_lident,
    STATE(68), 1,
      sym_poly_type_expr,
  [908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_lident,
    STATE(25), 1,
      sym_let_binding_body,
    STATE(61), 1,
      sym_pattern,
  [921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      sym_uident,
    STATE(33), 1,
      sym_module_long_ident,
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_lident,
    STATE(27), 1,
      sym_expr,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      sym_lident,
      sym_uident,
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_lident,
    STATE(71), 1,
      sym_typ_expr,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_lident,
    STATE(20), 1,
      sym_expr,
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_lident,
    STATE(74), 1,
      sym_typ_expr,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_uident,
    STATE(40), 1,
      sym_module_long_ident,
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_lident,
    STATE(29), 1,
      sym_expr,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_lident,
    STATE(19), 1,
      sym_expr,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_and,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
  [1086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_uident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 234,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 317,
  [SMALL_STATE(14)] = 334,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 400,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 442,
  [SMALL_STATE(22)] = 458,
  [SMALL_STATE(23)] = 476,
  [SMALL_STATE(24)] = 492,
  [SMALL_STATE(25)] = 508,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 534,
  [SMALL_STATE(28)] = 548,
  [SMALL_STATE(29)] = 566,
  [SMALL_STATE(30)] = 580,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 612,
  [SMALL_STATE(33)] = 628,
  [SMALL_STATE(34)] = 640,
  [SMALL_STATE(35)] = 656,
  [SMALL_STATE(36)] = 666,
  [SMALL_STATE(37)] = 682,
  [SMALL_STATE(38)] = 692,
  [SMALL_STATE(39)] = 704,
  [SMALL_STATE(40)] = 718,
  [SMALL_STATE(41)] = 730,
  [SMALL_STATE(42)] = 740,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 766,
  [SMALL_STATE(45)] = 782,
  [SMALL_STATE(46)] = 794,
  [SMALL_STATE(47)] = 804,
  [SMALL_STATE(48)] = 816,
  [SMALL_STATE(49)] = 832,
  [SMALL_STATE(50)] = 845,
  [SMALL_STATE(51)] = 856,
  [SMALL_STATE(52)] = 869,
  [SMALL_STATE(53)] = 882,
  [SMALL_STATE(54)] = 895,
  [SMALL_STATE(55)] = 908,
  [SMALL_STATE(56)] = 921,
  [SMALL_STATE(57)] = 934,
  [SMALL_STATE(58)] = 944,
  [SMALL_STATE(59)] = 952,
  [SMALL_STATE(60)] = 962,
  [SMALL_STATE(61)] = 972,
  [SMALL_STATE(62)] = 982,
  [SMALL_STATE(63)] = 992,
  [SMALL_STATE(64)] = 1002,
  [SMALL_STATE(65)] = 1012,
  [SMALL_STATE(66)] = 1022,
  [SMALL_STATE(67)] = 1030,
  [SMALL_STATE(68)] = 1037,
  [SMALL_STATE(69)] = 1044,
  [SMALL_STATE(70)] = 1051,
  [SMALL_STATE(71)] = 1058,
  [SMALL_STATE(72)] = 1065,
  [SMALL_STATE(73)] = 1072,
  [SMALL_STATE(74)] = 1079,
  [SMALL_STATE(75)] = 1086,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(50),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(58),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 8),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(75),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(50),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(12),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(12),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lident_list, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2), SHIFT_REPEAT(53),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poly_type_expr, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ_expr, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rescript(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
