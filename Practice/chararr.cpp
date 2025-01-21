#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char arr[100];
    //cin>>arr;// can print only one word or the string until it get terminated by space
    cin.getline(arr,100,'@');//using to print the line of string
    //'@' denotes delimiter i.e. it stops reading when @ comes  
    cout<<strlen(arr)<<endl;//use string.h header file
    cout<<arr<<endl;
    return 0;
}