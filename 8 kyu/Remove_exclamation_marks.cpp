#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string removeExclamationMarks(std::string str) {
    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
    return str;
}


// unit test
Describe(RemoveExclamationMarks) {
    It(BasicTests) {
        Assert::That(removeExclamationMarks("Hello World!"), Equals("Hello World"));
        Assert::That(removeExclamationMarks("Hello World!!!"), Equals("Hello World"));
        Assert::That(removeExclamationMarks("Hi! Hello!"), Equals("Hi Hello"));
        Assert::That(removeExclamationMarks("Hi!!! Hello!"), Equals("Hi Hello"));
        Assert::That(removeExclamationMarks("Hi! He!l!lo!"), Equals("Hi Hello"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
