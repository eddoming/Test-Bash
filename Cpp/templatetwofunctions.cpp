#include <iostream>
using namespace std;
template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);
}
//In this program. we have created a class template Number with the code
//Notice that the variable num, the constructor argument n, and the function getNum() are of type Test, or have a return type Test. That means that they can be of any type.
template <class Test>
class Number
{
private:
    Test num;

public:
    // function outside of the class template
    Test OutsidefunctionName();
    Number(Test n) : num(n){}
    
    Test getNum()
    {
        return num;
    }
};
template <class Test>
Test Number<Test>::OutsidefunctionName()
{
    printf("Outside\n");
    return 0;
}
// Example calculator
template <class T>
class Calculator
{
   private:
    T num1, num2;

   public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayResult()
    {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};
int main()
{
    int result1;
    double result2;
    // calling with int parameters
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    Number<int> numberInt(7);
    Number<double> numberDouble(7.7);

    cout << "int Number, getNumber = " << numberInt.getNum() << endl;
    cout << "int Number, OutsidefunctionName = " << numberInt.OutsidefunctionName() << endl;
    cout << "double Number, getNumber = " << numberDouble.getNum() << endl;

    //Number Testint(7); error
    int result3;
    Number<int> numberIntOutSideFunctionName(8);
    cout << "int Number Test= " << numberIntOutSideFunctionName.OutsidefunctionName() << endl;
    //result3 = OutsidefunctionName<int>();

    //Calculator example
    Calculator<int> testIntegerCalculator(5,10);
    Calculator<float> testFloatCalculator(5.5,10.5);
    cout << "Calculator results add= " << testIntegerCalculator.add() << endl;
    testIntegerCalculator.displayResult();
    testFloatCalculator.displayResult();

    return 0;
}