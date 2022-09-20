#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <cstdint>
#include <cmath>
std::vector<uint64_t> powers_of_two(int n) {
    std::vector<uint64_t> arr{};
    for (int i{}; i <= n; i++) {
        arr.push_back(static_cast<long unsigned int>(pow(2, i)));
    }
    return arr;
}

// unit test

Describe(Fixed_tests) {
    It(Sample_cases) {
        Assert::That(powers_of_two(0), Equals(std::vector<uint64_t>{1}));
        Assert::That(powers_of_two(2), Equals(std::vector<uint64_t>{1, 2, 4}));
        Assert::That(powers_of_two(4), Equals(std::vector<uint64_t>{1, 2, 4, 8, 16}));
        Assert::That(powers_of_two(10), Equals(std::vector<uint64_t>{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024}));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
