#include<stdio.h>
#include <math.h>

int main()
{
    int n, r;
	printf("Enter a natural number from one to infinity to check if it is a natural number: ");
	scanf("%d", &n);	
	for (r=2; r<=(sqrt(n)); r++)
	{
	    if (n%r==0)
		{
			printf("This is Composite number");
			return 0;
	    }
	}
    printf("This is a prime number");
}