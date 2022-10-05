#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// unit test
Describe(Tests) {
    It(Sample_Tests) {
        Assert::That(factorial(0), Equals(1), ExtraMessage("Incorrect answer for n=0"));
        Assert::That(factorial(1), Equals(1), ExtraMessage("Incorrect answer for n=1"));
        Assert::That(factorial(2), Equals(2), ExtraMessage("Incorrect answer for n=2"));
        Assert::That(factorial(3), Equals(6), ExtraMessage("Incorrect answer for n=3"));
        Assert::That(factorial(4), Equals(24), ExtraMessage("Incorrect answer for n=4"));
        Assert::That(factorial(5), Equals(120), ExtraMessage("Incorrect answer for n=5"));
        Assert::That(factorial(6), Equals(720), ExtraMessage("Incorrect answer for n=6"));
        Assert::That(factorial(7), Equals(5040), ExtraMessage("Incorrect answer for n=7"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
