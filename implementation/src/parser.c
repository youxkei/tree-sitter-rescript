#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_open = 3,
  anon_sym_BANG = 4,
  anon_sym_DOT = 5,
  anon_sym_AT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_lident = 9,
  sym_uident = 10,
  sym_comment = 11,
  sym_implementation = 12,
  sym_structure_item_region = 13,
  sym_open_description = 14,
  sym_module_long_ident = 15,
  sym_attributes = 16,
  sym_attribute = 17,
  sym_attribute_id = 18,
  sym_payload = 19,
  aux_sym_implementation_repeat1 = 20,
  aux_sym_module_long_ident_repeat1 = 21,
  aux_sym_attributes_repeat1 = 22,
  aux_sym_attribute_id_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_open] = "open",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_lident] = "lident",
  [sym_uident] = "uident",
  [sym_comment] = "comment",
  [sym_implementation] = "implementation",
  [sym_structure_item_region] = "structure_item_region",
  [sym_open_description] = "open_description",
  [sym_module_long_ident] = "module_long_ident",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_attribute_id] = "attribute_id",
  [sym_payload] = "payload",
  [aux_sym_implementation_repeat1] = "implementation_repeat1",
  [aux_sym_module_long_ident_repeat1] = "module_long_ident_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_id_repeat1] = "attribute_id_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_lident] = sym_lident,
  [sym_uident] = sym_uident,
  [sym_comment] = sym_comment,
  [sym_implementation] = sym_implementation,
  [sym_structure_item_region] = sym_structure_item_region,
  [sym_open_description] = sym_open_description,
  [sym_module_long_ident] = sym_module_long_ident,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_attribute_id] = sym_attribute_id,
  [sym_payload] = sym_payload,
  [aux_sym_implementation_repeat1] = aux_sym_implementation_repeat1,
  [aux_sym_module_long_ident_repeat1] = aux_sym_module_long_ident_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_id_repeat1] = aux_sym_attribute_id_repeat1,
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
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [sym_open_description] = {
    .visible = true,
    .named = true,
  },
  [sym_module_long_ident] = {
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
  [sym_payload] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_implementation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_long_ident_repeat1] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_uident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_implementation] = STATE(40),
    [sym_structure_item_region] = STATE(21),
    [sym_open_description] = STATE(26),
    [sym_attributes] = STATE(33),
    [sym_attribute] = STATE(22),
    [aux_sym_attributes_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_structure_item_region,
    STATE(26), 1,
      sym_open_description,
    STATE(33), 1,
      sym_attributes,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [26] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_structure_item_region,
    STATE(26), 1,
      sym_open_description,
    STATE(33), 1,
      sym_attributes,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [52] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_structure_item_region,
    STATE(26), 1,
      sym_open_description,
    STATE(33), 1,
      sym_attributes,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [78] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_structure_item_region,
    STATE(26), 1,
      sym_open_description,
    STATE(33), 1,
      sym_attributes,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [104] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_structure_item_region,
    STATE(26), 1,
      sym_open_description,
    STATE(33), 1,
      sym_attributes,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym_structure_item_region,
    STATE(26), 1,
      sym_open_description,
    STATE(33), 1,
      sym_attributes,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [153] = 5,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [171] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [189] = 5,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(38), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(40), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(44), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [237] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(31), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(49), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [265] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_implementation_repeat1,
  [284] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(59), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [296] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_open,
    ACTIONS(67), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [322] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(72), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [334] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_implementation_repeat1,
  [350] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_implementation_repeat1,
  [366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      anon_sym_open,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [380] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [392] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_implementation_repeat1,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 4,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_LPAREN,
  [418] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(100), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [430] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_implementation_repeat1,
  [446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_payload,
    ACTIONS(106), 2,
      anon_sym_open,
      anon_sym_AT,
  [460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_BANG,
    ACTIONS(112), 1,
      sym_uident,
    STATE(17), 1,
      sym_module_long_ident,
  [473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_attribute_id,
    ACTIONS(114), 2,
      sym_lident,
      sym_uident,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_uident,
    STATE(19), 1,
      sym_module_long_ident,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_open,
      anon_sym_AT,
  [502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    STATE(23), 1,
      sym_open_description,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_open,
      anon_sym_AT,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_open,
      anon_sym_AT,
  [528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      sym_lident,
      sym_uident,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_open,
      anon_sym_AT,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_open,
      anon_sym_AT,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_uident,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 334,
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 380,
  [SMALL_STATE(24)] = 392,
  [SMALL_STATE(25)] = 408,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 446,
  [SMALL_STATE(29)] = 460,
  [SMALL_STATE(30)] = 473,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 502,
  [SMALL_STATE(34)] = 512,
  [SMALL_STATE(35)] = 520,
  [SMALL_STATE(36)] = 528,
  [SMALL_STATE(37)] = 536,
  [SMALL_STATE(38)] = 544,
  [SMALL_STATE(39)] = 552,
  [SMALL_STATE(40)] = 559,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(39),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
