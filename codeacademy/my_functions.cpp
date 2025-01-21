#include <iostream>

void play(int k){
    cout<<"Play for "<<k<<" minutes"<<endl;
}
int gold(int rate, int sell){
    int profit;
    profit=sell*50 - rate;
    cout<<profit; return profit;
}