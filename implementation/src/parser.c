#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_external = 13,
  aux_sym_type_params_token1 = 14,
  aux_sym_type_params_token2 = 15,
  anon_sym_COMMA = 16,
  anon_sym_GT = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_AT = 19,
  anon_sym_LPAREN = 20,
  anon_sym_QMARK = 21,
  anon_sym_when = 22,
  anon_sym_if = 23,
  anon_sym_RPAREN = 24,
  sym_lident = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_token1 = 27,
  sym_uident = 28,
  sym_comment = 29,
  sym_implementation = 30,
  sym_structure_item_region = 31,
  sym_open_description = 32,
  sym_module_long_ident = 33,
  sym_let_bindings = 34,
  sym_let_binding_body = 35,
  sym_type_definition_or_extension = 36,
  sym_external_def = 37,
  sym_type_params = 38,
  sym_type_param = 39,
  sym_type_equation_and_representation = 40,
  sym_value_path = 41,
  sym_attributes = 42,
  sym_attribute = 43,
  sym_attribute_id = 44,
  sym_payload = 45,
  sym_pattern = 46,
  sym_typ_expr = 47,
  sym_poly_type_expr = 48,
  sym_expr = 49,
  sym_lident_list = 50,
  sym_ident = 51,
  sym_string = 52,
  aux_sym_implementation_repeat1 = 53,
  aux_sym_module_long_ident_repeat1 = 54,
  aux_sym_let_bindings_repeat1 = 55,
  aux_sym_type_params_repeat1 = 56,
  aux_sym_attributes_repeat1 = 57,
  aux_sym_attribute_id_repeat1 = 58,
  aux_sym_lident_list_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
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
  [anon_sym_external] = "external",
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_uident] = "uident",
  [sym_comment] = "comment",
  [sym_implementation] = "implementation",
  [sym_structure_item_region] = "structure_item_region",
  [sym_open_description] = "open_description",
  [sym_module_long_ident] = "module_long_ident",
  [sym_let_bindings] = "let_bindings",
  [sym_let_binding_body] = "let_binding_body",
  [sym_type_definition_or_extension] = "type_definition_or_extension",
  [sym_external_def] = "external_def",
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
  [sym_string] = "string",
  [aux_sym_implementation_repeat1] = "implementation_repeat1",
  [aux_sym_module_long_ident_repeat1] = "module_long_ident_repeat1",
  [aux_sym_let_bindings_repeat1] = "let_bindings_repeat1",
  [aux_sym_type_params_repeat1] = "type_params_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_id_repeat1] = "attribute_id_repeat1",
  [aux_sym_lident_list_repeat1] = "lident_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [anon_sym_external] = anon_sym_external,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_uident] = sym_uident,
  [sym_comment] = sym_comment,
  [sym_implementation] = sym_implementation,
  [sym_structure_item_region] = sym_structure_item_region,
  [sym_open_description] = sym_open_description,
  [sym_module_long_ident] = sym_module_long_ident,
  [sym_let_bindings] = sym_let_bindings,
  [sym_let_binding_body] = sym_let_binding_body,
  [sym_type_definition_or_extension] = sym_type_definition_or_extension,
  [sym_external_def] = sym_external_def,
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
  [sym_string] = sym_string,
  [aux_sym_implementation_repeat1] = aux_sym_implementation_repeat1,
  [aux_sym_module_long_ident_repeat1] = aux_sym_module_long_ident_repeat1,
  [aux_sym_let_bindings_repeat1] = aux_sym_let_bindings_repeat1,
  [aux_sym_type_params_repeat1] = aux_sym_type_params_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_id_repeat1] = aux_sym_attribute_id_repeat1,
  [aux_sym_lident_list_repeat1] = aux_sym_lident_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_external] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
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
  [sym_external_def] = {
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
  [sym_string] = {
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
  [aux_sym_string_repeat1] = {
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
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '(' ||
          lookahead == '<') ADVANCE(70);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_nonrec);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_nonrec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_type_params_token1);
      if (lookahead == '\f') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_type_params_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_type_params_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'y') ADVANCE(88);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
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
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 49},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 68},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
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
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
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
    [anon_sym_external] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_uident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_implementation] = STATE(118),
    [sym_structure_item_region] = STATE(58),
    [sym_open_description] = STATE(59),
    [sym_let_bindings] = STATE(59),
    [sym_type_definition_or_extension] = STATE(59),
    [sym_external_def] = STATE(59),
    [sym_attributes] = STATE(16),
    [sym_attribute] = STATE(19),
    [aux_sym_attributes_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_external] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_attributes,
    STATE(47), 1,
      sym_structure_item_region,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [41] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_attributes,
    STATE(52), 1,
      sym_structure_item_region,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [79] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_attributes,
    STATE(52), 1,
      sym_structure_item_region,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [117] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_attributes,
    STATE(52), 1,
      sym_structure_item_region,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_attributes,
    STATE(52), 1,
      sym_structure_item_region,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [193] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    ACTIONS(15), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym_attributes,
    STATE(52), 1,
      sym_structure_item_region,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [228] = 8,
    ACTIONS(33), 1,
      anon_sym_and,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_let_bindings_repeat1,
    STATE(113), 1,
      sym_attributes,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [256] = 8,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_and,
    ACTIONS(46), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_let_bindings_repeat1,
    STATE(113), 1,
      sym_attributes,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [284] = 8,
    ACTIONS(33), 1,
      anon_sym_and,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_let_bindings_repeat1,
    STATE(113), 1,
      sym_attributes,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [312] = 8,
    ACTIONS(33), 1,
      anon_sym_and,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_let_bindings_repeat1,
    STATE(113), 1,
      sym_attributes,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [340] = 8,
    ACTIONS(33), 1,
      anon_sym_and,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_let_bindings_repeat1,
    STATE(113), 1,
      sym_attributes,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(57), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
      anon_sym_LPAREN,
  [387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(62), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
      anon_sym_LPAREN,
  [406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(66), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
      anon_sym_LPAREN,
  [425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_open,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_external,
    STATE(54), 4,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
  [447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_payload,
    ACTIONS(68), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 8,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
      anon_sym_LPAREN,
  [479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AT,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(72), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
  [497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_AT,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(74), 5,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
  [515] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [541] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [559] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [573] = 3,
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
  [587] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(97), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [613] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [631] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(110), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [669] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(118), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [695] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_AT,
  [721] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_lident,
    ACTIONS(136), 1,
      sym_uident,
    STATE(51), 1,
      sym_value_path,
    ACTIONS(132), 2,
      anon_sym_rec,
      anon_sym_nonrec,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_when,
      anon_sym_if,
      anon_sym_RPAREN,
  [767] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [780] = 6,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_implementation_repeat1,
  [799] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [811] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_implementation_repeat1,
  [827] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      aux_sym_type_params_token1,
    STATE(50), 1,
      sym_type_equation_and_representation,
    STATE(89), 1,
      sym_type_params,
  [843] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_implementation_repeat1,
  [859] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [871] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(174), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [883] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_implementation_repeat1,
  [899] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_rec,
    ACTIONS(188), 1,
      sym_lident,
    STATE(8), 1,
      sym_let_binding_body,
    STATE(87), 1,
      sym_pattern,
  [927] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [939] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      aux_sym_type_params_token1,
    STATE(48), 1,
      sym_type_equation_and_representation,
    STATE(83), 1,
      sym_type_params,
  [955] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [967] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(196), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [979] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(200), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [991] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(204), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1003] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(208), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1015] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(212), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1027] = 5,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_LF,
    STATE(44), 1,
      aux_sym_implementation_repeat1,
  [1043] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      sym_lident,
    STATE(78), 1,
      aux_sym_lident_list_repeat1,
    STATE(115), 1,
      sym_lident_list,
  [1071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_GT,
    STATE(68), 1,
      aux_sym_type_params_repeat1,
  [1084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_GT,
    STATE(61), 1,
      aux_sym_type_params_repeat1,
  [1097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_BANG,
    ACTIONS(238), 1,
      sym_uident,
    STATE(57), 1,
      sym_module_long_ident,
  [1110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_lident,
    STATE(32), 1,
      sym_let_binding_body,
    STATE(87), 1,
      sym_pattern,
  [1123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_uident,
    ACTIONS(242), 1,
      sym_lident,
    STATE(43), 1,
      sym_value_path,
  [1136] = 4,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1149] = 4,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(68), 1,
      aux_sym_type_params_repeat1,
  [1175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_type_param,
  [1188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      anon_sym_GT,
    STATE(62), 1,
      sym_type_param,
  [1201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_lident,
    STATE(24), 1,
      sym_let_binding_body,
    STATE(87), 1,
      sym_pattern,
  [1214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_type,
    ACTIONS(266), 1,
      sym_lident,
    STATE(124), 1,
      sym_poly_type_expr,
  [1227] = 4,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_string_token1,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_attribute_id,
    ACTIONS(272), 2,
      sym_lident,
      sym_uident,
  [1251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_type_param,
  [1264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_lident,
    STATE(11), 1,
      sym_let_binding_body,
    STATE(87), 1,
      sym_pattern,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      sym_lident,
    STATE(77), 1,
      aux_sym_lident_list_repeat1,
  [1290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      sym_lident,
    STATE(77), 1,
      aux_sym_lident_list_repeat1,
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 2,
      anon_sym_when,
      anon_sym_if,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(99), 1,
      sym_ident,
    ACTIONS(285), 2,
      sym_lident,
      sym_uident,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_lident,
    STATE(108), 1,
      sym_typ_expr,
  [1335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_type_param,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(50), 1,
      sym_type_equation_and_representation,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      sym_lident,
      sym_uident,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(85), 1,
      aux_sym_module_long_ident_repeat1,
  [1373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_lident,
    STATE(34), 1,
      sym_expr,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(300), 1,
      anon_sym_EQ,
  [1393] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      aux_sym_type_params_token1,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_type_equation_and_representation,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_string,
  [1423] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(310), 1,
      aux_sym_type_params_token1,
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(85), 1,
      aux_sym_module_long_ident_repeat1,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_lident,
    ACTIONS(316), 1,
      sym_uident,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_uident,
    ACTIONS(318), 1,
      sym_lident,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_lident,
    STATE(109), 1,
      sym_typ_expr,
  [1473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_lident,
    STATE(25), 1,
      sym_expr,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_lident,
    STATE(21), 1,
      sym_expr,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_lident,
    STATE(111), 1,
      sym_typ_expr,
  [1519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_module_long_ident_repeat1,
  [1529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_uident,
    STATE(53), 1,
      sym_module_long_ident,
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_lident,
    STATE(79), 1,
      sym_pattern,
  [1549] = 3,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_EQ,
    ACTIONS(328), 1,
      aux_sym_type_params_token1,
  [1559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_lident,
    STATE(116), 1,
      sym_expr,
  [1569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_lident,
    STATE(29), 1,
      sym_expr,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_EQ,
  [1594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_EQ,
  [1601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_EQ,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ,
  [1615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_EQ,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_and,
  [1629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_uident,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_DOT,
  [1643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_EQ,
  [1671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_EQ,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_EQ,
  [1685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_lident,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_lident,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_EQ,
  [1706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_EQ,
  [1713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DOT,
  [1720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_type_params_token2,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_uident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 368,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 425,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 465,
  [SMALL_STATE(19)] = 479,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 515,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 541,
  [SMALL_STATE(24)] = 559,
  [SMALL_STATE(25)] = 573,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 601,
  [SMALL_STATE(28)] = 613,
  [SMALL_STATE(29)] = 631,
  [SMALL_STATE(30)] = 645,
  [SMALL_STATE(31)] = 657,
  [SMALL_STATE(32)] = 669,
  [SMALL_STATE(33)] = 683,
  [SMALL_STATE(34)] = 695,
  [SMALL_STATE(35)] = 709,
  [SMALL_STATE(36)] = 721,
  [SMALL_STATE(37)] = 739,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 767,
  [SMALL_STATE(40)] = 780,
  [SMALL_STATE(41)] = 799,
  [SMALL_STATE(42)] = 811,
  [SMALL_STATE(43)] = 827,
  [SMALL_STATE(44)] = 843,
  [SMALL_STATE(45)] = 859,
  [SMALL_STATE(46)] = 871,
  [SMALL_STATE(47)] = 883,
  [SMALL_STATE(48)] = 899,
  [SMALL_STATE(49)] = 911,
  [SMALL_STATE(50)] = 927,
  [SMALL_STATE(51)] = 939,
  [SMALL_STATE(52)] = 955,
  [SMALL_STATE(53)] = 967,
  [SMALL_STATE(54)] = 979,
  [SMALL_STATE(55)] = 991,
  [SMALL_STATE(56)] = 1003,
  [SMALL_STATE(57)] = 1015,
  [SMALL_STATE(58)] = 1027,
  [SMALL_STATE(59)] = 1043,
  [SMALL_STATE(60)] = 1055,
  [SMALL_STATE(61)] = 1071,
  [SMALL_STATE(62)] = 1084,
  [SMALL_STATE(63)] = 1097,
  [SMALL_STATE(64)] = 1110,
  [SMALL_STATE(65)] = 1123,
  [SMALL_STATE(66)] = 1136,
  [SMALL_STATE(67)] = 1149,
  [SMALL_STATE(68)] = 1162,
  [SMALL_STATE(69)] = 1175,
  [SMALL_STATE(70)] = 1188,
  [SMALL_STATE(71)] = 1201,
  [SMALL_STATE(72)] = 1214,
  [SMALL_STATE(73)] = 1227,
  [SMALL_STATE(74)] = 1240,
  [SMALL_STATE(75)] = 1251,
  [SMALL_STATE(76)] = 1264,
  [SMALL_STATE(77)] = 1277,
  [SMALL_STATE(78)] = 1290,
  [SMALL_STATE(79)] = 1303,
  [SMALL_STATE(80)] = 1314,
  [SMALL_STATE(81)] = 1325,
  [SMALL_STATE(82)] = 1335,
  [SMALL_STATE(83)] = 1345,
  [SMALL_STATE(84)] = 1355,
  [SMALL_STATE(85)] = 1363,
  [SMALL_STATE(86)] = 1373,
  [SMALL_STATE(87)] = 1383,
  [SMALL_STATE(88)] = 1393,
  [SMALL_STATE(89)] = 1403,
  [SMALL_STATE(90)] = 1413,
  [SMALL_STATE(91)] = 1423,
  [SMALL_STATE(92)] = 1433,
  [SMALL_STATE(93)] = 1443,
  [SMALL_STATE(94)] = 1453,
  [SMALL_STATE(95)] = 1463,
  [SMALL_STATE(96)] = 1473,
  [SMALL_STATE(97)] = 1483,
  [SMALL_STATE(98)] = 1493,
  [SMALL_STATE(99)] = 1501,
  [SMALL_STATE(100)] = 1509,
  [SMALL_STATE(101)] = 1519,
  [SMALL_STATE(102)] = 1529,
  [SMALL_STATE(103)] = 1539,
  [SMALL_STATE(104)] = 1549,
  [SMALL_STATE(105)] = 1559,
  [SMALL_STATE(106)] = 1569,
  [SMALL_STATE(107)] = 1579,
  [SMALL_STATE(108)] = 1587,
  [SMALL_STATE(109)] = 1594,
  [SMALL_STATE(110)] = 1601,
  [SMALL_STATE(111)] = 1608,
  [SMALL_STATE(112)] = 1615,
  [SMALL_STATE(113)] = 1622,
  [SMALL_STATE(114)] = 1629,
  [SMALL_STATE(115)] = 1636,
  [SMALL_STATE(116)] = 1643,
  [SMALL_STATE(117)] = 1650,
  [SMALL_STATE(118)] = 1657,
  [SMALL_STATE(119)] = 1664,
  [SMALL_STATE(120)] = 1671,
  [SMALL_STATE(121)] = 1678,
  [SMALL_STATE(122)] = 1685,
  [SMALL_STATE(123)] = 1692,
  [SMALL_STATE(124)] = 1699,
  [SMALL_STATE(125)] = 1706,
  [SMALL_STATE(126)] = 1713,
  [SMALL_STATE(127)] = 1720,
  [SMALL_STATE(128)] = 1727,
  [SMALL_STATE(129)] = 1734,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(71),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(84),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(74),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 8),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(114),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(7),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(7),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_equation_and_representation, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_equation_and_representation, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_def, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_def, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_params_repeat1, 2), SHIFT_REPEAT(82),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_params_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2), SHIFT_REPEAT(77),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lident_list, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(129),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ_expr, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poly_type_expr, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
