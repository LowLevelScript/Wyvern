#ifndef WYVERN_LEXER_H
#define WYVERN_LEXER_H

#ifndef WYVERN_H
#error Please do not include this directly. Use the centralised header (Wyvern.h) instead!
#endif

namespace Wyvern::Lexer {

    class Lexer {
    private:
        std::string IdentifierStr;
        double NumVal;
        std::shared_ptr<Wyvern::FS::SourceFile> Source = nullptr;

    public:
        explicit Lexer(const std::string& Path);
        explicit Lexer(std::shared_ptr<Wyvern::FS::SourceFile> SourceFile);

        int getTok();
    };

} // namespace Wyvern::Lexer

#endif //WYVERN_LEXER_H
