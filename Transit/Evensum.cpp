#include <iostream>
using namespace std;
int main() {
    int i,n;
    cin>>n;
    int sum=0;
    for(i=1;i<=n;i++){
        int no;
        cin>>no;
         
        if(no%2==0){
           sum=sum+no; 
        }
    }
    cout<<"Sum of evens is "<<sum<<endl;
    return 0;
    }