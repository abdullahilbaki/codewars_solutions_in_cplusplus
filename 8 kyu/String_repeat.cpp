#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
    std::string s{};
    for (int i{}; i < repeat; i++) s += str;
    return s;
}

// unit test
Describe(Fixed_tests) {
    It(Sample_cases) {
        Assert::That(repeat_str(3, "*"), Equals("***"));
        Assert::That(repeat_str(5, "#"), Equals("#####"));
        Assert::That(repeat_str(2, "ha "), Equals("ha ha "));
        Assert::That(repeat_str(5, ">"), Equals(">>>>>"));
        Assert::That(repeat_str(10, "!"), Equals("!!!!!!!!!!"));
        Assert::That(repeat_str(3, "hello "), Equals("hello hello hello "));
        Assert::That(repeat_str(3, "$"), Equals("$$$"));
        Assert::That(repeat_str(5, "a"), Equals("aaaaa"));
        Assert::That(repeat_str(6, "A"), Equals("AAAAAA"));
        Assert::That(repeat_str(7, "aA"), Equals("aAaAaAaAaAaAaA"));
        Assert::That(repeat_str(3, ""), Equals(""));
        Assert::That(repeat_str(0, "null"), Equals(""));
        Assert::That(repeat_str(0, ""), Equals(""));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
