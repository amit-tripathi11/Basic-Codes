#include <iostream>
using namespace std;
//Passing data to function via pass by value
void incMoney(int money){
    money = 3*(money);// - ((0.1)*(money)));
    cout<<"Amount: "<<money<<endl;
}
int main(){
    int money;
    cin>>money;
    incMoney(money);
    cout<<"Principal capital: "<<money<<endl;
    return 0;
}