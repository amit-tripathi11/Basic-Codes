#include <iostream>
using namespace std;
int main(){
  int x,y;
  x=5;
y = ++x * ++x;
cout<<x <<y<<endl;

  y= x++ * ++x;
  cout<<x<<y<<endl;
  cout<<(6<<2)<<endl;
  cout<<(5>>3)<<endl;
  int a;
  a=(1,2,3);
  cout<<a<<endl;//Priority for the values assigned to any variable is given from left to right
  a=1,2,3;
  cout<<a<<endl;//Priority for the values inside a brackets () assigned to any variable is given from right to left
  return 0;
}