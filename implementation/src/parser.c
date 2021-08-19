#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(19);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
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
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [sym_implementation] = STATE(33),
    [sym_structure_item_region] = STATE(12),
    [sym_open_description] = STATE(24),
    [sym_attributes] = STATE(29),
    [sym_attribute] = STATE(14),
    [aux_sym_attributes_repeat1] = STATE(14),
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
    STATE(21), 1,
      sym_structure_item_region,
    STATE(24), 1,
      sym_open_description,
    STATE(29), 1,
      sym_attributes,
    STATE(14), 2,
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
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_structure_item_region,
    STATE(24), 1,
      sym_open_description,
    STATE(29), 1,
      sym_attributes,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [52] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym_structure_item_region,
    STATE(24), 1,
      sym_open_description,
    STATE(29), 1,
      sym_attributes,
    STATE(14), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [75] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(15), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [90] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(19), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [105] = 5,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [122] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(39), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [154] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_LPAREN,
  [181] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_implementation_repeat1,
  [197] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(26), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_open,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [223] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_implementation_repeat1,
  [239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_payload,
    ACTIONS(61), 2,
      anon_sym_open,
      anon_sym_AT,
  [253] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_implementation_repeat1,
  [269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_open,
    ACTIONS(71), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [283] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [294] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [305] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_BANG,
    ACTIONS(86), 1,
      sym_uident,
    STATE(23), 1,
      sym_module_long_ident,
  [329] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [340] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_attribute_id,
    ACTIONS(96), 2,
      sym_lident,
      sym_uident,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      sym_lident,
      sym_uident,
  [370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_open,
      anon_sym_AT,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_uident,
    STATE(20), 1,
      sym_module_long_ident,
  [388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    STATE(19), 1,
      sym_open_description,
  [398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_open,
      anon_sym_AT,
  [406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_uident,
  [413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 239,
  [SMALL_STATE(17)] = 253,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 329,
  [SMALL_STATE(24)] = 340,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 362,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 388,
  [SMALL_STATE(30)] = 398,
  [SMALL_STATE(31)] = 406,
  [SMALL_STATE(32)] = 413,
  [SMALL_STATE(33)] = 420,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(26),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(25),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
