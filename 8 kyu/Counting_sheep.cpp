#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <vector>
#include <algorithm>
long int count_sheep(std::vector<bool> arr)
{
    auto c = std::count(arr.begin(), arr.end(), true);
    return c;
}

// unit test
Describe(count_sheep_method)
{
    It(array_one)
    {
        std::vector<bool> array1 = { true,  true,  true,  false,
                                  true,  true,  true,  true ,
                                  true,  false, true,  false,
                                  true,  false, false, true ,
                                  true,  true,  true,  true ,
                                  false, false, true,  true };
        Assert::That(count_sheep(array1), Equals(17));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
