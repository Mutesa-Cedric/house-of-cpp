#include <iostream>
// auto let the compiler deduce the type for you

using namespace std;
int main()
{
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int modifier suffexes
    auto var6{123u};  // unsigned int
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    cout << "var1 occupies : " << sizeof(var1) << " bytes " << endl;
    cout << "var2 occupies : " << sizeof(var2) << " bytes " << endl;
    cout << "var3 occupies : " << sizeof(var3) << " bytes " << endl;
    cout << "var4 occupies : " << sizeof(var4) << " bytes " << endl;
    cout << "var5 occupies : " << sizeof(var5) << " bytes " << endl;
    cout << "var6 occupies : " << sizeof(var6) << " bytes " << endl;
    cout << "var7 occupies : " << sizeof(var7) << " bytes " << endl;
    cout << "var8 occupies : " << sizeof(var8) << " bytes " << endl;
    return 0;
}
