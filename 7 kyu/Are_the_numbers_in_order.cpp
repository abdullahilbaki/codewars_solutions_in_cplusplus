#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <algorithm> // for is_sorted

bool isAscOrder(std::vector<int> arr)
{
    return is_sorted(begin(arr), end(arr));
}


// unit test
Describe(ExampleTests)
{
    It(_0_BasicTests)
    {
        Assert::That(isAscOrder({ 1, 2 }), Equals(true));
        Assert::That(isAscOrder({ 2, 1 }), Equals(false));
        Assert::That(isAscOrder({ 1, 2, 3 }), Equals(true));
        Assert::That(isAscOrder({ 1, 3, 2 }), Equals(false));
        Assert::That(isAscOrder({ 2, 1, 3 }), Equals(false));
        Assert::That(isAscOrder({ 2, 3, 1 }), Equals(false));
        Assert::That(isAscOrder({ 3, 1, 2 }), Equals(false));
        Assert::That(isAscOrder({ 3, 2, 1 }), Equals(false));
    }

    It(_1_AdvancedTests)
    {
        Assert::That(isAscOrder({ 1, 4, 13, 97, 508, 1047, 20058 }), Equals(true));
        Assert::That(isAscOrder({ 56, 98, 123, 67, 742, 1024, 32, 90969 }), Equals(false));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
