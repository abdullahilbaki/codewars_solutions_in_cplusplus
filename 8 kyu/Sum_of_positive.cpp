#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

int positive_sum(const std::vector<int> arr) {
    int sum{};
    for (auto i : arr) {
        if (i > 0) sum += i;
    }
    return sum;
}

// unit test
Describe(Tests)
{
    It(works_for_some_examples)
    {
        Assert::That(positive_sum(std::vector <int> {1, 2, 3, 4, 5}), Equals(15));
        Assert::That(positive_sum(std::vector <int> {1, -2, 3, 4, 5}), Equals(13));
        Assert::That(positive_sum(std::vector <int> {-1, 2, 3, 4, -5}), Equals(9));
    }
    It(returns_0_when_array_is_empty)
    {
        Assert::That(positive_sum(std::vector <int> {}), Equals(0));
    }
    It(returns_0_when_all_elements_are_negative)
    {
        Assert::That(positive_sum(std::vector <int> {-1, -2, -3, -4, -5}), Equals(0));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
