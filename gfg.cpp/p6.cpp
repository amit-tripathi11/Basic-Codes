#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (true) {
        int a, b;
        cin >> a >> b;
        if (i == a) {
            break;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}
