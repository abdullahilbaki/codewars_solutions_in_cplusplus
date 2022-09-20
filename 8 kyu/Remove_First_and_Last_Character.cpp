#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string sliceString(std::string str)
{
    str.pop_back();
    str.erase(str.begin());
    return str;
}

// unit test
Describe(Slicing_String)
{
    It(Check_Short_Length_String)
    {
        Assert::That(sliceString("tuna"), Equals("un"));
        Assert::That(sliceString("rats"), Equals("at"));
        Assert::That(sliceString("code"), Equals("od"));
    }
    It(Check_Longer_String)
    {
        Assert::That(sliceString("country"), Equals("ountr"));
        Assert::That(sliceString("place"), Equals("lac"));
        Assert::That(sliceString("translation"), Equals("ranslatio"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
