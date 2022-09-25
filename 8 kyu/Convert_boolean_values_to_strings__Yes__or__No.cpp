#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string bool_to_word(bool value)
{
    return (value) ? "Yes" : "No";
}


// unit test
Describe(bool_to_word_method)
{
    It(basic_tests)
    {
        Assert::That(bool_to_word(true), Equals("Yes"));
        Assert::That(bool_to_word(false), Equals("No"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
