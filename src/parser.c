/* Automatically generated by tree-sitter v0.25.1 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 1
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  aux_sym_section_token1 = 3,
  sym_name = 4,
  anon_sym_EQ = 5,
  sym_key = 6,
  sym_value = 7,
  sym_newline = 8,
  sym_whitespace = 9,
  sym_comment = 10,
  sym_config = 11,
  sym_entry = 12,
  sym_section = 13,
  sym_assign = 14,
  sym_separator = 15,
  sym_empty = 16,
  aux_sym_config_repeat1 = 17,
  aux_sym_config_repeat2 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_section_token1] = "comment",
  [sym_name] = "name",
  [anon_sym_EQ] = "=",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_newline] = "newline",
  [sym_whitespace] = "whitespace",
  [sym_comment] = "comment",
  [sym_config] = "config",
  [sym_entry] = "entry",
  [sym_section] = "section",
  [sym_assign] = "assign",
  [sym_separator] = "separator",
  [sym_empty] = "empty",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_config_repeat2] = "config_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_section_token1] = sym_comment,
  [sym_name] = sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_newline] = sym_newline,
  [sym_whitespace] = sym_whitespace,
  [sym_comment] = sym_comment,
  [sym_config] = sym_config,
  [sym_entry] = sym_entry,
  [sym_section] = sym_section,
  [sym_assign] = sym_assign,
  [sym_separator] = sym_separator,
  [sym_empty] = sym_empty,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_config_repeat2] = aux_sym_config_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_section_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_empty] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_config_repeat2] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 16,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 29,
  [35] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '\n', 22,
        '\r', 1,
        '=', 15,
        '[', 6,
        ']', 8,
        '\t', 23,
        ' ', 23,
        '#', 24,
        ';', 24,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_section_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_section_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_section_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_section_token1);
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_value);
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(24);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_config] = STATE(30),
    [sym_entry] = STATE(15),
    [sym_section] = STATE(22),
    [sym_assign] = STATE(22),
    [sym_empty] = STATE(2),
    [aux_sym_config_repeat1] = STATE(2),
    [aux_sym_config_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_key] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym_whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(13),
  },
  [STATE(2)] = {
    [sym_entry] = STATE(17),
    [sym_section] = STATE(22),
    [sym_assign] = STATE(22),
    [sym_empty] = STATE(6),
    [aux_sym_config_repeat1] = STATE(6),
    [aux_sym_config_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_key] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
    [sym_whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_key,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_config_repeat2,
    STATE(17), 1,
      sym_entry,
    STATE(22), 2,
      sym_section,
      sym_assign,
  [23] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      sym_comment,
    STATE(9), 2,
      sym_empty,
      aux_sym_config_repeat1,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
  [42] = 7,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_key,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_config_repeat2,
    STATE(18), 1,
      sym_entry,
    STATE(22), 2,
      sym_section,
      sym_assign,
  [65] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(23), 1,
      sym_newline,
    ACTIONS(26), 1,
      sym_comment,
    STATE(6), 2,
      sym_empty,
      aux_sym_config_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
  [84] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      sym_comment,
    STATE(10), 2,
      sym_empty,
      aux_sym_config_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
  [103] = 7,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      sym_key,
    STATE(8), 1,
      aux_sym_config_repeat2,
    STATE(20), 1,
      sym_entry,
    STATE(22), 2,
      sym_section,
      sym_assign,
  [126] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      sym_comment,
    STATE(6), 2,
      sym_empty,
      aux_sym_config_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
  [145] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      sym_comment,
    STATE(6), 2,
      sym_empty,
      aux_sym_config_repeat1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
  [164] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
      sym_newline,
      sym_comment,
  [175] = 2,
    ACTIONS(45), 1,
      sym_whitespace,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
      sym_newline,
      sym_comment,
  [186] = 2,
    ACTIONS(47), 1,
      sym_whitespace,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
      sym_newline,
      sym_comment,
  [197] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
      sym_newline,
      sym_comment,
  [208] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_newline,
    ACTIONS(53), 1,
      sym_comment,
    STATE(26), 1,
      sym_separator,
  [224] = 3,
    ACTIONS(57), 1,
      sym_value,
    ACTIONS(59), 1,
      sym_whitespace,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      sym_newline,
      sym_comment,
  [236] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_newline,
    ACTIONS(53), 1,
      sym_comment,
    STATE(26), 1,
      sym_separator,
  [252] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(51), 1,
      sym_newline,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_separator,
  [268] = 4,
    ACTIONS(59), 1,
      sym_whitespace,
    ACTIONS(65), 1,
      aux_sym_section_token1,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_newline,
  [282] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(51), 1,
      sym_newline,
    ACTIONS(53), 1,
      sym_comment,
    STATE(26), 1,
      sym_separator,
  [295] = 4,
    ACTIONS(59), 1,
      sym_whitespace,
    ACTIONS(63), 1,
      sym_newline,
    ACTIONS(65), 1,
      aux_sym_section_token1,
    ACTIONS(67), 1,
      sym_comment,
  [308] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      sym_newline,
      sym_comment,
  [317] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_newline,
      sym_comment,
  [326] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_newline,
      sym_comment,
  [335] = 3,
    ACTIONS(57), 1,
      sym_value,
    ACTIONS(59), 1,
      sym_whitespace,
    ACTIONS(55), 2,
      sym_newline,
      sym_comment,
  [346] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_key,
  [355] = 2,
    ACTIONS(59), 1,
      sym_whitespace,
    ACTIONS(75), 1,
      sym_name,
  [362] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [369] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
  [376] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [383] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(83), 1,
      sym_newline,
  [390] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(85), 1,
      sym_newline,
  [397] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(87), 1,
      anon_sym_EQ,
  [404] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
  [411] = 2,
    ACTIONS(59), 1,
      sym_whitespace,
    ACTIONS(91), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 197,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 252,
  [SMALL_STATE(19)] = 268,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 295,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 317,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 335,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 355,
  [SMALL_STATE(28)] = 362,
  [SMALL_STATE(29)] = 369,
  [SMALL_STATE(30)] = 376,
  [SMALL_STATE(31)] = 383,
  [SMALL_STATE(32)] = 390,
  [SMALL_STATE(33)] = 397,
  [SMALL_STATE(34)] = 404,
  [SMALL_STATE(35)] = 411,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat2, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat2, 2, 0, 0), SHIFT_REPEAT(35),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dunstrc(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
