#include <Wyvern.h>

namespace Wyvern::Lexer {
    Lexer::Lexer(const std::string &Path) :
    Source(std::make_shared<Wyvern::FS::SourceFile>(Path)) { }

    int Lexer::getTok() {
        static int LastChar = ' ';

        // Skip any whitespace.
        while (isspace(LastChar))
            LastChar = Source->getChar();

        if (isalpha(LastChar)) { // identifier: [a-zA-Z][a-zA-Z0-9]*
            IdentifierStr = LastChar;
            while (isalnum((LastChar = Source->getChar())))
                IdentifierStr += LastChar;

            if (IdentifierStr == "function")
                return tok_function;
            if (IdentifierStr == "extern")
                return tok_extern;
            return tok_identifier;
        }

        if (isdigit(LastChar) || LastChar == '.') { // Number: [0-9.]+
            std::string NumStr;
            do {
                NumStr += LastChar;
                LastChar = Source->getChar();
            } while (isdigit(LastChar) || LastChar == '.');

            NumVal = strtod(NumStr.c_str(), nullptr);
            return tok_number;
        }

        if (LastChar == '#') {
            // Comment until end of line.
            do
                LastChar = Source->getChar();
            while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');

            if (LastChar != EOF)
                return getTok();
        }

        // Check for end of file.  Don't eat the EOF.
        if (LastChar == EOF)
            return tok_eof;

        // Otherwise, just return the character as its ascii value.
        int ThisChar = LastChar;
        LastChar = Source->getChar();
        return ThisChar;
    }

} // namespace Wyvern::Lexer
