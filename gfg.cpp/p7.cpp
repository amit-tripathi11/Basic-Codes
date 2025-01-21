#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a=34;
    const int b=45;
   // b=42;
    a=32;
    cout<<a<<" and "<<b<<endl;
   
    //random function
    for (int i = 0; i < 5; i++)
    cout << rand() << " ";

    return 0;
}