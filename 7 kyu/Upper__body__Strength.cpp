#include <cstdlib>
#include <string>  
#include <sstream>
#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
unsigned alexMistakes(unsigned numberOfKatas, unsigned timeLimit) {
    unsigned result{};
    unsigned timeLeft{ timeLimit - (numberOfKatas * 6) };
    unsigned pushupTimes{ 5 };
    while (timeLeft >= pushupTimes)
    {
        timeLeft -= pushupTimes;
        pushupTimes *= 2;
        result++;
    }
    return result;
}


// unit test
void dotest(unsigned k, unsigned t, unsigned expected) {
    unsigned actual = alexMistakes(k, t);
    std::stringstream ss;
    ss << "Test failed with numberOfKatas = " << k << " and timeLimit = " << t << std::endl;
    Assert::That(actual, Equals(expected), ExtraMessage(ss.str()));
}

Describe(tests)
{
    It(sample_tests)
    {
        dotest(10, 120, 3);
        dotest(11, 120, 3);
        dotest(3, 45, 2);
        dotest(8, 120, 3);
        dotest(6, 60, 2);
        dotest(9, 180, 4);
        dotest(20, 120, 0);
        dotest(20, 125, 1);
        dotest(20, 130, 1);
        dotest(20, 135, 2);
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
