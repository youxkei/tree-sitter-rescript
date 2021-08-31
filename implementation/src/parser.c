#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 180
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_import = 14,
  anon_sym_LBRACE = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACE = 17,
  aux_sym_type_params_token1 = 18,
  aux_sym_type_params_token2 = 19,
  anon_sym_GT = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_AT = 22,
  anon_sym_LPAREN = 23,
  anon_sym_QMARK = 24,
  anon_sym_when = 25,
  anon_sym_if = 26,
  anon_sym_RPAREN = 27,
  sym_lident = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_token1 = 30,
  sym_uident = 31,
  sym_comment = 32,
  sym_implementation = 33,
  sym_structure_item_region = 34,
  sym_open_description = 35,
  sym_module_long_ident = 36,
  sym_let_bindings = 37,
  sym_let_binding_body = 38,
  sym_type_definition_or_extension = 39,
  sym_external_def = 40,
  sym_js_import = 41,
  sym_js_ffi_declarations = 42,
  sym_js_ffi_declaration = 43,
  sym_type_params = 44,
  sym_type_param = 45,
  sym_type_equation_and_representation = 46,
  sym_value_path = 47,
  sym_attributes = 48,
  sym_attribute = 49,
  sym_attribute_id = 50,
  sym_payload = 51,
  sym_pattern = 52,
  sym_typ_expr = 53,
  sym_poly_type_expr = 54,
  sym_expr = 55,
  sym_lident_list = 56,
  sym_ident = 57,
  sym_string = 58,
  aux_sym_implementation_repeat1 = 59,
  aux_sym_module_long_ident_repeat1 = 60,
  aux_sym_let_bindings_repeat1 = 61,
  aux_sym_js_ffi_declarations_repeat1 = 62,
  aux_sym_type_params_repeat1 = 63,
  aux_sym_attributes_repeat1 = 64,
  aux_sym_attribute_id_repeat1 = 65,
  aux_sym_lident_list_repeat1 = 66,
  aux_sym_string_repeat1 = 67,
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
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym_type_params_token1] = "type_params_token1",
  [aux_sym_type_params_token2] = "type_params_token2",
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
  [sym_js_import] = "js_import",
  [sym_js_ffi_declarations] = "js_ffi_declarations",
  [sym_js_ffi_declaration] = "js_ffi_declaration",
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
  [aux_sym_js_ffi_declarations_repeat1] = "js_ffi_declarations_repeat1",
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
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_type_params_token1] = aux_sym_type_params_token1,
  [aux_sym_type_params_token2] = aux_sym_type_params_token2,
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
  [sym_js_import] = sym_js_import,
  [sym_js_ffi_declarations] = sym_js_ffi_declarations,
  [sym_js_ffi_declaration] = sym_js_ffi_declaration,
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
  [aux_sym_js_ffi_declarations_repeat1] = aux_sym_js_ffi_declarations_repeat1,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_js_import] = {
    .visible = true,
    .named = true,
  },
  [sym_js_ffi_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_js_ffi_declaration] = {
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
  [aux_sym_js_ffi_declarations_repeat1] = {
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
      if (eof) ADVANCE(57);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == '(' ||
          lookahead == '<') ADVANCE(80);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_nonrec);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_nonrec);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_type_params_token1);
      if (lookahead == '\f') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_type_params_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_type_params_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_lident);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == 'y') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_lident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_uident);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
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
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 78},
  [58] = {.lex_state = 78},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 55},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 55},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 55},
  [67] = {.lex_state = 55},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 55},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 55},
  [77] = {.lex_state = 55},
  [78] = {.lex_state = 55},
  [79] = {.lex_state = 55},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 78},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 78},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 78},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
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
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_type_params_token2] = ACTIONS(1),
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
    [sym_implementation] = STATE(157),
    [sym_structure_item_region] = STATE(65),
    [sym_open_description] = STATE(70),
    [sym_let_bindings] = STATE(70),
    [sym_type_definition_or_extension] = STATE(70),
    [sym_external_def] = STATE(70),
    [sym_js_import] = STATE(70),
    [sym_attributes] = STATE(14),
    [sym_attribute] = STATE(20),
    [aux_sym_attributes_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_external] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_attributes,
    STATE(59), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [45] = 13,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_attributes,
    STATE(50), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [90] = 12,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [132] = 12,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [174] = 12,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [216] = 12,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [258] = 12,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [300] = 12,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [342] = 11,
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
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_AT,
    STATE(14), 1,
      sym_attributes,
    STATE(71), 1,
      sym_structure_item_region,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    STATE(70), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(39), 8,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_LPAREN,
  [401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(43), 8,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_LPAREN,
  [421] = 8,
    ACTIONS(49), 1,
      anon_sym_and,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_let_bindings_repeat1,
    STATE(174), 1,
      sym_attributes,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(47), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [449] = 7,
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
      anon_sym_import,
    STATE(60), 5,
      sym_open_description,
      sym_let_bindings,
      sym_type_definition_or_extension,
      sym_external_def,
      sym_js_import,
  [475] = 8,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_and,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(15), 1,
      aux_sym_let_bindings_repeat1,
    STATE(174), 1,
      sym_attributes,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [503] = 8,
    ACTIONS(49), 1,
      anon_sym_and,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_let_bindings_repeat1,
    STATE(174), 1,
      sym_attributes,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(47), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [531] = 8,
    ACTIONS(49), 1,
      anon_sym_and,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_let_bindings_repeat1,
    STATE(174), 1,
      sym_attributes,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(69), 8,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_LPAREN,
  [579] = 8,
    ACTIONS(49), 1,
      anon_sym_and,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_let_bindings_repeat1,
    STATE(174), 1,
      sym_attributes,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(76), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AT,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(78), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_payload,
    ACTIONS(80), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    STATE(22), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(84), 6,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 9,
      anon_sym_open,
      anon_sym_DOT,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_LPAREN,
  [679] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_AT,
    ACTIONS(93), 1,
      sym_lident,
    STATE(161), 1,
      sym_attributes,
    STATE(72), 2,
      sym_js_ffi_declarations,
      sym_js_ffi_declaration,
    STATE(75), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [703] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_lident,
    STATE(94), 1,
      sym_js_ffi_declaration,
    STATE(164), 1,
      sym_attributes,
    STATE(75), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      anon_sym_open,
      anon_sym_let,
      anon_sym_and,
      anon_sym_type,
      anon_sym_external,
      anon_sym_import,
      anon_sym_AT,
  [804] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(113), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [818] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [832] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [846] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(121), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [860] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(125), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [878] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [896] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(135), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [910] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_module_long_ident_repeat1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(139), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      sym_lident,
    STATE(131), 1,
      sym_js_ffi_declaration,
    STATE(164), 1,
      sym_attributes,
    STATE(75), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [948] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [962] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(150), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AT,
      anon_sym_RPAREN,
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_when,
      anon_sym_if,
      anon_sym_RPAREN,
  [987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_lident,
    ACTIONS(158), 1,
      sym_uident,
    STATE(57), 1,
      sym_value_path,
    ACTIONS(154), 2,
      anon_sym_rec,
      anon_sym_nonrec,
  [1004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(39), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_lident,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(43), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_lident,
  [1034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_attribute_id_repeat1,
    ACTIONS(69), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_lident,
  [1049] = 6,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_implementation_repeat1,
  [1068] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1081] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_implementation_repeat1,
  [1097] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(183), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1109] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(187), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_rec,
    ACTIONS(191), 1,
      sym_lident,
    STATE(19), 1,
      sym_let_binding_body,
    STATE(135), 1,
      sym_pattern,
  [1137] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(195), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1149] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_implementation_repeat1,
  [1165] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1177] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(209), 1,
      aux_sym_type_params_token1,
    STATE(64), 1,
      sym_type_equation_and_representation,
    STATE(140), 1,
      sym_type_params,
  [1193] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(209), 1,
      aux_sym_type_params_token1,
    STATE(77), 1,
      sym_type_equation_and_representation,
    STATE(144), 1,
      sym_type_params,
  [1209] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_implementation_repeat1,
  [1225] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(219), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1237] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_lident,
  [1259] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(227), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1271] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1283] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_LF,
    STATE(74), 1,
      aux_sym_implementation_repeat1,
  [1299] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(241), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1311] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(245), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_lident,
    ACTIONS(247), 1,
      anon_sym_AT,
    STATE(68), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_payload,
    ACTIONS(80), 2,
      anon_sym_AT,
      sym_lident,
  [1351] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1363] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1375] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(258), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      sym_lident,
    STATE(96), 1,
      aux_sym_lident_list_repeat1,
    STATE(168), 1,
      sym_lident_list,
  [1403] = 5,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      anon_sym_LF,
    STATE(48), 1,
      aux_sym_implementation_repeat1,
  [1419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_lident,
    ACTIONS(91), 1,
      anon_sym_AT,
    STATE(68), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1433] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1445] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(274), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1457] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(278), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1469] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(282), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1481] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_implementation_repeat1,
  [1497] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(292), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1509] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(296), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1521] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      aux_sym_string_token1,
    STATE(87), 1,
      aux_sym_string_repeat1,
  [1534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_lident,
    STATE(16), 1,
      sym_let_binding_body,
    STATE(135), 1,
      sym_pattern,
  [1547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_js_ffi_declarations_repeat1,
  [1560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_type_param,
  [1573] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_string_token1,
    STATE(87), 1,
      aux_sym_string_repeat1,
  [1586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_BANG,
    ACTIONS(319), 1,
      sym_uident,
    STATE(76), 1,
      sym_module_long_ident,
  [1599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_GT,
    STATE(89), 1,
      aux_sym_type_params_repeat1,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      anon_sym_GT,
    STATE(129), 1,
      sym_type_param,
  [1634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_lident,
    STATE(42), 1,
      sym_let_binding_body,
    STATE(135), 1,
      sym_pattern,
  [1647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_uident,
    ACTIONS(328), 1,
      sym_lident,
    STATE(58), 1,
      sym_value_path,
  [1660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_js_ffi_declarations_repeat1,
  [1673] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_string_token1,
    STATE(83), 1,
      aux_sym_string_repeat1,
  [1686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      sym_lident,
    STATE(103), 1,
      aux_sym_lident_list_repeat1,
  [1699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_GT,
    STATE(89), 1,
      aux_sym_type_params_repeat1,
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      sym_attribute_id,
    ACTIONS(344), 2,
      sym_lident,
      sym_uident,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_GT,
    STATE(129), 1,
      sym_type_param,
  [1736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute_id,
    ACTIONS(346), 2,
      sym_lident,
      sym_uident,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_ident,
    ACTIONS(348), 2,
      sym_lident,
      sym_uident,
  [1758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_GT,
    STATE(97), 1,
      aux_sym_type_params_repeat1,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      sym_lident,
    STATE(103), 1,
      aux_sym_lident_list_repeat1,
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 2,
      anon_sym_when,
      anon_sym_if,
  [1795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_type,
    ACTIONS(363), 1,
      sym_lident,
    STATE(155), 1,
      sym_poly_type_expr,
  [1808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_js_ffi_declarations_repeat1,
  [1821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_lident,
    STATE(34), 1,
      sym_let_binding_body,
    STATE(135), 1,
      sym_pattern,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 2,
      anon_sym_when,
      anon_sym_if,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_module_long_ident_repeat1,
  [1855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_AT,
      sym_lident,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_lident,
    STATE(175), 1,
      sym_expr,
  [1873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_lident,
    STATE(104), 1,
      sym_pattern,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_lident,
    STATE(152), 1,
      sym_typ_expr,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_lident,
    STATE(38), 1,
      sym_expr,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_string,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_lident,
    ACTIONS(388), 1,
      sym_uident,
  [1939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_module_long_ident_repeat1,
  [1949] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      aux_sym_type_params_token1,
  [1959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_lident,
    STATE(33), 1,
      sym_expr,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      sym_lident,
      sym_uident,
  [1977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_lident,
    STATE(160), 1,
      sym_expr,
  [1987] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(400), 1,
      aux_sym_type_params_token1,
  [1997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_lident,
    STATE(178), 1,
      sym_typ_expr,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_lident,
    STATE(32), 1,
      sym_expr,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_lident,
    STATE(147), 1,
      sym_poly_type_expr,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_AT,
      sym_lident,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_AT,
      sym_lident,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_lident,
    STATE(108), 1,
      sym_pattern,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_lident,
    STATE(54), 1,
      sym_poly_type_expr,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_AT,
      sym_lident,
  [2087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(408), 1,
      anon_sym_EQ,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_lident,
    STATE(41), 1,
      sym_expr,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_AT,
      sym_lident,
  [2123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      sym_type_param,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_EQ,
    STATE(77), 1,
      sym_type_equation_and_representation,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_uident,
    ACTIONS(412), 1,
      sym_lident,
  [2153] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      aux_sym_type_params_token1,
  [2163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_uident,
    STATE(52), 1,
      sym_module_long_ident,
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_EQ,
    STATE(61), 1,
      sym_type_equation_and_representation,
  [2183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_lident,
    STATE(136), 1,
      sym_poly_type_expr,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      sym_lident,
      sym_uident,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_lident,
    STATE(81), 1,
      sym_poly_type_expr,
  [2219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_AT,
      sym_lident,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_lident,
    STATE(159), 1,
      sym_typ_expr,
  [2237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_module_long_ident_repeat1,
  [2247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_EQ,
  [2254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COLON,
  [2261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COLON,
  [2268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_EQ,
  [2275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [2282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [2289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_EQ,
  [2303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [2310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_lident,
  [2317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_uident,
  [2324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_EQ,
  [2331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_lident,
  [2338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DOT,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_DOT,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_lident,
  [2373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_EQ,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_lident,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_uident,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_and,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COLON,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym_type_params_token2,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 381,
  [SMALL_STATE(12)] = 401,
  [SMALL_STATE(13)] = 421,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 475,
  [SMALL_STATE(16)] = 503,
  [SMALL_STATE(17)] = 531,
  [SMALL_STATE(18)] = 559,
  [SMALL_STATE(19)] = 579,
  [SMALL_STATE(20)] = 607,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 645,
  [SMALL_STATE(23)] = 664,
  [SMALL_STATE(24)] = 679,
  [SMALL_STATE(25)] = 703,
  [SMALL_STATE(26)] = 726,
  [SMALL_STATE(27)] = 739,
  [SMALL_STATE(28)] = 752,
  [SMALL_STATE(29)] = 765,
  [SMALL_STATE(30)] = 778,
  [SMALL_STATE(31)] = 791,
  [SMALL_STATE(32)] = 804,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 832,
  [SMALL_STATE(35)] = 846,
  [SMALL_STATE(36)] = 860,
  [SMALL_STATE(37)] = 878,
  [SMALL_STATE(38)] = 896,
  [SMALL_STATE(39)] = 910,
  [SMALL_STATE(40)] = 928,
  [SMALL_STATE(41)] = 948,
  [SMALL_STATE(42)] = 962,
  [SMALL_STATE(43)] = 976,
  [SMALL_STATE(44)] = 987,
  [SMALL_STATE(45)] = 1004,
  [SMALL_STATE(46)] = 1019,
  [SMALL_STATE(47)] = 1034,
  [SMALL_STATE(48)] = 1049,
  [SMALL_STATE(49)] = 1068,
  [SMALL_STATE(50)] = 1081,
  [SMALL_STATE(51)] = 1097,
  [SMALL_STATE(52)] = 1109,
  [SMALL_STATE(53)] = 1121,
  [SMALL_STATE(54)] = 1137,
  [SMALL_STATE(55)] = 1149,
  [SMALL_STATE(56)] = 1165,
  [SMALL_STATE(57)] = 1177,
  [SMALL_STATE(58)] = 1193,
  [SMALL_STATE(59)] = 1209,
  [SMALL_STATE(60)] = 1225,
  [SMALL_STATE(61)] = 1237,
  [SMALL_STATE(62)] = 1249,
  [SMALL_STATE(63)] = 1259,
  [SMALL_STATE(64)] = 1271,
  [SMALL_STATE(65)] = 1283,
  [SMALL_STATE(66)] = 1299,
  [SMALL_STATE(67)] = 1311,
  [SMALL_STATE(68)] = 1323,
  [SMALL_STATE(69)] = 1337,
  [SMALL_STATE(70)] = 1351,
  [SMALL_STATE(71)] = 1363,
  [SMALL_STATE(72)] = 1375,
  [SMALL_STATE(73)] = 1387,
  [SMALL_STATE(74)] = 1403,
  [SMALL_STATE(75)] = 1419,
  [SMALL_STATE(76)] = 1433,
  [SMALL_STATE(77)] = 1445,
  [SMALL_STATE(78)] = 1457,
  [SMALL_STATE(79)] = 1469,
  [SMALL_STATE(80)] = 1481,
  [SMALL_STATE(81)] = 1497,
  [SMALL_STATE(82)] = 1509,
  [SMALL_STATE(83)] = 1521,
  [SMALL_STATE(84)] = 1534,
  [SMALL_STATE(85)] = 1547,
  [SMALL_STATE(86)] = 1560,
  [SMALL_STATE(87)] = 1573,
  [SMALL_STATE(88)] = 1586,
  [SMALL_STATE(89)] = 1599,
  [SMALL_STATE(90)] = 1612,
  [SMALL_STATE(91)] = 1621,
  [SMALL_STATE(92)] = 1634,
  [SMALL_STATE(93)] = 1647,
  [SMALL_STATE(94)] = 1660,
  [SMALL_STATE(95)] = 1673,
  [SMALL_STATE(96)] = 1686,
  [SMALL_STATE(97)] = 1699,
  [SMALL_STATE(98)] = 1712,
  [SMALL_STATE(99)] = 1723,
  [SMALL_STATE(100)] = 1736,
  [SMALL_STATE(101)] = 1747,
  [SMALL_STATE(102)] = 1758,
  [SMALL_STATE(103)] = 1771,
  [SMALL_STATE(104)] = 1784,
  [SMALL_STATE(105)] = 1795,
  [SMALL_STATE(106)] = 1808,
  [SMALL_STATE(107)] = 1821,
  [SMALL_STATE(108)] = 1834,
  [SMALL_STATE(109)] = 1845,
  [SMALL_STATE(110)] = 1855,
  [SMALL_STATE(111)] = 1863,
  [SMALL_STATE(112)] = 1873,
  [SMALL_STATE(113)] = 1883,
  [SMALL_STATE(114)] = 1893,
  [SMALL_STATE(115)] = 1903,
  [SMALL_STATE(116)] = 1913,
  [SMALL_STATE(117)] = 1921,
  [SMALL_STATE(118)] = 1929,
  [SMALL_STATE(119)] = 1939,
  [SMALL_STATE(120)] = 1949,
  [SMALL_STATE(121)] = 1959,
  [SMALL_STATE(122)] = 1969,
  [SMALL_STATE(123)] = 1977,
  [SMALL_STATE(124)] = 1987,
  [SMALL_STATE(125)] = 1997,
  [SMALL_STATE(126)] = 2007,
  [SMALL_STATE(127)] = 2017,
  [SMALL_STATE(128)] = 2027,
  [SMALL_STATE(129)] = 2035,
  [SMALL_STATE(130)] = 2043,
  [SMALL_STATE(131)] = 2051,
  [SMALL_STATE(132)] = 2059,
  [SMALL_STATE(133)] = 2069,
  [SMALL_STATE(134)] = 2079,
  [SMALL_STATE(135)] = 2087,
  [SMALL_STATE(136)] = 2097,
  [SMALL_STATE(137)] = 2105,
  [SMALL_STATE(138)] = 2115,
  [SMALL_STATE(139)] = 2123,
  [SMALL_STATE(140)] = 2133,
  [SMALL_STATE(141)] = 2143,
  [SMALL_STATE(142)] = 2153,
  [SMALL_STATE(143)] = 2163,
  [SMALL_STATE(144)] = 2173,
  [SMALL_STATE(145)] = 2183,
  [SMALL_STATE(146)] = 2193,
  [SMALL_STATE(147)] = 2201,
  [SMALL_STATE(148)] = 2209,
  [SMALL_STATE(149)] = 2219,
  [SMALL_STATE(150)] = 2227,
  [SMALL_STATE(151)] = 2237,
  [SMALL_STATE(152)] = 2247,
  [SMALL_STATE(153)] = 2254,
  [SMALL_STATE(154)] = 2261,
  [SMALL_STATE(155)] = 2268,
  [SMALL_STATE(156)] = 2275,
  [SMALL_STATE(157)] = 2282,
  [SMALL_STATE(158)] = 2289,
  [SMALL_STATE(159)] = 2296,
  [SMALL_STATE(160)] = 2303,
  [SMALL_STATE(161)] = 2310,
  [SMALL_STATE(162)] = 2317,
  [SMALL_STATE(163)] = 2324,
  [SMALL_STATE(164)] = 2331,
  [SMALL_STATE(165)] = 2338,
  [SMALL_STATE(166)] = 2345,
  [SMALL_STATE(167)] = 2352,
  [SMALL_STATE(168)] = 2359,
  [SMALL_STATE(169)] = 2366,
  [SMALL_STATE(170)] = 2373,
  [SMALL_STATE(171)] = 2380,
  [SMALL_STATE(172)] = 2387,
  [SMALL_STATE(173)] = 2394,
  [SMALL_STATE(174)] = 2401,
  [SMALL_STATE(175)] = 2408,
  [SMALL_STATE(176)] = 2415,
  [SMALL_STATE(177)] = 2422,
  [SMALL_STATE(178)] = 2429,
  [SMALL_STATE(179)] = 2436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_id, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(107),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 2), SHIFT_REPEAT(100),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(146),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bindings, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_bindings, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(100),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 7),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_long_ident, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_long_ident, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(173),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 8),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_bindings_repeat1, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_id_repeat1, 2), SHIFT_REPEAT(122),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(10),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implementation_repeat1, 2), SHIFT_REPEAT(10),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implementation_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_equation_and_representation, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_equation_and_representation, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_ffi_declaration, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_ffi_declaration, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_ffi_declarations, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_ffi_declarations, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poly_type_expr, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poly_type_expr, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_ffi_declarations, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_ffi_declarations, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_def, 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_def, 6),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(98),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item_region, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item_region, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_description, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_description, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_or_extension, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_or_extension, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_ffi_declaration, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_ffi_declaration, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_ffi_declarations, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_ffi_declarations, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(87),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_params_repeat1, 2), SHIFT_REPEAT(139),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_params_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lident_list, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lident_list_repeat1, 2), SHIFT_REPEAT(103),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_js_ffi_declarations_repeat1, 2), SHIFT_REPEAT(40),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_js_ffi_declarations_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_long_ident_repeat1, 2), SHIFT_REPEAT(162),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ_expr, 1),
  [433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
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
