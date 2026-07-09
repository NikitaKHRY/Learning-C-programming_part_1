#include <stdio.h>
#include <math.h>

int main() 
{
	int factorial = 0, result = 1;
	printf ("Enter factorial:");
	scanf("%d", &factorial);
	if (factorial > 0)
	{
		while ( factorial > 1 )
		{
			result *= factorial ;
			factorial--;
		}
	}
	else if (factorial < 0)
	{
		printf ("Result does not exist");
		return 0;
	}
	printf ("Result = %d", result);
}