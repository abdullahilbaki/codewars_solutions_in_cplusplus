#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

bool feast(std::string beast, std::string dish) {
    return beast[0] == dish[0] && beast.back() == dish.back();
}


// unit test
Describe(Feast) {
    It(BasicTests) {
        Assert::That(feast("great blue heron", "garlic naan"), Equals(true));
        Assert::That(feast("chickadee", "chocolate cake"), Equals(true));
        Assert::That(feast("brown bear", "bear claw"), Equals(false));
        Assert::That(feast("marmot", "mulberry tart"), Equals(true));
        Assert::That(feast("porcupine", "pie"), Equals(true));
        Assert::That(feast("electric eel", "lasagna"), Equals(false));
        Assert::That(feast("slow loris", "salsas"), Equals(true));
        Assert::That(feast("ox", "orange lox"), Equals(true));
        Assert::That(feast("blue-footed booby", "blueberry"), Equals(true));
        Assert::That(feast("blue-footed booby", "binary human"), Equals(false));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
