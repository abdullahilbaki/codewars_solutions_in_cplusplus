#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
std::string get_middle(std::string input) {
    auto i{ input.length() };
    if (i % 2 == 0) return input.substr((i - 1) / 2, 2);
    return input.substr((i - 1) / 2, 1);
}

// unit test
Describe(get_middle_algorithm)
{
    It(should_handle_basic_tests)
    {
        Assert::That(get_middle("test"), Equals("es"));
        Assert::That(get_middle("testing"), Equals("t"));;
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
