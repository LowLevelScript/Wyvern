#include <Wyvern.h>

int main() {
    std::string Path = "/mnt/c/Users/Quantumly/Documents/Development/Projects/LLS/Wyvern/samples/Simple/Test.lls";

    Wyvern::FS::SourceFile TestSourceFile = Wyvern::FS::SourceFile(Path);

    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());

    printf("\n");

    Wyvern::Lexer::Lexer TestLexer = Wyvern::Lexer::Lexer(Path);

    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());
    printf("%d\n", TestLexer.getTok());

    return 0;
}
