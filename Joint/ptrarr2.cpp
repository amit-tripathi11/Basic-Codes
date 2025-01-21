#include <iostream>
using namespace std;
void accept2DArray(int (*ptr)[4]){
    cout<<"Address of Row 0 "<<ptr<<endl;
    cout<<"Address of Row 1 "<<ptr+1<<endl;
    int i=1;
    int j=2;
    cout<<*(*(ptr+i) + j)<<endl; //ptr[i][j]
    cout <<ptr[i][j]<<endl;

}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{10,11,12,13}};
    cout<<"Arr "<<arr<<endl;
    cout<<"Address of 1,0 "<<&arr[1][0]<<endl;
    accept2DArray(arr);
    return 0;
}