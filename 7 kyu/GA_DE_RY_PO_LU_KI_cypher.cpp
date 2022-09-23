#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <map>
std::string encode(const std::string& str)
{
    std::string s{ str };
    std::map<char, char> key{
        {'G', 'A'},
        {'g', 'a'},
        {'D', 'E'},
        {'d', 'e'},
        {'R', 'Y'},
        {'r', 'y'},
        {'P', 'O'},
        {'p', 'o'},
        {'L', 'U'},
        {'l', 'u'},
        {'K', 'I'},
        {'k', 'i'}
    };

    for (auto& c : s) 
    {
        for (auto const& i : key) 
        {
            if (c == i.first)
            {
                c = i.second;
                break;
            }
            if (c == i.second)
            {
                c = i.first;
                break;
            }
        }
    }

    return s;
}

std::string decode(const std::string& str)
{
    return  encode(str);
}


// unit test
Describe(ScoutsAreWaiting)
{
    It(BasicTest)
    {
        Assert::That(encode("Ala has a cat"), Equals("Gug hgs g cgt"));
        Assert::That(decode("Gug hgs g cgt"), Equals("Ala has a cat"));
        Assert::That(encode("ABCD"), Equals("GBCE"));
        Assert::That(decode("GBCE"), Equals("ABCD"));
        Assert::That(encode("gaderypoluki"), Equals("agedyropulik"));
        Assert::That(decode("agedyropulik"), Equals("gaderypoluki"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
