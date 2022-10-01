#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <cmath>

int square_sum(const std::vector<int>& numbers)
{
    int sum{};
    for (auto i : numbers) {
        sum += static_cast<int>(pow(i, 2));
    }
    return sum;
}

// unit test
Describe(test_square_sum)
{
    It(should_pass_some_basic_tests)
    {
        Assert::That(square_sum({ 1, 2 }), Equals(5));
        Assert::That(square_sum({ 0, 3, 4, 5 }), Equals(50));
        Assert::That(square_sum({}), Equals(0));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
