#include <iostream>
using namespace std;

int main()
{

    // regular increment or decrement (+1 or -1)
    int value = 4;
    value = value + 1; // same as

    // compound assignment
    value += 1;

    value = value - 1; // same as

    // compound assignment
    value -= 1;

    // postfix increment or decrement (value-- or value++)

    value = 5;
    cout << "the value is (incrementing): " << value++ << endl; // 5
    cout << "the value is : " << value << endl;                 // 6

    // prefix increment or decrement (--value or ++value)

    value = 5;
    cout << "the value is (decremented) : " << --value << endl; // 4
    cout << "the value is : " << value << endl;                 // 4
    cout << "the value is (incremented) : " << ++value << endl; // 5

    return 0;
}