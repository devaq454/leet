#include <iostream>
#include <string>
#include <map>

#include "transliter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Transliter T;
    std::cout << T.TransliteLetter("я") << std::endl;
    return 0;
}
