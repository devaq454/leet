#include <string>
#include <map>
#include <algorithm>

#include "strToLower.h"
#include "transliter.h"
#include <iostream>

std::wstring Transliter::TransliteLetter(std::wstring letter)
{
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
    dict[L"а"] = L"a";
    dict[L"б"] = L"6";
    dict[L"в"] = L"B";
    dict[L"г"] = L"r";
    dict[L"д"] = L"g";
    dict[L"е"] = L"e";
    dict[L"ё"] = L"e";
    dict[L"ж"] = L"}|{";
    dict[L"з"] = L"3";
    dict[L"и"] = L"u";
    dict[L"й"] = L"u";
    dict[L"к"] = L"K";
    dict[L"л"] = L"J|";
    dict[L"м"] = L"M";
    dict[L"н"] = L"H";
    dict[L"о"] = L"o";
    dict[L"п"] = L"n";
    dict[L"р"] = L"p";
    dict[L"с"] = L"c";
    dict[L"т"] = L"T";
    dict[L"у"] = L"y";
    dict[L"ф"] = L"qp";
    dict[L"х"] = L"x";
    dict[L"ц"] = L"LL,";
    dict[L"ч"] = L"4";
    dict[L"ш"] = L"w";
    dict[L"щ"] = L"w,";
    dict[L"ъ"] = L"'b";
    dict[L"ы"] = L"bl";
    dict[L"ь"] = L"b";
    dict[L"э"] = L"e";
    dict[L"ю"] = L"IO";
    dict[L"я"] = L"9";
}

std::wstring Transliter::TransliteMessage(std::wstring message)
{
    std::wstring outputString = L"";
    for (auto i : message)
    {
        std::wstring translitedLetter = TransliteLetter(std::wstring(1, i));
        outputString += translitedLetter;
    }
    return outputString;
}
