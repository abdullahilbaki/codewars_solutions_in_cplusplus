#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

std::vector<int> digitize(unsigned long n)
{
    unsigned long rem{};
    unsigned long nc = n;
    std::vector<int> r{};
    while (n != 0) {
        rem = n % 10;
        r.push_back(static_cast<int>(rem));
        n /= 10;
    }
    if (nc == 0) {
        r.push_back(0);
    }
    return r;
}



// unit test
Describe(digitize_method)
{
    It(basic_tests)
    {
        Assert::That(digitize(348597), Equals(std::vector<int>({ 7,9,5,8,4,3 })));
        Assert::That(digitize(35231), Equals(std::vector<int>({ 1,3,2,5,3 })));
        Assert::That(digitize(0), Equals(std::vector<int>({ 0 })));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
