#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int count{};
    int sum{};

    for (auto i : input) {
        if (i < 1)
            sum += i;
        else
            count++;
    }
    if (input.size() == 0)
        return {};
    else {
        std::vector<int> result{ count, sum };
        return result;
    }

}


// unit test
Describe(Test)
{
    It(Test1)
    {
        std::vector<int> expected{ 10, -65 };
        std::vector<int> result = countPositivesSumNegatives({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15 });
        Assert::That(result, Equals(expected));
    }

    It(Test2)
    {
        std::vector<int> expected = { 8, -50 };
        std::vector<int> result = countPositivesSumNegatives({ 0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14 });
        Assert::That(result, Equals(expected));
    }

    It(Test3)
    {
        std::vector<int> result = countPositivesSumNegatives(std::vector<int>());
        Assert::That(result, Equals(std::vector<int>()));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
