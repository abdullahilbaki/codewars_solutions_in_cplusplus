#include <vector> 
#include <numeric> // for std::accumulate
#include <cassert>

// solution
int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    for (auto i : b) a.push_back(i);
    return std::accumulate(a.begin(), a.end(), 0);
}

int main()
{
   // basic tests
   assert(arrayPlusArray({ 1, 2, 3 }, { 4, 5, 6 }) == (21));
   assert(arrayPlusArray({ 1, -2, -3 }, { 4, -5, 6 }) == (1));
   assert(arrayPlusArray({ -1, -2, -3 }, { -4, -5, -6 }) == (-21));
   assert(arrayPlusArray({ 0, 0, 0 }, { 4, 5, 6 }) == (15));
   assert(arrayPlusArray({ -1 }, { -1 }) == (-2));

   return 0;
}
