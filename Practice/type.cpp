#include <iostream>
using namespace std;
int main(){
    cout<<(5/2)<<endl;
    char m = 3;
    cout<<m<<endl;
    //char+int
    char letter ='a'; 
    cout<< letter + 3<<endl;
    letter =letter+2;
    cout<<letter<<endl;
    cout<< (true + 2.3)<<endl;//bool+float=float
    cout<<(false + 'A')<<endl;//bool+char=int there, as the expression is used otherwise it would be char
    return 0;
}