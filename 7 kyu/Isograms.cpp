#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <algorithm>
#include <cctype>
bool is_isogram(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    return std::unique(str.begin(), str.end()) == str.end();
}

// unit test
Describe(Tests)
{
    It(isogram_or_not)
    {
        Assert::That(is_isogram("Dermatoglyphics"), Equals(true));
        Assert::That(is_isogram("moose"), Equals(false));
        Assert::That(is_isogram("isIsogram"), Equals(false));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
