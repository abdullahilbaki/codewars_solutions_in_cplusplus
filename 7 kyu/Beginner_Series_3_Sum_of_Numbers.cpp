#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <algorithm>

auto get_sum = [](int a, int b)
{
    int n { std::min(a, b) };
    int x { std::max(a, b) };

    int sum {};
    while(n <= x)
    {
        sum += n;
        n++;
    }

    return (a == b) ?
        a : sum;
};


// unit test
Describe(sample_tests)
{
    It(basics)
    {
        printf("Sum 0, -1");
        Assert::That(get_sum(0, -1), Equals(-1));
        printf(" passed\n");
        printf("Sum 0, 1");
        Assert::That(get_sum(0, 1), Equals(1));
        printf(" passed\n");
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
