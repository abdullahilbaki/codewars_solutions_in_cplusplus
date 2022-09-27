#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
bool tidyNumber(int number)
{
    int previous_digit{ 10 };
    while (number)
    {
        int remainder{ number % 10 };
        number /= 10;
        if (previous_digit < remainder) return 0;
        previous_digit = remainder;
    }

    return 1;
}




// unit test
Describe(Tidy_Number_Tests)
{
    It(Check_Small_Values)
    {
        Assert::That(tidyNumber(12), Equals(true));
        Assert::That(tidyNumber(32), Equals(false));
        Assert::That(tidyNumber(39), Equals(true));
    }
    It(Check_Larger_Values)
    {
        Assert::That(tidyNumber(1024), Equals(false));
        Assert::That(tidyNumber(12576), Equals(false));
        Assert::That(tidyNumber(13579), Equals(true));
    }

};


int main()
{
    return TestRunner::RunAllTests();
}
