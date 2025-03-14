#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <iostream>
#include <string>

class File {
  private:
    std::string m_title{};
  public:
    std::string m_filePath{};
    File(std::string title, std::string filePath);
    
    // Prints the category title to the screen eg: "Hostname:" "Kernel:". 
    void printTitleToScreen();
    // Prints the required contents of the file to the screen. 
    virtual void printFileToScreen();
  };

class FileByWord : public File {
  private:
    int m_fileIndex;
  public:
    
    FileByWord(std::string title, std::string filePath, int fileIndex);
    
    // Prints to the screen from the word (string of characters seperated by spaces) and thier index.
    virtual void printFileToScreen ();
};

#endif
