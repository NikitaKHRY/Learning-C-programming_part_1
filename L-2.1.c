#include<stdio.h>
#include <math.h>

int main() 
{
	int num = 0;
	printf("Enter four-cut number: ");
	scanf("%d", &num);
	if(num / 1000 == 0 || (num / 100) % 10 == 0 || (num / 10) % 10 == 0 || num % 10 == 0)
	{
		printf("At least one 0");
		return 0;
	}
	else
	{
		printf("Not a single zero");
		return 0;
	}
}