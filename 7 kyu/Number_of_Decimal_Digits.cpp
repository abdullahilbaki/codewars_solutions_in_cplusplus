#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <stdint.h>
#include <cstddef>
#include <string>
size_t digits(uint64_t n) {
    return std::to_string(n).length();
}

// unit test
Describe(sample_tests)
{
    It(test_digits)
    {
        Assert::That(digits(5ull), Equals(1));
        Assert::That(digits(12345ull), Equals(5));
        Assert::That(digits(9876543210ull), Equals(10));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
