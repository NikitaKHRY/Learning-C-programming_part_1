#include <stdio.h> 
#include <math.h>
int main() 
{
	double L=-756, B=62*pow(10,2), C=4.5*pow(10,-3), K=-0.0032, X=-4.5*pow(10,3), Y=3.14; 
	printf("L=%10.f\t",L);
	printf("C=%10.1e\t",C);
	printf("X=%10.1e\n",X);
	printf("B=%10.1e\t",B);
	printf("K=%10.4f\t",K);
	printf("Y=%10.2f\t",Y);
	return 0;
}