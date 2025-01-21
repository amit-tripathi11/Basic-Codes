#include <iostream>
using namespace std;
int main(){
    //Compound operator
    int a=26;
    a+=4;
    cout<<a<<endl;//30
    a-=6;
    cout<<a<<endl;//24
    a*=4;
    cout<<a<<endl;//96
    a%=13;
    cout<<a<<endl;//5
    a/=2;
    cout<<a<<endl;//2
    if(a>0){
        cout<<"Yes it is greater than the given number"<<endl;
    }
    //Bitwise operator
    int b=5;
    cout<<(a&b)<<endl;//0
    cout<<(a|b)<<endl;//7
    cout<<(~5)<<endl;//-6
    cout<<(a^7)<<endl;//5
    return 0;
}