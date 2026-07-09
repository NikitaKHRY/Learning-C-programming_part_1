#include<stdio.h>
#include <math.h>

int main()
{
    float S=1, y, x, r=1, f=1;
	printf("Enter X: ");
	scanf("%f", &x);
	while(fabs(x*pow(log(2),r)/f)>pow(10,-4))
	{
		f *=  r;
		S += pow(x,r)*pow(log(2),r)/f;
		r++;
		printf("S(%f) = %f\t+S(%f) = %e\n", x, S, x, x*pow(log(2),r)/f);
	}	
	printf("S(%.0f) = %f\ty(%.0f) = %f", x, S, x, y = pow(2,x));
}