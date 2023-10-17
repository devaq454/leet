#include <string>
#include <map>

#include "strToLowerUpper.h"
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
    else if (dict.count(StrToLower(letter)))
    {
        return StrToUpper(dict.at(StrToLower(letter)));
    }
    
    // if not cyrrilic
    return letter;
}

Transliter::Transliter()
{
    dict["з"] = "3";
    dict["я"] = "9";
    dict["г"] = "g";
    dict["н"] = "H";
    dict["е"] = "e";
    dict["т"] = "T";
    dict["р"] = "P";
    dict["и"] = "u";
    dict["в"] = "B";
    dict["х"] = ")(";
    dict["ж"] = ")|(";
    dict["л"] = "Jl";
    dict["ь"] = "b";
    dict["а"] = "A";
}
