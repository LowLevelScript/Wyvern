#ifndef WYVERN_FS_SOURCEFILE_H
#define WYVERN_FS_SOURCEFILE_H

#ifndef WYVERN_H
#error Please do not include this directly. Use the centralised header (Wyvern.h) instead!
#endif

namespace Wyvern::FS {

    class SourceFile {

    public:
        Utilities::Event<> FileClosed;

    private:
        std::string Path;
        std::shared_ptr<std::ifstream> File;

    public:
        explicit SourceFile(const std::string& Path);

        char getChar() const;

        std::shared_ptr<std::ifstream> getFile() const;

        ~SourceFile();
    };

} // namespace Wyvern::FS

#endif //WYVERN_FS_SOURCEFILE_H
