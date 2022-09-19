#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
int summation(int num) {
    int sum{};
    for (int i{}; i <= num; i++) sum += i;
    return sum;
}


// unit test
Describe(Test)
{
    It(Fixed__Tests)
    {
        Assert::That(summation(1), Equals(1));
        Assert::That(summation(8), Equals(36));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
