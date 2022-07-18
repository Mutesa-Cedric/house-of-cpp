#include <iostream>
using namespace std;

int addNumbers(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int main()
{

    int num1{10}; // statement
    int num2{20};

    cout << "firts number: " << num1 << endl;//10
    cout << "secont number: " << num2 << endl;//20

    int sum1 = num1 + num2; // this is the same as using the return value of addNumbers function
    int sum2 = addNumbers(num1, num2);

    cout << "first sum" << sum1 << endl;//30
    cout << "second sum" << sum2 << endl;//30

    return 0;
}