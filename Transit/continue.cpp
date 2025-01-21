#include <iostream>
using namespace std;
int main(){
    int i=0;
    while(i<=20){
        if(i%8==0){
            //cout<<"Multiple of 8"<<endl;
            i=i+1;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}