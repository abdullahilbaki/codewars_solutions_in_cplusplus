#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

std::vector<int> between(int start, int end) {
    std::vector<int> numbers{};
    for (int i{ start }; i <= end; i++) numbers.push_back(i);
    return numbers;
}

// unit test
Describe(Fixed_tests) {
    It(Basic_cases) {
        Assert::That(between(1, 4), Equals(std::vector<int>{1, 2, 3, 4}));
        Assert::That(between(-2, 2), Equals(std::vector<int>{-2, -1, 0, 1, 2}));
        Assert::That(between(-1, 10), Equals(std::vector<int>{-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
        Assert::That(between(0, 1), Equals(std::vector<int>{0, 1}));
        Assert::That(between(-1, 0), Equals(std::vector<int>{-1, 0}));
        Assert::That(between(0, 0), Equals(std::vector<int>{0}));
        Assert::That(between(5, 5), Equals(std::vector<int>{5}));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
