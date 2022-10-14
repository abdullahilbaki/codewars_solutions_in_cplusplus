#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
auto area_or_perimeter = [](int l, int w)
{
    return (l == w) ? l * w : 2 * (l + w);
};

// unit test
Describe(Fixed_tests)
{
    It(Basics)
    {
        Assert::That(area_or_perimeter(4, 4), Equals(16));
        Assert::That(area_or_perimeter(6, 10), Equals(32));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
