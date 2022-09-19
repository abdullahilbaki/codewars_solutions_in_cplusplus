#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <cmath>
int index(const std::vector<int>& vector, long unsigned int n) {
    return (vector.size() > n) ? static_cast<int>(std::pow(vector.at(n), n)) : -1;
}

// unit test
typedef std::vector<int> V;

Describe(Basic_Tests)
{
    It(basic_tests)
    {
        Assert::That(index(V{ 1,2,3,4 }, 2), Equals(9));
        Assert::That(index(V{ 5,1,3,3 }, 3), Equals(27));
        Assert::That(index(V{ 1,2 }, 3), Equals(-1));
        Assert::That(index(V{ 1 }, 0), Equals(1));
        Assert::That(index(V{ 1,1,1,1,1,1,1,1,1,1 }, 9), Equals(1));
        Assert::That(index(V{ 1,1,1,1,1,1,1,1,1,2 }, 9), Equals(512));
        Assert::That(index(V{ 29,82,45,10 }, 3), Equals(1000));
        Assert::That(index(V{ 6,31 }, 3), Equals(-1));
        Assert::That(index(V{ 75,68,35,61,9,36,89,11,30 }, 10), Equals(-1));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
