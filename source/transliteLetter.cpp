#include <string>
#include <map>

#include "strToLowerUpper.h"

std::string TransliteLetter(std::string letter, 
                            const std::map<std::string, std::string> &dict)
{
    setlocale(LC_ALL, "Russian");

    // if lower in dict
    if (dict.count(letter))
    {
        return dict.at(letter);
    }

    // if upper in dict
    else if (dict.count(StrToLower(letter)))
    {
        return StrToUpper(dict.at(StrToLower(letter)));
    }
    
    // if not cyrrilic
    return letter;
}
