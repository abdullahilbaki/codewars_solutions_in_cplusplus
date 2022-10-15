#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <cstdlib>

auto twice_as_old(int dad, int son)
{
    return abs(dad - (son * 2));
};

// unit test
Describe(Sample_Tests)
{
    It(Tests)
    {
        Assert::That(twice_as_old(36, 7), Equals(22));
        Assert::That(twice_as_old(55, 30), Equals(5));
        Assert::That(twice_as_old(42, 21), Equals(0));
        Assert::That(twice_as_old(22, 1), Equals(20));
        Assert::That(twice_as_old(29, 0), Equals(29));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
