#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <algorithm>
#include <vector>
auto small_enough = [](std::vector<int> arr, int limit) {
    return std::all_of(arr.begin(), arr.end(),
        [&limit](int n) { return n <= limit; });
};

// unit test
Describe(Fixed_tests) {
    It(Basic_cases) {
        Assert::That(small_enough(std::vector<int>{66, 101}, 200),
            Equals(true));

        Assert::That(small_enough(std::vector<int>{78, 117, 110, 99, 104, 117, 107, 115}, 100),
            Equals(false));

        Assert::That(small_enough(std::vector<int>{101, 45, 75, 105, 99, 107}, 107),
            Equals(true));

        Assert::That(small_enough(std::vector<int>{80, 117, 115, 104, 45, 85, 112, 115}, 120),
            Equals(true));

        Assert::That(small_enough(std::vector<int>{1, 1, 1, 1, 1, 2}, 1),
            Equals(false));

        Assert::That(small_enough(std::vector<int>{78, 33, 22, 44, 88, 9, 6}, 87),
            Equals(false));

        Assert::That(small_enough(std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9}, 10),
            Equals(true));

        Assert::That(small_enough(std::vector<int>{12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12}, 12),
            Equals(true));
    }
};



int main()
{
    return TestRunner::RunAllTests();
}
