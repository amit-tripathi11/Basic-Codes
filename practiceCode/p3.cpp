#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print the first n prime numbers
void printPrimes(int n) {
    int count = 0;
    int num = 2; // Starting from the first prime number

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of prime numbers to print: ";
    cin >> n;

    printPrimes(n);

    return 0;
}
