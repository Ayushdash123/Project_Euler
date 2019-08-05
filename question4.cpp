#include <iostream>
using namespace std;

int reverse(int no)
{
	int digit, rev = 0;
	
	while(no != 0)
	{
		digit = no % 10;
		rev = (rev * 10) + digit;
		no /= 10;
	}
	
	return rev;
}


int main()
{
	int no1, no2, product;
	int rev = 0;
	int n, l_palin = 0;
	
	for(no1 = 999; no1>=100; no1--)
	{
		for(no2 =999; no2 >= 100; no2--)
		{
			product = no1 * no2;
			n = product;
			
			rev = reverse(product);
			
			if(rev == n && rev > l_palin)
			{
				l_palin = rev;
				
			}
			
		}
	}
cout<<l_palin;

	
return 0;	
}
