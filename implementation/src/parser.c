#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_open = 1,
  anon_sym_BANG = 2,
  anon_sym_DOT = 3,
  anon_sym_AT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_lident = 7,
  sym_uident = 8,
  sym_comment = 9,
  sym_implementation = 10,
  sym_structure_item_region = 11,
  sym_open_description = 12,
  sym_module_long_ident = 13,
  sym_attributes = 14,
  sym_attribute = 15,
  sym_attribute_id = 16,
  sym_payload = 17,
  aux_sym_implementation_repeat1 = 18,
  aux_sym_module_long_ident_repeat1 = 19,
  aux_sym_attributes_repeat1 = 20,
  aux_sym_attribute_id_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
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
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_implementation] = STATE(26),
    [sym_structure_item_region] = STATE(2),
    [sym_open_description] = STATE(17),
    [sym_attributes] = STATE(24),
    [sym_attribute] = STATE(12),
    [aux_sym_implementation_repeat1] = STATE(2),
    [aux_sym_attributes_repeat1] = STATE(12),
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
    STATE(17), 1,
      sym_open_description,
    STATE(24), 1,
      sym_attributes,
    STATE(3), 2,
      sym_structure_item_region,
      aux_sym_implementation_repeat1,
    STATE(12), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [27] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_open,
    ACTIONS(18), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym_open_description,
    STATE(24), 1,
      sym_attributes,
    STATE(3), 2,
      sym_structure_item_region,
      aux_sym_implementation_repeat1,
    STATE(12), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [54] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(21), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [69] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(25), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [84] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [99] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(39), 3,
      anon_sym_open,
      anon_sym_AT,
      anon_sym_LPAREN,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_open,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_LPAREN,
  [168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      anon_sym_open,
    STATE(10), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_AT,
  [192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_payload,
    ACTIONS(50), 2,
      anon_sym_open,
      anon_sym_AT,
  [206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_BANG,
    ACTIONS(58), 1,
      sym_uident,
    STATE(20), 1,
      sym_module_long_ident,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_attribute_id,
    ACTIONS(62), 2,
      sym_lident,
      sym_uident,
  [248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_open,
      anon_sym_AT,
  [266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      sym_lident,
      sym_uident,
  [274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_open,
      anon_sym_AT,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_uident,
    STATE(15), 1,
      sym_module_long_ident,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    STATE(19), 1,
      sym_open_description,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_open,
      anon_sym_AT,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_uident,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 192,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 266,
  [SMALL_STATE(22)] = 274,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 292,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 310,
  [SMALL_STATE(27)] = 317,
  [SMALL_STATE(28)] = 324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(16),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
