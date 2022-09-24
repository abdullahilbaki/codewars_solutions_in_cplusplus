#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <algorithm>

long int getCount(const std::string& inputStr) {
    const std::string& vow{ "aeiouAEIOU" };
    const auto is_vowels = [&vow](const char elements)
    {
        return vow.find(elements) != std::string::npos;
    };
    return std::count_if(inputStr.cbegin(), inputStr.cend(), is_vowels);
}


// unit test
Describe(sample_test_cases)
{
    It(test_1)
    {
        Assert::That(getCount("abracadabra"), Equals(5));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
