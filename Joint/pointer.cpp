#include <iostream>
using namespace std;
int main(){
    int x=3, y=4;
    int * xptr= &x;
    int * yptr= &y;
    cout<<xptr<<endl<<&x<<endl;//same address
    cout<<yptr<<endl<<&y<<endl;//same address
    cout<<&xptr<<endl<<*(&x)<<endl;//*(&x)=*xptr
    cout<<*xptr<<endl;//Dereference Operator prints the value pointed to by pointer
    return 0;
}