#include "file.h"

File::File(std::string title, std::string filePath)
  : m_title { title }, m_filePath {filePath} {}

FileByWord::FileByWord(std::string title, std::string filePath, int fileIndex)
  : File(title, filePath), m_fileIndex { fileIndex } {}

void File::printTitleToScreen() {
std::cout << m_title << " ";
}

void File::printFileToScreen () {
  std::ifstream targetFile{m_filePath};
  // Error handling for not being able to open.
  if (!targetFile) {
    std::cerr << "Failed to open file!";
    std::exit(1);
  }
  std::string strInput{};
  // Print file contents
  while (std::getline(targetFile, strInput)) {
    std::cout << strInput << "\n";
  }
};

void FileByWord::printFileToScreen () {
  std::ifstream targetFile{m_filePath};
  // Error handling for not being able to open.
  if (!targetFile) {
    std::cerr << "Failed to open file!";
    std::exit(1);
  }
  std::string strInput{};
  // Print file contents
  int index = 0;
  while (targetFile >> strInput) {
    if (index == m_fileIndex) {
      std::cout << strInput << "\n";
    }
    index ++;
  }
}
