#include <string>
#include <map>

#include "strToLower.h"
#include "transliter.h"

std::string Transliter::TransliteLetter(std::string letter)
{
    setlocale(LC_ALL, "Russian");

    // if lower in dict
    if (dict.count(letter))
    {
        return dict.at(letter);
    }

    // if upper in dict
    std::string lowerLetter = StrToLower(letter);
    if (dict.count(lowerLetter))
    {
        return dict.at(lowerLetter);
    }
    
    // if not cyrrilic
    return letter;
}

Transliter::Transliter()
{
    dict["а"] = "A";
    dict["б"] = "6";
    dict["в"] = "B";
    dict["г"] = "2";
    dict["д"] = "g";
    dict["е"] = "e";
    dict["ё"] = "e";
    dict["ж"] = ")|(";
    dict["з"] = "3";
    dict["и"] = "u";
    dict["й"] = "u";
    dict["к"] = "K";
    dict["л"] = "Jl";
    dict["м"] = "M";
    dict["н"] = "H";
    dict["о"] = "O";
    dict["п"] = "TT";
    dict["р"] = "P";
    dict["с"] = "c";
    dict["т"] = "T";
    dict["у"] = "Y";
    dict["ф"] = "ф";
    dict["х"] = "x";
    dict["ц"] = "";
    dict["ч"] = "4";
    dict["ш"] = "w";
    dict["щ"] = "w";
    dict["ъ"] = "b";
    dict["ы"] = "bl";
    dict["ь"] = "b";
    dict["э"] = "э";
    dict["ю"] = "ю";
    dict["я"] = "9";
}
