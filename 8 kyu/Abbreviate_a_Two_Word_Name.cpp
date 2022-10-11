#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <algorithm>
#include <string>

std::string abbrevName(std::string name) {
    std::string s = name;
    std::transform(s.cbegin(), s.cend(), s.begin(),
                   [](unsigned char c) { return std::toupper(c); });
    std::string sc{};
    for (size_t i{}; i < s.length(); i++) {
        if (i == 0)
            sc.push_back(s[i]);
        else if (s[i] == ' ') {
            sc.push_back('.');
            sc.push_back(s[i + 1]);
        }
    }
    return sc;
}

// unit test
Describe(Tests)
{
    It(Fixed_tests)
    {
        Assert::That(abbrevName("Sam Harris"), Equals("S.H"));
        Assert::That(abbrevName("Patrick Feenan"), Equals("P.F"));
        Assert::That(abbrevName("Evan Cole"), Equals("E.C"));
        Assert::That(abbrevName("P Favuzzi"), Equals("P.F"));
        Assert::That(abbrevName("David Mendieta"), Equals("D.M"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
