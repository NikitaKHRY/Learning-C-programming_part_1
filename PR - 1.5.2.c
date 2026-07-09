#include <stdio.h>
#include <math.h>

int main ()
{
	float x = 0, y = 0;
	printf("Enter x= ");
	scanf("%f", &x);
	printf("Enter y= ");
	scanf("%f", &y);
	if (pow(x,2)+pow(y,2) <= 2 && pow(x+y,2) >= 0.5)
	{
		printf("\nThe point belongs to the figure A");
	}
	else
	{
		printf("\nThe point is outside of the figure A");
	}
}