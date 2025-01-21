#include <iostream>
#include <string.h>
using namespace std;
int main(){
   char arr[100] = { 'a','b','c','d','\0'};
   
   cout<<strlen(arr)<<endl;\
   cout<<arr[2]<<arr<<endl;

   char c[]="Hello";

   cout<<strlen(c)<<endl;
   cout<<sizeof(c)<<endl;

   strcpy(arr,"Hi everyone");//assigning new value to the array
   // char *ptr=arr;
   // cout<<(void *)ptr<<endl;//printing the address
    //cout<<(void *)arr<<endl;
    cout<<c<<endl;
    cout<<arr<<endl;
    strlen(arr);//length
    cout<<"size: "<<sizeof(arr)<<endl;
    cout<<"Length: "<<strlen(arr);
    return 0;
}