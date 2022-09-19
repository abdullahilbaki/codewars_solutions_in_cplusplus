#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
int basicOp(char op, int val1, int val2) {
    return (op == '+') ? val1 + val2 :
        (op == '-') ? val1 - val2 :
        (op == '*') ? val1 * val2 :
        val1 / val2;
}

// unit test
Describe(basic_op_samples)
{
    It(basic_tests) {
        Assert::That(basicOp('+', 5, 4), Equals(9));
        Assert::That(basicOp('-', 11, 8), Equals(3));
        Assert::That(basicOp('*', 3, 4), Equals(12));
        Assert::That(basicOp('/', 16, 4), Equals(4));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
