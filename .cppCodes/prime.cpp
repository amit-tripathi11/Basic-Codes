#include <iostream>
using namespace std;
int main(){
    int i, num;
    cin>>num;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
            cout<<num<<" is a prime number."<<endl;
    }
    else{
        cout<<"It is non-prime.";
    }
    return 0;
}