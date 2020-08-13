#include <Wyvern.h>

namespace Wyvern::FS {
    SourceFile::SourceFile(const std::string &Path) :
        Path(Path) {
        File = std::make_shared<std::ifstream>(Path);
    }

    std::shared_ptr<std::ifstream> SourceFile::getFile() const {
        return File;
    }

    SourceFile::~SourceFile() {
        File->close();
        FileClosed();
    }
} // namespace Wyvern::FS
