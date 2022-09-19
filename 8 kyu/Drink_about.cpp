#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string people_with_age_drink(int age)
{
    return  (age < 14) ? "drink toddy" :
        (age < 18) ? "drink coke" :
        (age < 21) ? "drink beer" :
        "drink whisky";

}

// unit test
Describe(Fixed_tests) {
    It(Should_drink_toddy) {
        Assert::That(people_with_age_drink(0), Equals("drink toddy"));
        Assert::That(people_with_age_drink(13), Equals("drink toddy"));
    }
    It(Should_drink_coke) {
        Assert::That(people_with_age_drink(14), Equals("drink coke"));
        Assert::That(people_with_age_drink(17), Equals("drink coke"));
    }
    It(Should_drink_beer) {
        Assert::That(people_with_age_drink(18), Equals("drink beer"));
        Assert::That(people_with_age_drink(20), Equals("drink beer"));
    }
    It(Should_drink_whisky) {
        Assert::That(people_with_age_drink(21), Equals("drink whisky"));
        Assert::That(people_with_age_drink(25), Equals("drink whisky"));
    }
};

int main()
{
    return TestRunner::RunAllTests();
}
