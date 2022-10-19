#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
bool is_even(double n)
{
    long int x = static_cast<long int>(n);

    return (n != x) ? 0 : x % 2 == 0;
}

// unit test
Describe(is_it_even)
{
    It(example_tests)
    {
        Assert::That(is_even(0), Equals(true));
        Assert::That(is_even(0.5), Equals(false));
        Assert::That(is_even(1), Equals(false));
        Assert::That(is_even(2), Equals(true));
        Assert::That(is_even(-4), Equals(true));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
