#include <stdio.h> 
#include <math.h> 

int main() 
{
	int num, n1=0, n2=0, n3=0, n4=0; 
	printf("Enter your number: ");
	scanf("%d",&num);
	n1 = abs(num / 1000);
	n2 = abs((num / 100) % 10);
	n3 = abs((num / 10) % 10);
	n4 = abs(num % 10);
	printf("units= %d\n", n4);
	printf("dozens= %d\n", n3);
	printf("hundreds= %d\n", n2);
	printf("thousands= %d\n", n1);
	if (n1 == n4 || n2 == n3)
	{
		printf("Parallel!");
	}
	else
	{
		printf("Not parallel!");
	}
}