#include <string>
#include <map>
#include <iostream>

#include "transliter.h"

std::wstring Transliter::TransliteLetter(std::wstring letter)
{
    if (dict.count(letter))
    {
        return dict.at(letter);
    }

    return letter;
}

Transliter::Transliter()
{
    // russian
    dict[L"а"] = L"a";      dict[L"А"] = L"A";
    dict[L"б"] = L"6";      dict[L"Б"] = L"6";
    dict[L"в"] = L"B";      dict[L"В"] = L"B";
    dict[L"г"] = L"r";      dict[L"Г"] = L"2";
    dict[L"д"] = L"g";      dict[L"Д"] = L"|)";
    dict[L"е"] = L"e";      dict[L"Е"] = L"E";
    dict[L"ё"] = L"e";      dict[L"Ё"] = L"E";
    dict[L"ж"] = L"]|[";    dict[L"Ж"] = L"]|[";
    dict[L"з"] = L"3";      dict[L"З"] = L"3";
    dict[L"и"] = L"u";      dict[L"И"] = L"|/|";
    dict[L"й"] = L"u";      dict[L"Й"] = L"|/|*";
    dict[L"к"] = L"k";      dict[L"К"] = L"K";
    dict[L"л"] = L"JI";     dict[L"Л"] = L"JI";
    dict[L"м"] = L"M";      dict[L"М"] = L"M";
    dict[L"н"] = L"H";      dict[L"Н"] = L"H";
    dict[L"о"] = L"o";      dict[L"О"] = L"O";
    dict[L"п"] = L"n";      dict[L"П"] = L"TT";
    dict[L"р"] = L"p";      dict[L"Р"] = L"P";
    dict[L"с"] = L"c";      dict[L"С"] = L"C";
    dict[L"т"] = L"T";      dict[L"Т"] = L"T";
    dict[L"у"] = L"y";      dict[L"У"] = L"Y";
    dict[L"ф"] = L"qp";     dict[L"Ф"] = L"qp";
    dict[L"х"] = L"x";      dict[L"Х"] = L"X";
    dict[L"ц"] = L"LL,";    dict[L"Ц"] = L"LL,";
    dict[L"ч"] = L"4";      dict[L"Ч"] = L"4";
    dict[L"ш"] = L"w";      dict[L"Ш"] = L"W";
    dict[L"щ"] = L"w,";     dict[L"Щ"] = L"W,";
    dict[L"ъ"] = L"'b";     dict[L"Ъ"] = L"'b";
    dict[L"ы"] = L"bl";     dict[L"Ы"] = L"bl";
    dict[L"ь"] = L"b";      dict[L"Ь"] = L"b";
    dict[L"э"] = L"e";      dict[L"Э"] = L"E";
    dict[L"ю"] = L"IO";     dict[L"Ю"] = L"IO";
    dict[L"я"] = L"9";      dict[L"Я"] = L"9I";
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
