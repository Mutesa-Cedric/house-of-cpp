#include <iostream>
using namespace std;
int main(){
    // compile time error:
    // std::cout<<"hello world"<<std::endl

    // runtime error:
    int value=6/0;
    cout <<"value: ";cout<<value<<endl;

    // 8/0; // when compiling , you will get a warning.(division by zero)

    return 0;
}

