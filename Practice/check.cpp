#include <iostream>
using namespace std;
int main(){
   int a,c;
   cin>>a>>c;
   a++;
   cout<<char(a<c)<<endl;
   cout<<a<<endl<<c<<endl;
   int m = 1, n = 3, p;
   p = n << m;
   n = p * (n * (++m)--);
   m = m >> n;
   cout<< n << m <<endl;//n=36, m=0
   return 0; 
}