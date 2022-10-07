#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <map>

auto DNAStrand = [](const std::string& dna)
{
    std::string str{ dna };
    std::map<char, char> m{ {'A', 'T'}, {'C', 'G'}};
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
};


// unit test
Describe(ExampleTests)
{
    It(BasicTests)
    {
        Assert::That(DNAStrand("AAAA"), Equals("TTTT"));
        Assert::That(DNAStrand("ATTGC"), Equals("TAACG"));
        Assert::That(DNAStrand("GTAT"), Equals("CATA"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
