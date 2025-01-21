#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,5,6};
    cout<<arr<<endl;
    cout<<&arr<<endl;//same as arr
    cout<<arr + 1<<endl;
    // Pointer to 0th element of the array
    int * p1=arr;
    p1++;
    cout<<p1<<endl;
    cout<<(*p1)<<endl;

    //Pointer to the entire array
    int (*ptr)[10];
    ptr=&arr;//as arr is read only so we can't use it in assigning the value
    //so we use &arr

    cout<<"Pointer to Array  "<<ptr<<endl;
    cout<<ptr + 1<<endl; //location after the array, jumps by 40 locations as 10 elementsin array
    //int *ptr[6]; //array of 6 pointers

    //Dereferencing the pointer to an array
    cout<<(*p1)<<endl; // a[0]
    cout<<(*ptr)<<endl; //arr

    return 0;
 }