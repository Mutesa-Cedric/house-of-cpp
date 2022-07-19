#include <iostream>

/*

in memory integers take 4 bytes

int variables are declared in two ways:
* braced initialization
* functional initialization

*/
using namespace std;
int main()
{
     // assignment initialization
     int age1 = 12;

     // braced initialization
     int age2{12};

     // functional initialization
     int age3(12);
     int age4(12.4);

     // checking size with sizeof
     int ageSize = sizeof(age1);

     int ageX{}; // 0
     int ageY;   // 0

     int age5{12.4}; // error. narrowing is not possible for bracced declaration
     cout << "age1"
          << " " << age1 << endl;
     cout << "age2"
          << " " << age2 << endl;
     cout << "age3"
          << " " << age3 << endl;
     cout << "age4"
          << " " << age4 << endl;
     // cout<<"age5"<<" "<<age5<<endl;
     cout << "the size of int is:  " << ageSize << "bytes" << endl;
     cout << "age x :" << ageX << endl;
     cout << "age y :" << ageY << endl;

     return 0;
}