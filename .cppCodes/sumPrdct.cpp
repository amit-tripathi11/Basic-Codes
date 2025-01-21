#include<iostream>
using namespace std;

int subtractPdnSm(int n) {
    int sum = 0;
    int product = 1;
    while(n) {
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n /= 10;
    }
    return product - sum;
}

int main() {
    int n ;
    cin >> n;
    cout << subtractPdnSm(n);
    return 0;
}