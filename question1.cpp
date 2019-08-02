#include <iostream.h>
using namespace std;

void main()
{
	int  i=0, sum=0;
	
	for(i; i < 1000; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	
	cout<<"The sum is: "<<sum;
	
	
	
return 0;	
}
