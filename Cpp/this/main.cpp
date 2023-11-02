#include <iostream>
using namespace std;

/* local variable is same as a member's name */
class A
{
private:
    int x;

public:
    void setXinA(int x)
    {
        // The 'this' pointer is used to retrieve the object's x
        // hidden by the local variable 'x'
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

class B
{
private:
    int x;
    int y;

public:
    B(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    B &setXinB(int a)
    {
        x = a;
        return *this;
    }
    B &setYinB(int b)
    {
        y = b;
        return *this;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
    A objI;
    int x = 20;
    objI.setXinA(x);
    objI.print();


    B objII(5, 5);
    objII.print();

    // Chained function calls.  All calls modify the same object
    // as the same object is returned by reference
    objII.setXinB(10).setYinB(20);

    objII.print();

    return 0;
}
