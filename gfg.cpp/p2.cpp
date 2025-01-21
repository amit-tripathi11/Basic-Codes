#include <iostream>
using namespace std;
int main(){
    int a=9, b=8;
    cout<<"Before swapping a = "<<a<<"and b = "
    <<b<<endl;
    
   //swapping by the use of temporary variable
    int c;
    c=a; a=b; b=c;
    cout<<"After swapping a = "<<a<<" and b = "
    <<b<<endl;

    //swap without temporary variable
    b=a+b;  a=b-a; b=b-a;
    cout<<"Values after swapping a= "<<a<<" b= "<<b<<endl;

    //using inbuilt function swap
    swap(a,b);
    cout<<"After swapping a= "<<a<<" b= "<<b<<endl;

    return 0;
}