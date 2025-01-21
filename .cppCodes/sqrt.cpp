#include <iostream>
#include<cmath>
using namespace std;
     // It's wrong
int main()
{
    int x;
    cin >> x;
    int z = x;
    int sum = 0;
    int count = 0;
    while (z != 0)
    {
        int digit = z % 10;
        count++; 
        z = z / 10;
       
    }
    while (count > 0)
    {
        int l = x % 10;
        int no = l * pow(10, count);
        sum = sum + no;
        x = x / 10; 
        count--; 
        
       
    }
    cout << sum;

    return 0;
}
