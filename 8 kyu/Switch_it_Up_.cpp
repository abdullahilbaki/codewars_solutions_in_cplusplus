#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string switch_it_up(int number) {
    switch (number) {
    case 1: return "One";
    case 2: return "Two";
    case 3: return "Three";
    case 4: return "Four";
    case 5: return "Five";
    case 6: return "Six";
    case 7: return "Seven";
    case 8: return "Eight";
    case 9: return "Nine";
    default:return "Zero";
    }
}


// unit test
Describe(Switch_it_Up)
{
    It(Fixed_tests)
    {
        Assert::That(switch_it_up(0), Equals("Zero"));
        Assert::That(switch_it_up(1), Equals("One"));
        Assert::That(switch_it_up(2), Equals("Two"));
        Assert::That(switch_it_up(3), Equals("Three"));
        Assert::That(switch_it_up(4), Equals("Four"));
        Assert::That(switch_it_up(5), Equals("Five"));
        Assert::That(switch_it_up(6), Equals("Six"));
        Assert::That(switch_it_up(7), Equals("Seven"));
        Assert::That(switch_it_up(8), Equals("Eight"));
        Assert::That(switch_it_up(9), Equals("Nine"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
