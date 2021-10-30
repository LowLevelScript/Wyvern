#include <Wyvern.h>

int main() {
    std::string Path = "/home/quantumlyy/Documents/Development/LowLevelScript/Wyvern/samples/Simple/Test.lls";

    std::shared_ptr<Wyvern::FS::SourceFile> TestSourceFile = std::make_shared<Wyvern::FS::SourceFile>(Path);

    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());
    printf("%c", TestSourceFile->getChar());

    printf("\n");

    Wyvern::Lexer::Lexer TestLexer = Wyvern::Lexer::Lexer(TestSourceFile);

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
