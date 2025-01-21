#include <iostream>
using namespace std;
int main() {
    int x= 30;
    int *xptr = 0;//Null pointer
    int *p = NULL;
    cout<<&x<<endl;
    cout<<xptr<<endl<<p<<endl;
    xptr=&x;
    cout<<xptr<<endl;
    //reference variable
    int &y =x; //intialisation is a must
    int &z = y;
    cout<<x<<' '<<y<<' '<<z<<endl;
    return 0;
}