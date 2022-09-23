#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
std::string pattern(int n) {
    std::string number{};
    if (n < 1) return {};
    for (int i{ 1 }; i <= n; ++i)
    {
        for (int j{ 1 }; j <= i; ++j)
        {
            number += std::to_string(i);
        }
        number += '\n';
    }
    number.pop_back();
    return number;
}

// unit test
Describe(Tests)
{
    It(ExampleTests)
    {
        std::string expected = "1\n22";
        std::string actual = pattern(2);
        Assert::That("\n" + actual, Equals("\n" + expected));

        expected = "1\n22\n333";
        actual = pattern(3);
        Assert::That("\n" + actual, Equals("\n" + expected));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
