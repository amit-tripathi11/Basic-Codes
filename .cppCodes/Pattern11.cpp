#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //Dabangg Pattern
    
    int i=1;
    while(i<=n){
        //1st
        int k=1;
        while(k<=n-i+1){
            cout<<k;
            k++;
        }
        //2nd
        int star = 2*i-2;
        while(star){
            cout<<"*";
            star--;
        }
        //3rd
        int j=n-i+1;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
        //for printing all stars in the last row
        /*while(i==n+1){
            int p=1;
            while(p<=2*n){
                cout<<"*";
                p++;
            }
            break;
        }*/
    }
    return 0;
}