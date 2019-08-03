#include <iostream>
using namespace std;

int main()
{
	int first= 1, second = 1;
	int i = 1, sum = 0;
	while(i < 4000000)
	{
		first = second;
		second = i;
		i = first + second;
		
		if(i % 2 == 0)
			sum += i;
		
	}
	
	cout<<"sum is: "<<sum;
	
	
return 0;	
}
