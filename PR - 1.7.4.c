#include<stdio.h>
#include <math.h>

int main() 
{
	unsigned int n = 0, i, number, count = 0;
	printf ("Enter number of integers:");
	scanf("%d", &n);
	for (i = 0 ;i != abs(n) ;i++ )
	{
		printf ("Enter number:");
		scanf("%d", &number);
		if (number == 0)
		{
			count++;
		}
	}
	printf ("Only %d times out of %d entered 0", count, abs(n));
}