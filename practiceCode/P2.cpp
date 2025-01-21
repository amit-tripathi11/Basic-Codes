#include<iostream> 
using namespace std;
    // print the unique element in an array
void counter(int arr[], int n) {
    int cnt;
    for(int i = 0; i<n; i++) {
        cnt = 0;
        for(int j = 0; j<n; j++) {
            if(arr[i] == arr[j]) {
                cnt++;
            }       
        }
        if(cnt == 1) {
            cout << arr[i] << " is the unique element in this array" << endl;
            break;
        }
    }
    if(cnt != 1) {
        cout << "No unique element is found " << endl;
    }
}
int main() {
    int data[10] = {2, 1, 2, 3, 12, 1, 3, 2, 4, 12};

    counter(data, 10);

    return 0;
}