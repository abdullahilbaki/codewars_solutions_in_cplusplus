#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int x{};
    for (int i : classPoints)
        x += i;
    int z{ x / static_cast<int>(classPoints.size()) };
    return yourPoints > z;
}


// unit test
using vec = std::vector<int>;

Describe(HowGoodAreYouReally) {
    It(BasicTests) {
        Assert::That(betterThanAverage(vec{ 2, 3 }, 5), Equals(true));
        Assert::That(betterThanAverage(vec{ 100, 40, 34, 57, 29, 72, 57, 88 }, 75), Equals(true));
        Assert::That(betterThanAverage(vec{ 12, 23, 34, 45, 56, 67, 78, 89, 90 }, 69), Equals(true));
        Assert::That(betterThanAverage(vec{ 41, 75, 72, 56, 80, 82, 81, 33 }, 50), Equals(false));
        Assert::That(betterThanAverage(vec{ 29, 55, 74, 60, 11, 90, 67, 28 }, 21), Equals(false));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
