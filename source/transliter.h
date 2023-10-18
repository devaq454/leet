#ifndef _TRANSLITER
#define _TRANSLITER

#include <map>
#include <string>

class Transliter
{
private:
    std::map<std::string, std::string> dict;

public:
    std::string TransliteLetter(std::string letter);
    std::string TransliteMessage(std::string message);
    Transliter();
};

#endif // _TRANSLITER
