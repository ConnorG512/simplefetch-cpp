#include "title.h"
#include <string>

Title::Title(std::string printed_text, TextColor text_color ) 
  : m_printed_text { printed_text }, m_text_color { text_color } {}

/*Title::printLineToScreen("");*/
