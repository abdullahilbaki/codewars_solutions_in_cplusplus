#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
char get_char(int i) { return char(i); }


// unit test
Describe(tests)
{
    It(basic_tests)
    {
        Assert::That(get_char(55), Equals('7'));
        Assert::That(get_char(56), Equals('8'));
        Assert::That(get_char(57), Equals('9'));
        Assert::That(get_char(58), Equals(':'));
        Assert::That(get_char(59), Equals(';'));
        Assert::That(get_char(60), Equals('<'));
        Assert::That(get_char(61), Equals('='));
        Assert::That(get_char(62), Equals('>'));
        Assert::That(get_char(63), Equals('?'));
        Assert::That(get_char(64), Equals('@'));
        Assert::That(get_char(65), Equals('A'));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
