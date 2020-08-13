#include <Wyvern.h>

namespace Wyvern::FS {
    SourceFile::SourceFile(const std::string &Path) :
        Path(Path) {
        File = std::make_shared<std::ifstream>(Path);
    }

    char SourceFile::getChar() const {
        char C = 0;
        if (File->is_open()) File->get(C);
        return C;
    }

    std::shared_ptr<std::ifstream> SourceFile::getFile() const {
        return File;
    }

    SourceFile::~SourceFile() {
        File->close();
        FileClosed();
    }
} // namespace Wyvern::FS
