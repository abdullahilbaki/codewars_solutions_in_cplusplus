#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals)
{
    return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}

// unit test
Describe(Sample)
{
    It(Tests)
    {
        Assert::That(goals(0, 0, 0), Equals(0));
        Assert::That(goals(43, 10, 5), Equals(58));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
