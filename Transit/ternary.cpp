#include <iostream>
using namespace std;
int main(){
    int temp;
    string weather;
    cin>>temp;
    //cout<<(temp>36 ? "Hot" : " Pleasant")<<endl;
    weather = temp>36 ? "Hot" : "Pleasant";
    cout<<weather<<endl;
    return 0;
}