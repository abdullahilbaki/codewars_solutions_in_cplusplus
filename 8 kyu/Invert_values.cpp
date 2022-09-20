#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> n{};
    for (auto i : values) n.push_back(i * (-1));
    return n;
}

// unit test
Describe(test_invert)
{
    It(should_pass_some_basic_tests)
    {
        Assert::That(invert({ 1, 2, 3, 4, 5 }), Equals(std::vector<int>{-1, -2, -3, -4, -5}));
        Assert::That(invert({ 1, -2, 3, -4, 5 }), Equals(std::vector<int>{-1, 2, -3, 4, -5}));
        Assert::That(invert({}), Equals(std::vector<int>{}));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
