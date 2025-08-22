#include "../headers/file.h"
#include <fstream>

File::File(const std::string& filePath) {
    setPath(filePath);
}

void File::setPath(const std::string& filePath) {
    path = filePath;
    lineCount = read().size();
}

std::vector<std::string> File::read() const {
    std::vector<std::string> lines;
    std::ifstream file(this->path);
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

void File::addLine(const std::string& line) {
    std::ofstream file(this->path, std::ios::app);
    file << line << std::endl;
    file.close();
    lineCount++;
}

void File::deleteLine(int lineNumber) {
    if (lineCount == 0) {
        return; // No lines to delete
    }
    std::vector<std::string> lines = read();
    if (lineNumber < 1 || lineNumber > lines.size()) {
        throw std::out_of_range("Line number out of range");
    }
    lines.erase(lines.begin() + lineNumber - 1);
    std::ofstream file(this->path, std::ios::trunc);
    for (const auto& line : lines) {
        file << line << std::endl;
    }
    file.close();
    lineCount--;
}

void File::replaceLine(int lineNumber, const std::string& newLine) {
    if (lineCount == 0) {
        return; // No lines to replace
    }
    std::vector<std::string> lines = read();
    if (lineNumber < 1 || lineNumber > lines.size()) {
        throw std::out_of_range("Line number out of range");
    }
    lines[lineNumber - 1] = newLine;
    std::ofstream file(this->path, std::ios::trunc);
    for (const auto& line : lines) {
        file << line << std::endl;
    }
    file.close();
}