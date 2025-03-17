#ifndef PRINTER_H
#define PRINTER_H

#include <cmath>
#include <iostream>
#include <ostream>
#include <string>

class Printer{
  std::string m_printed_text{};
  
  public:
  /*ANSI escape codes for changing the color of the terminal.
  * To be used with printLineToScreen*/
  enum TextColor {
    // Extended ANSI
    bright_black = 90,
    bright_red = 91,
    bright_green = 92,
    bright_yellow = 93,
    bright_blue = 94,
    bright_magenta = 95,
    bright_cyan = 96,
    bright_white = 97,
    none,
  };
  TextColor m_text_color;
  // Member functions:  
  // Initializer
  Printer(const std::string& printed_text, const TextColor& text_color);

  /* Prints both the title and a color to the terminal, 
   * takes the title string as well as an enum to determine
   * the color of the text. */
  void printLineToScreen();
};

#endif // PRINTER_H
