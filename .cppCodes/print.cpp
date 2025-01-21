#include <iostream>
using namespace std;

int main(){
    cout << int("Hello world") << endl;
    int a = 2;
    cout << ~a << endl;
    int b = 5;
    cout << (a ^ b) << endl; // ^ denotes bitwise XOR
    cout << (17 >> 2) << endl; //  17/2^2 = 17/4 = 4
    cout << (19 << 2) << endl; //  19*2^2 = 76

    return 0;
}