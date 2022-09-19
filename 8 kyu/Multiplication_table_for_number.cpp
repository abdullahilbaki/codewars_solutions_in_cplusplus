#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string multi_table(int number)
{
    std::string s = "";
    for (int i{ 1 }; i < 11; i++)
    {
        int mul{ i * number };
        s += std::to_string(i) + " * " + std::to_string(number) + " = " 
            + std::to_string(mul) + '\n';
    }
    s.pop_back();
    return s;
}


// unit test
std::string multi_table(int number);

void do_test(int number, const std::string& expected)
{
    Assert::That(multi_table(number), Equals(expected));
}

Describe(sample_test)
{
    It(basic_tests)
    {
        do_test(5, "1 * 5 = 5\n2 * 5 = 10\n3 * 5 = 15\n4 * 5 = 20\n5 * 5 = 25\n6 * 5 = 30\n7 * 5 = 35\n8 * 5 = 40\n9 * 5 = 45\n10 * 5 = 50");
        do_test(1, "1 * 1 = 1\n2 * 1 = 2\n3 * 1 = 3\n4 * 1 = 4\n5 * 1 = 5\n6 * 1 = 6\n7 * 1 = 7\n8 * 1 = 8\n9 * 1 = 9\n10 * 1 = 10");
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
