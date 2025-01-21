#include <iostream>
using namespace std;
bool isPrimeOptimised(int n){
    //iterating from 2 to n^1/2
    // to find sq. root n you can make your own code or use inbuilt function
    //else use i*i<=n same as i<=(n)^1/2 
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    //to tackle the 1 and 0
    if(n==1||n==0){return false;}
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<(isPrimeOptimised(n) ? "Prime": "Non-Prime");
    return 0;
}