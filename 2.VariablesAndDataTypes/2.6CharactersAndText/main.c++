#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // character
    char char1{'a'};
    cout << "character : " << char1 << endl;
    cout << "sizeof character : " << sizeof(char) << "byte(s)" << endl; // 1byte

    // ASCII character codes
    char mychar = 65; // ascii character for A
    cout << "character value for 65 is : " << mychar << endl;

    // character to int with static_cast
    char mychar2{'b'};
    cout << "value of mychar2 is : " << mychar2 << endl;
    cout << "value of mychar2(int) is : " << static_cast<int>(mychar2) << endl; // 98

    // strings
    string string1{"mutesa cedric"};
    cout << "my string : " << string1 << endl;
    cout << "size of this string : " << sizeof(string1) << "bytes" << endl; // 32 bytes
    string string2{"mutesa"};
    cout << "size of this string : " << sizeof(string2) << "bytes" << endl; // 32 bytes

    return 0;
}