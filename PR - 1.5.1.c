#include <stdio.h>
#include <math.h>

int main ()
{
	float x = 0,fx;
	printf("Enter number: ");
	scanf("%f", &x);
	printf("x= %.1f\n",x);
	if(x<-2. || x>2.)
	{
		printf("F(x)=%d", fx = 0);
		return 0;
	}
	if(x > -1. && x < 1.)
	{
		printf("F(x)=x^3= %.3f",fx = pow(x,3));
		return 0;
	}
	if(x > -2. && x < -1. || x > 1. && x < 2.)
	{
		printf("F(x)=x= %.3f",fx = x);
		return 0;
	}
	if(x == -2. || x == -1. || x == 1. || x == 2.)
	{
		printf("Does not exist");
		return 0;
	}
}