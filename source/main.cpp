#include <iostream>
#include <locale>
#include "transliter.h"

int main()
{
    // setting for Russian letters in console
    setlocale(LC_ALL, "Russian");
    std::locale ru{"ru_RU.UTF-8"};
    std::cout.imbue(ru);
    std::wcout.imbue(ru);
    std::cin.imbue(ru);
    std::wcin.imbue(ru);
    std::locale::global(ru);


    Transliter t;
    std::wstring message;
    std::getline(std::wcin, message);
    std::wcout << t.TransliteMessage(message) << std::endl;
    return 0;
}
