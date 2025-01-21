#include<iostream>
#include<string.h>
using namespace std;
void Comment(int n){
    char text[500];
    cin.getline(text, 500);
    cout<<(++n)<<endl;
    cout<<text<<endl;
}
int main(){
    int nc=90;//no. of comments
    cout<<"Number of comment is  "<<nc<<endl;
    Comment(nc);
    return 0;
}