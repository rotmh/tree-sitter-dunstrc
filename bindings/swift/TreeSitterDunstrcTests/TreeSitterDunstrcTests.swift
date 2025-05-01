import XCTest
import SwiftTreeSitter
import TreeSitterDunstrc

final class TreeSitterDunstrcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dunstrc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dunstrc grammar")
    }
}
