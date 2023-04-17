#include <iostream>
#include <chrono>
 //g++ main.cpp
int main()
{
    using namespace std::chrono;
    uint64_t microsecondss = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    uint64_t millisecondss = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    std::cout << millisecondss << " milliseconds since the Epoch\n";
 
    uint64_t sec = duration_cast<seconds>(system_clock::now().time_since_epoch()).count(); //
    std::cout << sec << " seconds since the Epoch\n";
    uint64_t test = (uint64_t)std::chrono::system_clock::now().time_since_epoch().count(); //Nano seconds
    std::cout << test << " Test \n";
 
    return 0;
}