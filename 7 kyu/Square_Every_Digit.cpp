#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

int square_digits(int num) {
    std::string s{ std::to_string(num) };
    std::string r{};
    for (auto c : s) {
        int i{ c - '0' };
        r += std::to_string(i * i);
    }
    return std::stoi(r);
}

// unit test
Describe(Square_Every_Digit)
{
    It(Sample_tests)
    {
        Assert::That(square_digits(3212), Equals(9414));
        Assert::That(square_digits(2112), Equals(4114));
        Assert::That(square_digits(0), Equals(0));
        Assert::That(square_digits(13579), Equals(19254981));
        Assert::That(square_digits(24680), Equals(41636640));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
