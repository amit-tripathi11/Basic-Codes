#include<iostream> 
#include<math.h> 
#define err 0.0001
using namespace std; 
float iterative(float x)
{
   return (cos(x)+1)/3;
}
float f(float x)
{
   return cos(x)-3*x+1;
}
int main()
{
  int i=1;
  float x0,x1;
  cout<<"f(x)=cos(x)-3x+1\n"; 
  cout<<"Enter the first approximation"; 
  cin>>x0;
  x1=iterative(x0); 
  <<"Iteration\t\tRoot\n"; 
while(fabs(x1-x0)>err)
{
   cout<<"X"<<i<<"\t"<<x1<<endl;
   x0=x1;
   x1=iterative(x0);
   i