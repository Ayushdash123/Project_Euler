#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int primef(long int n, long int x)
{while(n%2==0)
 {cout<<"2";x=2;
  n=n/2;}
 for(int i=3; i<=sqrt(n);i+=2)
 {while(n%i==0)
  {cout<<i<<endl;
  if(i>x)
    x=i;
    n=n/i;}}
if(n>2)
cout<<n<<endl;
return(x);
}
int main()
{long int x ,n ,a;
 n=600851475143;
cout<<"Prime factors are "<<endl;
a=primef(n,x);

cout<<"\nThe Largest prime factor is "<<a;
return(0);}
