#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <algorithm>

bool is_uppercase(const std::string& s) {
    std::string str = s;
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return s == str;
}

// unit test
Describe(Is_UpperCase) {
    It(Basic_Tests) {
        Assert::That(is_uppercase("c"), Equals(false));
        Assert::That(is_uppercase("C"), Equals(true));
        Assert::That(is_uppercase("hello I AM DONALD"), Equals(false));
        Assert::That(is_uppercase("HELLO I AM DONALD"), Equals(true));
        Assert::That(is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ"), Equals(false));
        Assert::That(is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ"), Equals(true));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
