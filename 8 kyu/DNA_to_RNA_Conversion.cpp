#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string DNAtoRNA(std::string dna) {
    std::replace(dna.begin(), dna.end(), 'T', 'U');
    return dna;
}

// unit test
Describe(DNA_to_RNA)
{
    It(Sample_Test)
    {
        Assert::That(DNAtoRNA("GCAT"), Equals("GCAU"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
