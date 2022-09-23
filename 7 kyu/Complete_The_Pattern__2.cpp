#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string pattern(int n) {
    std::string str{};
    for (int i{ 1 }; i <= n; ++i)
    {
        for (int j{ n }; j >= i; --j)
            str += std::to_string(j);
        str += (i != n) ? "\n" : "";
    }

    return str;
}


// unit test
Describe(Example_Test_Cases)
{
    It(Test_1)
    {
        Assert::That(pattern(1), Equals("1"));
    }
    It(Test_2)
    {
        Assert::That(pattern(3), Equals("321\n32\n3"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
