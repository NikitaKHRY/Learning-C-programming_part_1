#include<stdio.h>
#include<math.h>

int main() 
{
	float N, r = 3, s = 1, k1 = 2 , k2 = 1;
	printf("Enter number: ");
	scanf("%f", &N);
	printf("A1 = 1\n");
	printf("A2 = 2\n");
	for( ; N>=r; r++)
	{
		printf("A%.0f = %f\n", r, s = (k1 + k2 + 1)/r);		
		k2 = k1;
		k1 = s;
	}
}