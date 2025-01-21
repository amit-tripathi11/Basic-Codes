#include<iostream>
using namespace std;
int main(){
    int pin;
    int cnt=0;
    cout<<"Enter the pin: "<<endl;
    cin>>pin;
    cnt++;
    while(pin!=1256 && cnt<=10){
        cout<<"Please try again! "<<endl;
        cin>>pin;
        cnt++;
    }
    if(pin==1256){
        cout<<"Welcome!!"<<endl;
    }
}