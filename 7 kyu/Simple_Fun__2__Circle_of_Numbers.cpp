#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
auto circleOfNumbers = [](auto n, auto firstNumber) {
	return (firstNumber + n / 2) % n;
};


// unit test
Describe(ExampleTests)
{
	It(should_pass_all_the_tests_provided)
	{
		Assert::That(circleOfNumbers(10, 2), Equals(7));
		Assert::That(circleOfNumbers(4, 1), Equals(3));
		Assert::That(circleOfNumbers(6, 3), Equals(0));
		Assert::That(circleOfNumbers(10, 7), Equals(2));
	}
};



int main()
{
	return TestRunner::RunAllTests();
}
