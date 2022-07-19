#include <iostream>
using namespace std;
int main()
{

    bool isBoy{true};
    cout << boolalpha;                                       // to print true or false instead of 0 or 1
    cout << "size of boolean is :" << sizeof(isBoy) << endl; // 1
    cout << isBoy << endl;

    bool isGreen{true};
    bool isBlue{false};

    if (isGreen == true)
    {
        cout << "you can continue" << endl;
    }
    else if (isBlue)
    {
        cout << "you can wait" << endl;
    }
    else
    {
        cout << "stop!" << endl;
    }
}