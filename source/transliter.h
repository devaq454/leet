#ifndef _TRANSLITER
#define _TRANSLITER

#include <map>
#include <string>

class Transliter
{
private:
    std::map<std::wstring, std::wstring> dict;

public:
    std::wstring TransliteLetter(std::wstring letter);
    std::wstring TransliteMessage(std::wstring message);
    Transliter();
};

#endif // _TRANSLITER
