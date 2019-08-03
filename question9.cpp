#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	
	for(c = 1; c < 500; c++)
	{
		for(b = 1; b < c; b++)
		{
			for(a = 1; a < b; a++)
			{
				if(pow(a,2) + pow(b,2) == pow(c, 2) && a + b + c == 1000)
				{
					cout<<"The numbers are: "<<a<<b<<c<<endl;
					cout<<" product is: "<<a*b*c;
				}
			}
		}
	}
	
	
return 0;	
}
