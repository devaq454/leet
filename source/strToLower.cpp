#include <string>
#include <algorithm>
/* #include <cctype> */

std::string StrToLower(std::string s)
{
    char c = std::toupper(s.at(0));
    return std::to_string(c);
}
