#include <Wyvern.h>

int main() {
    Wyvern::FS::SourceFile Test = Wyvern::FS::SourceFile("C:\\Users\\Quantumly\\Documents\\Development\\Projects\\LLS\\Wyvern\\samples\\Simple\\Test.lls");

    printf("%c", Test.getChar());
    printf("%c", Test.getChar());
    printf("%c", Test.getChar());
    printf("%c", Test.getChar());
    printf("%c", Test.getChar());

    return 0;
}
