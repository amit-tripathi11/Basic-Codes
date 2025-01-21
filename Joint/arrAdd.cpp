#include <iostream>
using namespace std;
int main(){
    int arr[10]={2,3,4,5,6};
    cout<<arr<<endl;//address of the array

    int * ptr=arr;
    cout<<*(ptr+2)<<endl;
    for(int i=0; i<5; i++){
        cout<<ptr<<" Data "<<*(ptr)<<endl;
        ptr=ptr+1;//takes to the next address as 1024,1028,1032,...
        }
        for(int i=0; i<10; i++){
            cout<<*(arr+i)<<',';//same as arr[i]
        }
     cout<<endl;
    cout<<arr[3]<<endl;
    //POinter + Int-> Forward in the array
    cout<<*(arr + 2)<<endl;
    //pointer + int-> backward in the array
    cout<<*(arr-2)<<endl;//garbage value

    //Subtraction of two pointers
    int *ptr1 = arr+1;
    int *ptr2 = arr+7;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<(ptr2 - ptr1)<<endl;
    return 0;
}