#include <cassert>

int summation(int num) {
    int sum{};
    for (int i{}; i <= num; i++) sum += i;
    return sum;
}

int main()
{
    assert(summation(1) == (1));
    assert(summation(8) == (36));

    return 0;
}
