#include <iostream>

using namespace std;
int main()
{
    // integer modifiers
    // 1.signed and unsigned integers

    signed int num1{-12};
    signed int num2{12};
    // unsigned int num2 {-12};//error.
    cout << "num1 :" << num1 << endl;
    cout << "num2 :" << num2 << endl;

    // 2.short and long integers
    short int num3{12};
    short signed int num4{-12};
    cout << "size of short int : " << sizeof(num3) << "bytes" << endl; // 2bytes
    cout << "size of short int : " << sizeof(num4) << "bytes" << endl; // 2bytes

    long int num5{-5};
    cout << "size of long int : " << sizeof(num5) << "bytes" << endl; // 4 or 8 bytes

    long long int num6{-6};
    cout << "size of long long int : " << sizeof(num6) << "bytes" << endl; // 8bytes
    return 0;
}