#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <algorithm>
#include <string>

std::string vaporcode(const std::string& str) {
    std::string result{};
    for (auto& i : str) {
        if (i != ' ') result = result + i + "  ";
    }
    result.erase(result.length() - 2);
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);

    return result;
}


// unit test
Describe(Vaporcode) {
    It(BasicTests) {
        Assert::That(vaporcode("Let's go to the movies"), Equals("L  E  T  '  S  G  O  T  O  T  H  E  M  O  V  I  E  S"));
        Assert::That(vaporcode("Why isn't my code working?"), Equals("W  H  Y  I  S  N  '  T  M  Y  C  O  D  E  W  O  R  K  I  N  G  ?"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
