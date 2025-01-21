#include <iostream>
using namespace std;
int main(){
    cout<<(15/2)<<endl;
    int minute = 30;
    float r1 = (minute/12.00);
    cout<<r1<<endl;
    cout<< r1 + 5;
    for(int i=1; i<=5; i++){
        cout<<"Hii"<<endl;
        cout<<"Hey "<<endl;

        continue;              // It skips remaining block of code for that iteration
        cout<<"Reply toh krde";
    }
    return 0;
}