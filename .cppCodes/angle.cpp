#include <iostream> 
#include<iomanip>
using namespace std;

#include <bits/stdc++.h> 
int findAngle(int hour, int minute) {
    // Write your code here.
    float h1 = hour*5.00;
    float h2 = (minute*0.082544);
    float hpos = h1 + h2;
    float m1 = 1*minute;
    float sub;
    int angle;
    if(hpos > m1) {
        sub = hpos - m1;
    }
    else {
        sub = m1 - hpos;
    }
    angle = sub*6;
    return angle;
}
int main() {
    cout << findAngle(3, 10);
    cout<<endl;
    return 0;
}