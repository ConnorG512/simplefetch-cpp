#include "printer.h"

Printer::Printer(const std::string& printed_text, const TextColor& text_color ) 
  : m_printed_text { printed_text }, m_text_color { text_color } {
    Printer::printLineToScreen();
  }

void Printer::printLineToScreen() {
  // Print with no ANSI color if the enum is set to none
  if (m_text_color == none) {
    std::cout << m_printed_text << "\n";
  }
  std::cout << "\033[" << m_text_color << "m" << m_printed_text << "\033[0m" << "\n";
}
