#include <vector>
#include <algorithm> // for is_sorted
#include <cassert>   // for assert

// solution
bool isAscOrder(std::vector<int> arr)
{
    return is_sorted(begin(arr), end(arr));
}

int main()
{
    // test cases
    assert(isAscOrder({ 1, 2 })    == (true)) ;
    assert(isAscOrder({ 2, 1 })    == (false));
    assert(isAscOrder({ 1, 2, 3 }) == (true)) ;
    assert(isAscOrder({ 1, 3, 2 }) == (false));
    assert(isAscOrder({ 2, 1, 3 }) == (false));
    assert(isAscOrder({ 2, 3, 1 }) == (false));
    assert(isAscOrder({ 3, 1, 2 }) == (false));
    assert(isAscOrder({ 3, 2, 1 }) == (false));

    assert(isAscOrder({ 1, 4, 13, 97, 508, 1047, 20058 })        == (true));
    assert(isAscOrder({ 56, 98, 123, 67, 742, 1024, 32, 90969 }) == (false));

    return 0;
}
