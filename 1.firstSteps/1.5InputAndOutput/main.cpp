#include <iostream>
#include <string.h>
/*
I/O streams:

std::cout=>printing data to the console
std::cin=>reading data from the console
std::clog=>printing log messages to the console
std::cerr=>printing error messages to the console

*/
using namespace std;
int main()
{
    // std::cout
    cout << "Hello output!" << endl;
    cout << "my age is :" << 17 << endl;

    // error
    cerr << "Error : something went wrong!" << endl;

    // log
    clog << "log : Hello output!" << endl;

    // reading data from terminal
    string lastName;
    int age;
    string fullName;

    cout << "Enter your lastname: " << endl;
    cin >> lastName;

    cout << "Enter your age: " << endl;
    cin >> age;

    // reading all inputs together
    // 1st way
    cout << "Enter your name and age : " << endl;
    cin >> lastName >> age;
    cout << "Yoor name is : " << lastName << " and your age is : " << age << endl;

    // 2nd way: using getline
    cout << "Enter your fullname : " << endl;
    getline(cin, fullName);
    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "your fullName is : " << fullName << " and your age is :" << age << endl;

    return 0;
}