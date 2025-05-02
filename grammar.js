/**
 * @file Dunstrc grammar for tree-sitter
 * @author Rotem Horesh
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dunstrc",

  extras: ($) => [$.whitespace],

  // based on: https://github.com/dunst-project/dunst/blob/d0f89761/src/ini.c
  rules: {
    config: ($) =>
      seq(
        repeat($.empty),
        repeat(seq($.entry, $.separator)),
        optional($.entry),
      ),

    entry: ($) => seq(choice($.section, $.assign)),

    section: ($) => seq("[", $.name, "]"),
    name: () => /[^\]\n\r]*/,

    assign: ($) => seq($.key, "=", $.value),

    // the key may contain everything (obviously except comment tokens).
    key: () => /[^\[#;=\s\n\r][^;#=\n\r]*/,

    // dunst provides quotations as a way to use comment tokens inside the
    // value, but it does not make the value end at the closing quote.
    value: ($) => seq(/[^;#\r\n"]*/, optional($.quoted), /[^;#\r\n]*/),
    quoted: () => seq('"', /[^"]*/, '"'),

    separator: ($) => seq(optional($.comment), $.newline, repeat($.empty)),

    empty: ($) => seq(optional($.comment), $.newline, optional($.whitespace)),

    newline: () => /\r?\n/,
    whitespace: () => /[ \t]+/,
    comment: () => /(#|;).*/,
  },
});
