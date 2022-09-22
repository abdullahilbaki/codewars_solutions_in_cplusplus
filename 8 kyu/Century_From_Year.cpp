#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
int centuryFromYear(int year)
{
    return (year / 100) + ((year % 100 == 0) ? 0 : 1);
}

// unit test
Describe(Century_From_The_Year)
{
    It(EXtract_The_Century_From_Given_Year)
    {
        Assert::That(centuryFromYear(1705), Equals(18));
        Assert::That(centuryFromYear(1900), Equals(19));
        Assert::That(centuryFromYear(1601), Equals(17));
        Assert::That(centuryFromYear(2000), Equals(20));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
