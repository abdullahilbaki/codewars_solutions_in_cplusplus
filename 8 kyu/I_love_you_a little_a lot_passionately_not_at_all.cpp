#include <igloo/igloo_alt.h>
using namespace igloo;

#include <string>

// solution
std::string how_much_i_love_you(int n) {
    if (n % 6 == 1) return "I love you";
    if (n % 6 == 2) return "a little";
    if (n % 6 == 3) return "a lot";
    if (n % 6 == 4) return "passionately";
    if (n % 6 == 5) return "madly";
    return "not at all";
}

// unit test
Describe(decode)
{
    It(basic_tests)
    {
        Assert::That(how_much_i_love_you(7), Equals("I love you"));
        Assert::That(how_much_i_love_you(3), Equals("a lot"));
        Assert::That(how_much_i_love_you(6), Equals("not at all"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
