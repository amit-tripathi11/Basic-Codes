#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string list[6] = {"crocodile", "peacock", "parrot", "anaconda", "elephant", "lion"};
    //a student has to find the animals whose name is greater than 7 to write his project
    int nw = 0;
    for(int i =0; i<6; i++){
        nw = list[i].length();
        if(nw>7){
            cout<<list[i]<<endl;
        }
    }
  return 0;
}