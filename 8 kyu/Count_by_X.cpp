#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
auto countBy = [](int x, int n)
{
    std::vector<int> z;

    for (int i{ 1 }; i <= n; i++)
    {
        z.push_back(i * x);
    }
    return z;
};

// unit test
Describe(Count_By_X)
{
    It(Basic_Tests)
    {
        std::vector<int> expected = { 1,2,3,4,5,6,7,8,9,10 };
        Assert::That(countBy(1, 10), Equals(expected));
        expected = { 2,4,6,8,10 };
        Assert::That(countBy(2, 5), Equals(expected));
        expected = { 1,2,3,4,5,6,7,8,9,10 };
        Assert::That(countBy(1, 10), Equals(expected));
        expected = { 100,200,300,400,500 };
        Assert::That(countBy(100, 5), Equals(expected));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
