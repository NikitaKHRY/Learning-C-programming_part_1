#include<stdio.h>
#include<math.h>

int main() 
{
	int N , sum , r = 0;
	printf("The sum of the series will exceed: ");
	scanf("%d", &N);
	do
	{
		r++;
		sum += pow(pow(-1,r-1)*r,3);
		
	}while (sum < N);
	printf("Number of the application in which the sum of the row exceeds %d: %d",N ,r);
}