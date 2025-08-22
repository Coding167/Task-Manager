#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <vector>

class File {
    private:
        std::string path;
    public:
        File(): path("") {}
        File(const std::string& filePath);

        void setPath(const std::string& filePath);

        std::vector<std::string> read() const;

        void addLine(const std::string& line);
        void deleteLine(int lineNumber);
        void replaceLine(int lineNumber, const std::string& newLine);
};

#endif // FILE_H