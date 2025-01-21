#include <iostream>
using namespace std;
bool isPrimeOptimised(int n){
    if(n==1||n==0){return false;}
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printPrimes(int A, int B){
    int cnt=1;
    for(int i=A; i<=B; i++){
        if(isPrimeOptimised(i)){
            cout<<i<<", ";
            cnt++;
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
}
int main(){
    printPrimes(1,100);
    return 0;
}