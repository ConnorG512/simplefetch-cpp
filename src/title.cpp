#include <cmath>
#include <iostream>
#include <ostream>
#include <string>

class Title {
  public:
    std::string m_printed_text{};
    enum m_TextColor {
      black,
      red,
      green,
      yellow,
      blue,
      magenta,
      cyan,
      white,
    };
    m_TextColor  m_text_color;

  Title(std::string printed_text, m_TextColor text_color) 
    : m_printed_text { printed_text }, m_text_color {text_color} {

    } 
  void printLineToScreen() {
    std::cout << m_printed_text << std::endl;
  }

};
