#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

std::vector<int> reverseSeq(int n) {
    std::vector<int> arr{};
    while (n > 0) {
        arr.push_back(n);
        n--;
    }
    return arr;
}

// unit test
Describe(ReverseSeq)
{
    It(BasicTests)
    {
        Assert::That(reverseSeq(1), Equals(std::vector<int>{1}));
        Assert::That(reverseSeq(2), Equals(std::vector<int>{2, 1}));
        Assert::That(reverseSeq(5), Equals(std::vector<int>{5, 4, 3, 2, 1}));
        Assert::That(reverseSeq(10), Equals(std::vector<int>{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
