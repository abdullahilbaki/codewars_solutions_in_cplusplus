#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
    std::string aa = a;
    std::string bb = b;
    if (a == "") aa = "0";
    if (b == "") bb = "0";
    return std::to_string(std::stoi(aa) + std::stoi(bb));
}

// unit test
Describe(SampleTests)
{
    It(should_pass_sample_tests)
    {
        Assert::That(sum_str("4", "5"), Equals("9"), ExtraMessage(R"(Invalid result for a = "4", b = "5")"));
        Assert::That(sum_str("34", "5"), Equals("39"), ExtraMessage(R"(Invalid result for a = "34", b = "5")"));
        Assert::That(sum_str("42", ""), Equals("42"), ExtraMessage(R"(Invalid result for a = "42", b = "")"));
        Assert::That(sum_str("", "42"), Equals("42"), ExtraMessage(R"(Invalid result for a = "", b = "42")"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
