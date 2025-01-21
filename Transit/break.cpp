#include <iostream>
using namespace std;
int main(){
    int cal=0;
    int mom_calls_up=3;

    while(cal<50){
        cout<<"Running and burning "<<cal<<endl;
        if(cal==mom_calls_up){
            break;
        }
        cal = cal+1;
    }
    cout<<"Workout complete "<<cal <<endl;
//Problem 2
    int i,N;
    cin>>N;
    for(i=2; i<N; i++){
        if(N%i==0){
            break;
        }
    }
    //i keeps iterating into the loop until its condition is true
    //and at last step when the condition does not followed it comes out of the loop with an updated value
    cout<<i<<endl;
    //out of the loop
    if(i==N){
        cout<<"Prime "<<endl;
    }
    else{
        cout<<"No Prime "<<endl;
    }
    return 0;
}