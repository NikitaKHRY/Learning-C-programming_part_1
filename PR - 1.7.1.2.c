#include<stdio.h>
#include <math.h>

int main() 
{
	int n = 0, val = 1;
	for ( ; n <= 6; ++n)
	{
		printf ("n = %d\tval = %d\n", n, val = pow(2, n));
	}
}