
// C++ code to demonstrate working of all_of()
#include <vector>
#include <algorithm>
#include <iostream>
int main()
{
    std::vector<int> v(10, 2);
    
    // illustrate all_of
    if (std::all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 0; }))
    {
        std::cout << "All numbers are even\n";
    }

    // Initializing array
    int ar[6] = {1, 2, 3, 4, 5, -6};
    // Checking if all elements are positive
    std::all_of(ar, ar+6, [](int x) { return x>0; })?
        std::cout << "All are positive elements" << std::endl :
        std::cout << "All are not positive elements" << std::endl;
    return 0;
}
