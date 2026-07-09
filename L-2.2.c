#include <stdio.h>
#include <math.h>

int main ()
{
	float x = 0, y = 0;
	printf("Enter x= ");
	scanf("%f", &x);
	printf("Enter y= ");
	scanf("%f", &y);
	if (x<=0 && abs(x) + abs(y) >= 1 && abs(x) + abs(y) <= 3)
	{
		printf("\nGets into");	
	}
	else
	{
		printf("\nMisses");
	}
	return 0;
}