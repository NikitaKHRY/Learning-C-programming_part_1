#include<stdio.h>
#include <math.h>

int main() 
{
	float vip = 0, previous;
	printf ("Enter the previous current value of the investment portfolio:");
	scanf("%f", &previous);
	for ( ; ; )
	{
		printf ("Enter the current value of the investment portfolio:");
		scanf("%f", &vip);
		if (previous >= vip)
		{
			printf ("Alarm, today's price is lower than yesterday's.");
			return 0;
		}
		previous = vip;
	}
}