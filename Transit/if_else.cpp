#include <iostream>
using namespace std;
int main(){
    int money;
    string Choice;
    cout<<"Do you want to buy somethihng?"<<endl;
    cin>>Choice;
    if (Choice=="YES") {  

    cout<<"Enter the money you have "<<endl;
    cin>>money;
    if(money>=15){
        cout<<"Lets buy the phone "<<endl;
        cout<<"Thanks for shopping "<<endl;
    }
    else {
    cout<<"Don't worry EMI is available on the selected product"<<endl;
    cout<<"Continue your shopping  YES = 1 or   NO = 0 "<<endl;
    int y;
    cin>>y;
    {if (y>=1){
        cout<<"Thanks for shopping"<<endl;
    }
    else{
    cout<<"Can show you another product?"<<endl;
    }}}}
    cout<<"Thanks for visit "<<char(3)<<endl;
    return 0;
}