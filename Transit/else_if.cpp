#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the student's marks "<<endl;
    cin>>marks;
    if(marks>=81 && marks<=100)
    {
        cout<<"Student got A grade "<<endl;
    }
    else if(marks>=61 && marks<=80)
    {
        cout<<"Student got B grade "<<endl;
    }
    else if(marks>=41 && marks<=60) 
    {
        cout<<"Student got C grade "<<endl;
    }
    else if(marks<=40 && marks>=0){
      cout<<"Student got D grade "<<endl;
    }
    else {
    cout<<"Data not found "<<char(2)<<endl;
    }
    return 0;
}