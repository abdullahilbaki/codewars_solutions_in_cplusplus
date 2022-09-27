#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>
#include <algorithm>

std::string flyBy(std::string lamp, std::string drone) {
    std::replace(drone.begin(), drone.end(), '=', 'o');
    std::replace(drone.begin(), drone.end(), 'T', 'o');

    return drone.append(lamp.begin() + static_cast<unsigned>(drone.length()), lamp.end());
}


// unit test
Describe(Fly_tests)
{
    It(Basic_tests)
    {
        Assert::That(flyBy("xxxxxx", "====T"), Equals("ooooox"));
        Assert::That(flyBy("xxxxxxxxx", "==T"), Equals("oooxxxxxx"));
        Assert::That(flyBy("xxxxxxxxxxxxxxx", "=========T"), Equals("ooooooooooxxxxx"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
