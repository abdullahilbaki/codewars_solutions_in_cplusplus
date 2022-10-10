#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
auto cockroach_speed = [](double s)
{
    return static_cast<int>((s * 100000) / 3600);
};

// unit test
Describe(Sample_Tests)
{
    It(Basic_Tests)
    {
        Assert::That(cockroach_speed(1.08), Equals(30));
        Assert::That(cockroach_speed(1.09), Equals(30));
        Assert::That(cockroach_speed(0), Equals(0));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
