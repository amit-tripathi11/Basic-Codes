#include<iostream>
using namespace std;
int main(){
    int guess;
    int tries=0;
    cout<<"I have a number between 1-10"<<endl;
    cout<<"Guess it in 3 tries to win a pen! "<<endl;
    cin>>guess;
    tries++;
    while(guess!=2 && tries<=3){
        cout<<"Wrong guess"<<endl;
        cin>>guess;
        tries++;
    }
    if(guess==2){
        cout<<"Yes you got it!!"<<endl;
    }
}