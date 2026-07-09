#include<stdio.h>
#include<math.h>

int main() 
{
	int next, previous, sum = 0;
	printf("Enter first number: ");
	scanf("%d", &previous);
	do
	{
		printf("Enter next number: ");
		scanf("%d", &next);
		if(next > previous)
		{
			sum++;
		}
		previous = next;
	}while(next != 0);
	printf("The number of elements in the set that are smaller than their right-hand neighbor: %d ",sum);
}