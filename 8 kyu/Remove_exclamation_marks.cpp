#include <string>
#include <cassert>

// solution
std::string removeExclamationMarks(std::string str) {
    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
    return str;
}

int main()
{
    // basic tests
    assert(removeExclamationMarks("Hello World!") == ("Hello World"));
    assert(removeExclamationMarks("Hello World!!!") == ("Hello World"));
    assert(removeExclamationMarks("Hi! Hello!") == ("Hi Hello"));
    assert(removeExclamationMarks("Hi!!! Hello!") == ("Hi Hello"));
    assert(removeExclamationMarks("Hi! He!l!lo!") == ("Hi Hello"));

    return 0;
}
