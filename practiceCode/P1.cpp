#include <iostream>
using namespace std;

    // Swap alternate element in an array
    void swapAlt(int arr[], int n) {
    int i = 0;
    int j = n-1;
    while(i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Alternate element swapped array is:- " << endl;
    for(int m = 0; m < n; m++) {
        cout << arr[m] << " ";
    }
    cout << endl;
}
void print(int * duck, int size) {
    for(int l = 0; l<size; l++) {
        cout << duck[l] << " ";
    }
    cout << endl;
}
int main() {
    int arr[10] = {2, 5, 3, 22, 31, 9, 10, 23, 44};
    int n = sizeof(arr)/sizeof(int);
    cout << "Array Size: " << n << endl;
    print(arr,n);
    swapAlt(arr, n);
    return 0;
}