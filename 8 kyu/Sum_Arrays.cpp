#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <numeric>
int sum(std::vector<int> nums) {
    return std::accumulate(nums.begin(), nums.end(), 0);
}

// unit test
using vec = std::vector<int>;

Describe(SummingArrays) {
    It(FixedTests) {
        Assert::That(sum(vec{}), Equals(0));
        Assert::That(sum(vec{ 5 }), Equals(5));
        Assert::That(sum(vec{ -5 }), Equals(-5));
        Assert::That(sum(vec{ 1, 2, 3, 4 }), Equals(10));
        Assert::That(sum(vec{ 1, 2, -3, 3, 4 }), Equals(7));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
