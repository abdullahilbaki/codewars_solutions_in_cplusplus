#include <cassert> // for assert

// solution
int basicOp(char op, int val1, int val2) {
    return (op == '+') ? val1 + val2 :
           (op == '-') ? val1 - val2 :
           (op == '*') ? val1 * val2 :
                         val1 / val2 ;
}

int main()
{
    // basic tests
    assert(basicOp('+', 5, 4) == (9));
    assert(basicOp('-', 11, 8) == (3));
    assert(basicOp('*', 3, 4) == (12));
    assert(basicOp('/', 16, 4) == (4));

    return 0;

}
