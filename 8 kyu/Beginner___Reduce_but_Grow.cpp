#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
int grow(std::vector<int> nums) {
    int m{ 1 };
    for (auto i : nums)
        m *= i;
    return m;
}


// unit test
using vec = std::vector<int>;

Describe(ReduceGrow) {
    It(BasicTests) {
        Assert::That(grow(vec{ 1, 2, 3 }), Equals(6));
        Assert::That(grow(vec{ 4, 1, 1, 1, 4 }), Equals(16));
        Assert::That(grow(vec{ 2, 2, 2, 2, 2, 2 }), Equals(64));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
