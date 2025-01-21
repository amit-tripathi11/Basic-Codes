#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   
    int a=23;
    float b=2.1234;
    double c=5.234567;
    cout<<a<<endl;
    cout<< fixed << setprecision(5) <<b <<endl;
    cout<<fixed << setprecision(5) <<c;
    return 0;
}