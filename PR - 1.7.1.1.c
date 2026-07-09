#include<stdio.h>
#include <math.h>

int main() 
{
	int n = 0, val = 1;
	while ( n <= 6 )
	{
		printf ("\nn = %d\tval = %d", n, val);
		n++;
		val = pow(2, n);
	}
}