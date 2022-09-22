#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <algorithm>

int min(std::vector<int> list) {

    return *std::min_element(begin(list), end(list));
}

int max(std::vector<int> list) {

    return *std::max_element(begin(list), end(list));
}

// unit test
Describe(Test) {
    It(Examples) {
        using V = std::vector<int>;
        Assert::That(min(V{ -52, 56, 30, 29, -54, 0, -110 }), Equals(-110));
        Assert::That(min(V{ 42, 54, 65, 87, 0 }), Equals(0));
        Assert::That(max(V{ 4,6,2,1,9,63,-134,566 }), Equals(566));
        Assert::That(max(V{ 5 }), Equals(5));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
