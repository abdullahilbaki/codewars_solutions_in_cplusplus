#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
int final_grade(int exam, int projects)
{
    if(exam > 90 || projects > 10)
        return 100;
    else if(exam > 75 && projects > 4)
        return 90;
    else if(exam > 50 && projects > 1)
        return 75;
    else
        return 0;
}

// unit test
Describe(Students_Final_Grade)
{
    It(Fixed_tests)
    {
        Assert::That(final_grade(100, 12), Equals(100));
        Assert::That(final_grade(85, 5), Equals(90));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
