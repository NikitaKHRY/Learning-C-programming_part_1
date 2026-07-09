#include<stdio.h>
#include<math.h>

int main() 
{
	float b = 1, a = -2, Y;
	while (a <= 4)
	{
		if (a == 0)
		{
			printf ("Y(%.0f)\tCan't divide by zero\n", a);
			a += 0.5;
			continue;
		}
		if (a <= b)
		{
			Y = 2*a/(2+3*pow( fabs(a), 0.5)) + 4*(1+(a+1)/(2*a));
		}
		else
		{
			Y = 2*a/(2+3*pow( fabs(a), 0.5)) + 4*(a+1)/(2*a);
		}
		printf ("Y(%.1f)\t%f\n", a, Y);
		a += 0.5;	
	}		
}