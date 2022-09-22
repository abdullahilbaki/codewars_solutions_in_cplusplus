#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
std::string bumps(std::string road) {
    int bump{};
    for (auto i : road) {
        if (i == 'n') {
            bump += 1;
        }
    }
    return (bump > 15) ? "Car Dead" : "Woohoo!";
}

// unit test
Describe(bumps_tests)
{
    It(basic_tests)
    {
        Assert::That(bumps("n"), Equals("Woohoo!"));
        Assert::That(bumps("__nn_nnnn__n_n___n____nn__nnn"), Equals("Woohoo!"));
        Assert::That(bumps("nnn_n__n_n___nnnnn___n__nnn__"), Equals("Woohoo!"));
        Assert::That(bumps("_nnnnnnn_n__n______nn__nn_nnn"), Equals("Car Dead"));
        Assert::That(bumps("______n___n_"), Equals("Woohoo!"));
        Assert::That(bumps("nnnnnnnnnnnnnnnnnnnnn"), Equals("Car Dead"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
