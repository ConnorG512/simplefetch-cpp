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
      bright_black = 90,
      bright_red = 91,
      bright_green = 92,
      bright_yellow = 93,
      bright_blue = 94,
      bright_magenta = 95,
      bright_cyan = 96,
      bright_white = 97,
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
