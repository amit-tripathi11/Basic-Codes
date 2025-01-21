#include <iostream>
using namespace std;
//pass by reference using pointer variable
void incMoney(int *moneyPtr){
       cout<<moneyPtr<<endl;
       (*moneyPtr)=2*(*moneyPtr);
       cout<<(*moneyPtr)<<endl;
}
//pass by reference using reference variable
void incMoney(int &myMoney){
    myMoney=3*myMoney;
    cout<<"My Money: "<<myMoney<<endl;
    }
int main(){
    int money = 20;
    incMoney(&money);
    incMoney(money);
    cout<<"Main: "<<money<<endl;
    return 0;
}