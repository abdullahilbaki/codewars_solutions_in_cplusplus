#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <algorithm>

std::string makeUpperCase(const std::string& input_str)
{
    std::string s = input_str;
    std::transform(s.cbegin(), s.cend(), s.begin(), [](unsigned char c) { return std::toupper(c); });
    return s;
}

// unit test
Describe(The_makeUpperCase_function)
{
    It(should_pass_all_the_tests_provided)
    {
        Assert::That(makeUpperCase("hello"), Equals("HELLO"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
