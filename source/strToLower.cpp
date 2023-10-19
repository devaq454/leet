#include <locale>
#include <string>

std::wstring StrToLower(std::wstring s)
{
    std::locale ru{"ru_RU.UTF-8"};

    std::locale::global(ru);
    auto let = std::towlower(s[0]);
    return std::wstring(1, let);
    /* return std::towlower(let); */
    /* return lower; */
}
