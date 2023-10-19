#include <locale>
#include <string>

std::wstring StrToLower(std::wstring s)
{
    auto let = std::towlower(s[0]);
    return std::wstring(1, let);
}
