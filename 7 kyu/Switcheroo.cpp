#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <map>

std::string switcheroo(const std::string& s) {
    std::string str{ s };
    std::map<char, char> m{ {'a', 'b'} };
    for (auto& c : str) {
        for (const auto& i : m) {
            if (c == i.first) {
                c = i.second;
                break;
            }
            if (c == i.second) {
                c = i.first;
                break;
            }
        }
    }
    return str;
}



// unit test
Describe(Fixed_tests) {
    It(Sample_cases) {
        Assert::That(switcheroo("abc"), Equals("bac"));
        Assert::That(switcheroo("aaabcccbaaa"), Equals("bbbacccabbb"));
        Assert::That(switcheroo("cccccc"), Equals("cccccc"));
        Assert::That(switcheroo("abababababababab"), Equals("babababababababa"));
        Assert::That(switcheroo("aaaa"), Equals("bbbb"));
        Assert::That(switcheroo("bbbb"), Equals("aaaa"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
