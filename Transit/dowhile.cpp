#include <iostream>
using namespace std;
int main() {
    int money;
    cin>>money;
   do{
    cout<<"Shopping with money "<<money<<endl;
    money=money-1;
   }
   while(money>0);
   return 0;
}