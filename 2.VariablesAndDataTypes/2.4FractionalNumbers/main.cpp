#include <iostream>

/*
    we have:
    * float:size->4bytes , precision->7
    * double:size->8bytes , precision->15
    * long double:size->16bytes , precision->15+
*/
using namespace std;
int main()
{
    // float

    float x = 9.44321322222;
    // floats allows only 7 numbers;
    cout << "x is : " << x << endl;                             // 9.44321
    cout << "the size of float is : " << sizeof(float) << endl; // 4
    // double
    double y = 2.33333333233333333;
    cout << "y is : " << y << endl;
    cout << "the size of double is : " << sizeof(double) << endl; // 8

    // long double
    long double z = 4.34444444444443423232323232323232;
    cout << "z is : " << z << endl;
    cout << "the size of long double is : " << sizeof(long double) << endl; // 16

    // scientific notation
    double number{1.900023e8};               // number * 10 power 8
    double number2{444399999993434332.3e-8}; // number * 10 power -8
    double number3{0.000000000345};
    cout << number << endl;
    cout << number2 << endl;
    cout << number3 << endl;
    return 0;
}