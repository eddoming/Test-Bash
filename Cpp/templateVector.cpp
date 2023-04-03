#include <iostream>
#include <vector>
using namespace std;

template <class T, typename A, size_t sizeVector>
class estructura
{
public:
    std::vector<T> mAllocated;
    std::vector<A> mFree;
    estructura()
    {
        mAllocated.reserve(sizeVector);
    }
    estructura(size_t reserve_size)
    {
        mAllocated.reserve(reserve_size);
    }
    T primeraVariable;
    A segundaVariable;
private:
    T terceraVariable;
};

int main()
{
    using levelVector = estructura<int,double,10>;
    levelVector sLevels;
    //estructura<int,double> primerVector;
    return 0;
}