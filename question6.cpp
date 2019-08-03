#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int sum_square = 0;
	int square_sum = 0;
	int diff = 0;
	int sum = 0;
	
	
	for(int i = 1; i <= 100; i++)
	{
		square_sum += pow(i,2);
		sum += i;
		sum_square = pow(sum,2);	
	} 
	
	diff = sum_square - square_sum;
	cout<<diff;
	
return 0;	
}
