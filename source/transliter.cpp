#include <string>
#include <map>
#include <algorithm>

#include "strToLower.h"
#include "transliter.h"
#include <iostream>

std::wstring Transliter::TransliteLetter(std::wstring letter)
{
    setlocale(LC_ALL, "Russian");

    // if lower in dict
    if (dict.count(letter))
    {
        return dict.at(letter);
    }

    // if upper in dict
    std::wstring lowerLetter = StrToLower(letter);
    if (dict.count(lowerLetter))
    {
        return dict.at(lowerLetter);
    }
    
    // if not cyrrilic
    return letter;
}

Transliter::Transliter()
{
    dict[L"а"] = L"A";
    dict[L"б"] = L"6";
    dict[L"в"] = L"B";
    dict[L"г"] = L"2";
    dict[L"д"] = L"g";
    dict[L"е"] = L"e";
    dict[L"ё"] = L"e";
    dict[L"ж"] = L")|(";
    dict[L"з"] = L"3";
    dict[L"и"] = L"u";
    dict[L"й"] = L"u";
    dict[L"к"] = L"K";
    dict[L"л"] = L"Jl";
    dict[L"м"] = L"M";
    dict[L"н"] = L"H";
    dict[L"о"] = L"O";
    dict[L"п"] = L"TT";
    dict[L"р"] = L"P";
    dict[L"с"] = L"c";
    dict[L"т"] = L"T";
    dict[L"у"] = L"Y";
    dict[L"ф"] = L"_";
    dict[L"х"] = L"x";
    dict[L"ц"] = L"_";
    dict[L"ч"] = L"4";
    dict[L"ш"] = L"w";
    dict[L"щ"] = L"w";
    dict[L"ъ"] = L"b";
    dict[L"ы"] = L"bl";
    dict[L"ь"] = L"b";
    dict[L"э"] = L"_";
    dict[L"ю"] = L"_";
    dict[L"я"] = L"9";
}

std::wstring Transliter::TransliteMessage(std::wstring message)
{
    /* std::transform(message.begin(), message.end(), message.begin(), */
    /*         [this] (auto c) { */ 
    /*         std::string let = std::to_string(c); */
    /*         return TransliteLetter(let); */
    /*         }); */
    setlocale(LC_ALL, "Russian");
    std::wstring outputString = L"";
    for (auto i : message)
    {
        std::wstring transliedLetter = TransliteLetter(std::wstring(1, i));
        outputString += transliedLetter;
    }
    return outputString;
}
