#ifndef WYVERN_LEXER_TOKEN_H
#define WYVERN_LEXER_TOKEN_H

#ifndef WYVERN_H
#error Please do not include this directly. Use the centralised header (Wyvern.h) instead!
#endif

namespace Wyvern::Lexer {

    enum Token {
        tok_eof = -1,

        // commands
        tok_function = -2,
        tok_extern = -3,

        // primary
        tok_identifier = -4,
        tok_number = -5,
    };

} // namespace Wyvern::Lexer

#endif //WYVERN_LEXER_TOKEN_H
