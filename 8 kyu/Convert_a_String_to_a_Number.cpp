#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

int string_to_number(const std::string& s) {
    return stoi(s);
}

// unit test
Describe(stringToNumber)
{
    It(shouldWorkForTheExamples)
    {
        AssertThat(string_to_number("123456"), Is().EqualTo(123456));
        AssertThat(string_to_number("352605"), Is().EqualTo(352605));
        AssertThat(string_to_number("-321405"), Is().EqualTo(-321405));
        AssertThat(string_to_number("-7"), Is().EqualTo(-7));
        AssertThat(string_to_number("0"), Is().EqualTo(0));
        AssertThat(string_to_number("-0"), Is().EqualTo(0));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
