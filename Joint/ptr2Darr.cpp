#include <iostream>
using namespace std;
//Passing a 2D array to a function using Row Pointer
void accept2DArray(int (*ptr)[4]){
    cout<<"Address of row 0 "<<ptr<<endl;
    cout<<"Address of row 1 "<<ptr + 1<<endl;
}
//Another way
void accept2Darr(int arr[][4]){
    cout<<"Address of Row 0 "<<arr<<endl;
    cout<<"Address of Row 1 "<<arr+1<<endl;
}
int main(){
    //Pointers & 2D arrays (Multidimensional arrays)
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<"Arr "<<arr<<endl;
    cout<<"Address of 0,0 "<<&arr[0][0]<<endl;
    cout<<"Address of 0,1 "<<&arr[0][1]<<endl;
    cout<<"Arr + 1 "<<arr+1<<endl; //Row pointer
    cout<<"Address of 1,0 "<<&arr[1][0]<<endl;

    accept2DArray(arr);
    accept2Darr(arr);
    return 0;
}