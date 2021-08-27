#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_open = 3,
  anon_sym_BANG = 4,
  anon_sym_DOT = 5,
  anon_sym_let = 6,
  anon_sym_rec = 7,
  anon_sym_and = 8,
  anon_sym_COLON = 9,
  anon_sym_type = 10,
  anon_sym_EQ = 11,
  anon_sym_nonrec = 12,
  aux_sym_type_params_token1 = 13,
  aux_sym_type_params_token2 = 14,
  anon_sym_COMMA = 15,
  anon_sym_GT = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_AT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_QMARK = 20,
  anon_sym_when = 21,
  anon_sym_if = 22,
  anon_sym_RPAREN = 23,
  sym_lident = 24,
  sym_uident = 25,
  sym_comment = 26,
  sym_implementation = 27,
  sym_structure_item_region = 28,
  sym_open_description = 29,
  sym_module_long_ident = 30,
  sym_let_bindings = 31,
  sym_let_binding_body = 32,
  sym_type_definition_or_extension = 33,
  sym_type_params = 34,
  sym_type_param = 35,
  sym_type_equation_and_representation = 36,
  sym_value_path = 37,
  sym_attributes = 38,
  sym_attribute = 39,
  sym_attribute_id = 40,
  sym_payload = 41,
  sym_pattern = 42,
  sym_typ_expr = 43,
  sym_poly_type_expr = 44,
  sym_expr = 45,
  sym_lident_list = 46,
  sym_ident = 47,
  aux_sym_implementation_repeat1 = 48,
  aux_sym_module_long_ident_repeat1 = 49,
  aux_sym_let_bindings_repeat1 = 50,
  aux_sym_type_params_repeat1 = 51,
  aux_sym_attributes_repeat1 = 52,
  aux_sym_attribute_id_repeat1 = 53,
  aux_sym_lident_list_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_open] = "open",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_and] = "and",
  [anon_sym_COLON] = ":",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_nonrec] = "nonrec",
  [aux_sym_type_params_token1] = "type_params_token1",
  [aux_sym_type_params_token2] = "type_params_token2",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_QMARK] = "\?",
  [anon_sym_when] = "when",
  [anon_sym_if] = "if",
  [anon_sym_RPAREN] = ")",
  [sym_lident] = "lident",
  [sym_uident] = "uident",
  [sym_comment] = "comment",
  [sym_implementation] = "implementation",
  [sym_structure_item_region] = "structure_item_region",
  [sym_open_description] = "open_description",
  [sym_module_long_ident] = "module_long_ident",
  [sym_let_bindings] = "let_bindings",
  [sym_let_binding_body] = "let_binding_body",
  [sym_type_definition_or_extension] = "type_definition_or_extension",
  [sym_type_params] = "type_params",
  [sym_type_param] = "type_param",
  [sym_type_equation_and_representation] = "type_equation_and_representation",
  [sym_value_path] = "value_path",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_attribute_id] = "attribute_id",
  [sym_payload] = "payload",
  [sym_pattern] = "pattern",
  [sym_typ_expr] = "typ_expr",
  [sym_poly_type_expr] = "poly_type_expr",
  [sym_expr] = "expr",
  [sym_lident_list] = "lident_list",
  [sym_ident] = "ident",
  [aux_sym_implementation_repeat1] = "implementation_repeat1",
  [aux_sym_module_long_ident_repeat1] = "module_long_ident_repeat1",
  [aux_sym_let_bindings_repeat1] = "let_bindings_repeat1",
  [aux_sym_type_params_repeat1] = "type_params_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_id_repeat1] = "attribute_id_repeat1",
  [aux_sym_lident_list_repeat1] = "lident_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_nonrec] = anon_sym_nonrec,
  [aux_sym_type_params_token1] = aux_sym_type_params_token1,
  [aux_sym_type_params_token2] = aux_sym_type_params_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_lident] = sym_lident,
  [sym_uident] = sym_uident,
  [sym_comment] = sym_comment,
  [sym_implementation] = sym_implementation,
  [sym_structure_item_region] = sym_structure_item_region,
  [sym_open_description] = sym_open_description,
  [sym_module_long_ident] = sym_module_long_ident,
  [sym_let_bindings] = sym_let_bindings,
  [sym_let_binding_body] = sym_let_binding_body,
  [sym_type_definition_or_extension] = sym_type_definition_or_extension,
  [sym_type_params] = sym_type_params,
  [sym_type_param] = sym_type_param,
  [sym_type_equation_and_representation] = sym_type_equation_and_representation,
  [sym_value_path] = sym_value_path,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_attribute_id] = sym_attribute_id,
  [sym_payload] = sym_payload,
  [sym_pattern] = sym_pattern,
  [sym_typ_expr] = sym_typ_expr,
  [sym_poly_type_expr] = sym_poly_type_expr,
  [sym_expr] = sym_expr,
  [sym_lident_list] = sym_lident_list,
  [sym_ident] = sym_ident,
  [aux_sym_implementation_repeat1] = aux_sym_implementation_repeat1,
  [aux_sym_module_long_ident_repeat1] = aux_sym_module_long_ident_repeat1,
  [aux_sym_let_bindings_repeat1] = aux_sym_let_bindings_repeat1,
  [aux_sym_type_params_repeat1] = aux_sym_type_params_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_id_repeat1] = aux_sym_attribute_id_repeat1,
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
  [anon_sym_nonrec] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_params_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_params_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [sym_let_bindings] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_or_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_type_params] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_equation_and_representation] = {
    .visible = true,
    .named = true,
  },
  [sym_value_path] = {
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
  [sym_ident] = {
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
  [aux_sym_let_bindings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_params_repeat1] = {
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
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '(' ||
          lookahead == '<') ADVANCE(53);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_nonrec);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_nonrec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_type_params_token1);
      if (lookahead == '\f') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_type_params_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_type_params_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'y') ADVANCE(71);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
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
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_nonrec] = ACTIONS(1),
    [aux_sym_type_params_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_uident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_implementation] = STATE(109),
    [sym_structure_item_region] = STATE(48),
    [sym_open_description] = STATE(51),
    [sym_let_bindings] = STATE(51),
    [sym_type_definition_or_extension] = STATE(51),
    [sym_attributes] = STATE(28),
    [sym_attribute] = STATE(16),
    [aux_sym_attributes_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_attributes,
    STATE(45), 1,
      sym_structure_item_region,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(51), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [37] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_attributes,
    STATE(55), 1,
      sym_structure_item_region,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(51), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [71] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_attributes,
    STATE(55), 1,
      sym_structure_item_region,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(51), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [105] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_attributes,
    STATE(55), 1,
      sym_structure_item_region,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(51), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [139] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_attributes,
    STATE(55), 1,
      sym_structure_item_region,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(51), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [173] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_AT,
    STATE(28), 1,
      sym_attributes,
    STATE(55), 1,
      sym_structure_item_region,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(51), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [204] = 8,
    ACTIONS(31), 1,
      anon_sym_and,
    ACTIONS(34), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_let_bindings_repeat1,
    STATE(116), 1,
      sym_attributes,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [232] = 8,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_and,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(8), 1,
      aux_sym_let_bindings_repeat1,
    STATE(116), 1,
      sym_attributes,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [260] = 8,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_and,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(8), 1,
      aux_sym_let_bindings_repeat1,
    STATE(116), 1,
      sym_attributes,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [288] = 8,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_and,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(10), 1,
      aux_sym_let_bindings_repeat1,
    STATE(116), 1,
      sym_attributes,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [316] = 8,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_and,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_let_bindings_repeat1,
    STATE(116), 1,
      sym_attributes,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(55), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
      anon_sym_LPAREN,
  [362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(60), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
      anon_sym_LPAREN,
  [380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(64), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
      anon_sym_LPAREN,
  [398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_AT,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(66), 4,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
  [415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_AT,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(68), 4,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
  [432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 7,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
      anon_sym_LPAREN,
  [445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_payload,
    ACTIONS(73), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [462] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [480] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [494] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [508] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(93), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [522] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(97), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [540] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(101), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [554] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [572] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(112), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    STATE(50), 3,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
  [604] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(29), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [618] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(116), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_when,
      anon_sym_if,
      anon_sym_RPAREN,
  [654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [665] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_lident,
    ACTIONS(134), 1,
      sym_uident,
    STATE(46), 1,
      sym_value_path,
    ACTIONS(130), 2,
      anon_sym_rec,
      anon_sym_nonrec,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_AT,
  [739] = 6,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_implementation_repeat1,
  [758] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_implementation_repeat1,
  [774] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [786] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(160), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_rec,
    ACTIONS(164), 1,
      sym_lident,
    STATE(12), 1,
      sym_let_binding_body,
    STATE(86), 1,
      sym_pattern,
  [814] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_implementation_repeat1,
  [830] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      aux_sym_type_params_token1,
    STATE(53), 1,
      sym_type_equation_and_representation,
    STATE(88), 1,
      sym_type_params,
  [846] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      aux_sym_type_params_token1,
    STATE(52), 1,
      sym_type_equation_and_representation,
    STATE(91), 1,
      sym_type_params,
  [862] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_implementation_repeat1,
  [878] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_implementation_repeat1,
  [894] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(188), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [906] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [918] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(196), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [930] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(200), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [942] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(204), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [954] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [966] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(208), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      sym_lident,
    STATE(66), 1,
      aux_sym_lident_list_repeat1,
    STATE(101), 1,
      sym_lident_list,
  [994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_lident,
    STATE(22), 1,
      sym_let_binding_body,
    STATE(86), 1,
      sym_pattern,
  [1007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      sym_lident,
    STATE(59), 1,
      aux_sym_lident_list_repeat1,
  [1020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(223), 1,
      sym_uident,
    STATE(56), 1,
      sym_module_long_ident,
  [1033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_GT,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym_type_param,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_lident,
    STATE(11), 1,
      sym_let_binding_body,
    STATE(86), 1,
      sym_pattern,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_GT,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_type_params_repeat1,
  [1072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_uident,
    ACTIONS(231), 1,
      sym_lident,
    STATE(47), 1,
      sym_value_path,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 2,
      anon_sym_when,
      anon_sym_if,
  [1096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_lident,
    STATE(59), 1,
      aux_sym_lident_list_repeat1,
  [1109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(70), 1,
      sym_type_param,
  [1122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(92), 1,
      sym_type_param,
  [1135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_GT,
    STATE(69), 1,
      aux_sym_type_params_repeat1,
  [1148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_GT,
    STATE(63), 1,
      aux_sym_type_params_repeat1,
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_attribute_id,
    ACTIONS(252), 2,
      sym_lident,
      sym_uident,
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_type,
    ACTIONS(256), 1,
      sym_lident,
    STATE(108), 1,
      sym_poly_type_expr,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(94), 1,
      sym_ident,
    ACTIONS(258), 2,
      sym_lident,
      sym_uident,
  [1196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_lident,
    STATE(29), 1,
      sym_let_binding_body,
    STATE(86), 1,
      sym_pattern,
  [1209] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_EQ,
    ACTIONS(262), 1,
      aux_sym_type_params_token1,
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_lident,
    STATE(21), 1,
      sym_expr,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_module_long_ident_repeat1,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_lident,
    STATE(27), 1,
      sym_expr,
  [1249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_lident,
    STATE(23), 1,
      sym_expr,
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_lident,
    ACTIONS(271), 1,
      sym_uident,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym_type_param,
  [1279] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_EQ,
    ACTIONS(275), 1,
      aux_sym_type_params_token1,
  [1289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_module_long_ident_repeat1,
  [1299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_lident,
    STATE(65), 1,
      sym_pattern,
  [1309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_uident,
    ACTIONS(279), 1,
      sym_lident,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COLON,
    ACTIONS(283), 1,
      anon_sym_EQ,
  [1329] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(287), 1,
      aux_sym_type_params_token1,
  [1339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym_type_equation_and_representation,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_module_long_ident_repeat1,
  [1359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_lident,
    STATE(102), 1,
      sym_typ_expr,
  [1369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_type_equation_and_representation,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_lident,
    STATE(30), 1,
      sym_expr,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_lident,
    STATE(110), 1,
      sym_typ_expr,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      sym_lident,
      sym_uident,
  [1431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_lident,
    STATE(107), 1,
      sym_expr,
  [1441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_uident,
    STATE(54), 1,
      sym_module_long_ident,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_EQ,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_EQ,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_EQ,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_type_params_token2,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_lident,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_EQ,
  [1514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_EQ,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_EQ,
  [1535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [1542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_EQ,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_uident,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_and,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_uident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 344,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 380,
  [SMALL_STATE(16)] = 398,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 445,
  [SMALL_STATE(20)] = 462,
  [SMALL_STATE(21)] = 480,
  [SMALL_STATE(22)] = 494,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 540,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 586,
  [SMALL_STATE(29)] = 604,
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 643,
  [SMALL_STATE(33)] = 654,
  [SMALL_STATE(34)] = 665,
  [SMALL_STATE(35)] = 678,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 700,
  [SMALL_STATE(38)] = 711,
  [SMALL_STATE(39)] = 728,
  [SMALL_STATE(40)] = 739,
  [SMALL_STATE(41)] = 758,
  [SMALL_STATE(42)] = 774,
  [SMALL_STATE(43)] = 786,
  [SMALL_STATE(44)] = 798,
  [SMALL_STATE(45)] = 814,
  [SMALL_STATE(46)] = 830,
  [SMALL_STATE(47)] = 846,
  [SMALL_STATE(48)] = 862,
  [SMALL_STATE(49)] = 878,
  [SMALL_STATE(50)] = 894,
  [SMALL_STATE(51)] = 906,
  [SMALL_STATE(52)] = 918,
  [SMALL_STATE(53)] = 930,
  [SMALL_STATE(54)] = 942,
  [SMALL_STATE(55)] = 954,
  [SMALL_STATE(56)] = 966,
  [SMALL_STATE(57)] = 978,
  [SMALL_STATE(58)] = 994,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1020,
  [SMALL_STATE(61)] = 1033,
  [SMALL_STATE(62)] = 1046,
  [SMALL_STATE(63)] = 1059,
  [SMALL_STATE(64)] = 1072,
  [SMALL_STATE(65)] = 1085,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1109,
  [SMALL_STATE(68)] = 1122,
  [SMALL_STATE(69)] = 1135,
  [SMALL_STATE(70)] = 1148,
  [SMALL_STATE(71)] = 1161,
  [SMALL_STATE(72)] = 1172,
  [SMALL_STATE(73)] = 1185,
  [SMALL_STATE(74)] = 1196,
  [SMALL_STATE(75)] = 1209,
  [SMALL_STATE(76)] = 1219,
  [SMALL_STATE(77)] = 1229,
  [SMALL_STATE(78)] = 1239,
  [SMALL_STATE(79)] = 1249,
  [SMALL_STATE(80)] = 1259,
  [SMALL_STATE(81)] = 1269,
  [SMALL_STATE(82)] = 1279,
  [SMALL_STATE(83)] = 1289,
  [SMALL_STATE(84)] = 1299,
  [SMALL_STATE(85)] = 1309,
  [SMALL_STATE(86)] = 1319,
  [SMALL_STATE(87)] = 1329,
  [SMALL_STATE(88)] = 1339,
  [SMALL_STATE(89)] = 1349,
  [SMALL_STATE(90)] = 1359,
  [SMALL_STATE(91)] = 1369,
  [SMALL_STATE(92)] = 1379,
  [SMALL_STATE(93)] = 1387,
  [SMALL_STATE(94)] = 1395,
  [SMALL_STATE(95)] = 1403,
  [SMALL_STATE(96)] = 1413,
  [SMALL_STATE(97)] = 1423,
  [SMALL_STATE(98)] = 1431,
  [SMALL_STATE(99)] = 1441,
  [SMALL_STATE(100)] = 1451,
  [SMALL_STATE(101)] = 1458,
  [SMALL_STATE(102)] = 1465,
  [SMALL_STATE(103)] = 1472,
  [SMALL_STATE(104)] = 1479,
  [SMALL_STATE(105)] = 1486,
  [SMALL_STATE(106)] = 1493,
  [SMALL_STATE(107)] = 1500,
  [SMALL_STATE(108)] = 1507,
  [SMALL_STATE(109)] = 1514,
  [SMALL_STATE(110)] = 1521,
  [SMALL_STATE(111)] = 1528,
  [SMALL_STATE(112)] = 1535,
  [SMALL_STATE(113)] = 1542,
  [SMALL_STATE(114)] = 1549,
  [SMALL_STATE(115)] = 1556,
  [SMALL_STATE(116)] = 1563,
  [SMALL_STATE(117)] = 1570,
  [SMALL_STATE(118)] = 1577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(74),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(71),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(97),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 8),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(114),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 7),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(7),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_equation_and_representation, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_equation_and_representation, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2), SHIFT_REPEAT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lident_list, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_params_repeat1, 2), SHIFT_REPEAT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_params_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(118),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poly_type_expr, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ_expr, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
