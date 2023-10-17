#ifndef _TRANSLITE_LETTER
#define _TRANSLITE_LETTER

#include <string>
#include <map>

std::string TransliteLetter(std::string letter, 
                            const std::map<std::string, std::string> &dict
                           );

#endif  // _TRANSLITE_LETTER
