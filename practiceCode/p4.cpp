#include <iostream>
using namespace std;

int print(int a) {
    a = a + 2;
    cout << a << " ";
    while(a<8){
        print(a);
        a++;
    }
    cout << "ok " ;
    return a;
}
int main() {
    int a = 'a';
    char l = 'a';
    int count = 26;
    while(count) {
        cout << l <<" ";
        count --;
        l++;
    }
    cout << endl;
    cout << print(2) <<endl;
    cout << a << endl;
    return 0;
}