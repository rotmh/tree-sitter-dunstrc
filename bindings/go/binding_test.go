package tree_sitter_dunstrc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dunstrc "github.com/rotmh/tree-sitter-dunstrc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dunstrc.Language())
	if language == nil {
		t.Errorf("Error loading Dunstrc grammar")
	}
}
