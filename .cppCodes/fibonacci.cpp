#include <iostream>
using namespace std;

//to print first n fibonacci number
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i <= (n-2); i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";
        a = b;        
        b = nextNumber;        
    }
    return 0;
}