#include <iostream>
using namespace std;

// AND(&&) OR(||) NOT(!)
int main()
{
    // AND
    int number = 0;
    int number2 = 10;

    if (number == 0 && number2 == 10)
    {
        cout << "AND Is correct" << endl;
    }

    // OR
    bool a{true};
    bool b{false};

    if (a || b)
    {
        cout << "this is a or b" << endl;
    }

    // NOT

    if (a && !b)
    {
        cout << "this is a and not b" << endl;
    }
    return 0;
}