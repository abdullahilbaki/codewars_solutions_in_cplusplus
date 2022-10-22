#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
auto number_to_string = [](int num) { return std::to_string(num); };

// unit test
Describe(number_to_string_function)
{
    It(should_convert_a_number_to_string)
    {
        Assert::That(number_to_string(1 + 2), Equals("3"));
        Assert::That(number_to_string(67), Equals("67"));
        Assert::That(number_to_string(-5), Equals("-5"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
