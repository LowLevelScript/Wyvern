#include <Wyvern.h>

int main() {
    Wyvern::FS::SourceFile TestSourceFile = Wyvern::FS::SourceFile("C:\\Users\\Quantumly\\Documents\\Development\\Projects\\LLS\\Wyvern\\samples\\Simple\\Test.lls");

    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());
    printf("%c", TestSourceFile.getChar());

    Wyvern::Lexer::Lexer TestLexer = Wyvern::Lexer::Lexer("C:\\Users\\Quantumly\\Documents\\Development\\Projects\\LLS\\Wyvern\\samples\\Simple\\Test.lls");

    printf("%d", TestLexer.getTok());
    printf("%d", TestLexer.getTok());

    return 0;
}
