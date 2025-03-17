#include "title.h"

Title::Title(const std::string& printed_text, const TextColor& text_color ) 
  : m_printed_text { printed_text }, m_text_color { text_color } {}

void Title::printLineToScreen() {
  std::cout << "\033[" << m_text_color << "m" << m_printed_text << "\033[0m" << "\n";
}
