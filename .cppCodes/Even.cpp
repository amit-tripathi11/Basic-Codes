#include <iostream>
using namespace std;
int main() {
    int i,n,sum;
    cin>>n;
    sum = 0;
    i = 0;
    while(i<=n){          //while(i<=2*n){
        sum = sum + 2*i;   //sum = sum + i;
        i = i + 1;        //i = i +2;
    }                     //}
    cout<<"The sum of first n evens is: "<<sum<<endl;
    return 0;
}