#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <algorithm>
std::string reverseString(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}


// unit test
Describe(Reverse_String)
{
    It(Check_Short_Words)
    {
        Assert::That(reverseString("hello"), Equals("olleh"));
        Assert::That(reverseString("rat"), Equals("tar"));
        Assert::That(reverseString("alpha"), Equals("ahpla"));
    }
    It(Check_Longer_Words)
    {
        Assert::That(reverseString("codewars"), Equals("srawedoc"));
        Assert::That(reverseString("football"), Equals("llabtoof"));
        Assert::That(reverseString("translation"), Equals("noitalsnart"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
