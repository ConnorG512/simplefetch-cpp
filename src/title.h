#ifndef TITLE_H
#define TITLE_H

#include <cmath>
#include <iostream>
#include <ostream>
#include <string>

class Title {
  private:
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
  
  public:
  // Initializer
  Title(std::string printed_text, m_TextColor text_color);
  
  /* Prints both the title and a color to the terminal, 
   * takes the title string as well as an enum to determine
   * the color of the text. */
  void printLineToScreen();

};

#endif // TITLE_H
