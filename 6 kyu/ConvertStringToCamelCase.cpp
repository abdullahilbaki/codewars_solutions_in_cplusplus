#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <algorithm>
#include <string>

auto to_camel_case = [](std::string text) {
    for (size_t i{}; i < text.size(); ++i) {
        if (not isalpha(text[i])) {
            text[i + 1] = static_cast<char>(toupper(text[i + 1]));
        }
    }

    text.erase(std::remove_if(text.begin(), text.end(),
        [](unsigned char x) { return not isalpha(x); }),
        text.end());

    return text;
};

// unit test
Describe(Testing_function_to_camel_case)
{
    It(Basic_tests)
    {
        Assert::That(to_camel_case(""), Equals(""));
        Assert::That(to_camel_case("the_stealth_warrior"), Equals("theStealthWarrior"));
        Assert::That(to_camel_case("The-Stealth-Warrior"), Equals("TheStealthWarrior"));
        Assert::That(to_camel_case("A-B-C"), Equals("ABC"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
