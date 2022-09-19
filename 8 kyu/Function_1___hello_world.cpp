#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string greet() { return "hello world!"; };


// unit test
Describe(HelloWorld) {
    It(GreetWorld) {
        Assert::That(greet(), Equals("hello world!"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
