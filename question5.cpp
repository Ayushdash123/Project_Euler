#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main()
{
    long long hcf = 1, lcm = 1;
    int i;

    for(i = 2; i <= 20; i++)
    {
        hcf = gcd(lcm, i);
        lcm = (lcm * i) / hcf;
    }

    cout<<"The Lcm is: "<<lcm;
    return 0;
}
