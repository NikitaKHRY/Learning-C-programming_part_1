#include<stdio.h>
#include <math.h>

int main() 
{
	int num = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	switch (num % 4)
	{
		case 0:
		{
			printf("%d = 4 * %d", num, num / 4);break;
		} 
		case 1:
		{
			printf("%d = 4 * %d + 1", num, num / 4);break;
		}
		case 2:
		{
			printf("%d = 4 * %d + 2", num, num / 4);break;
		} 
		case 3:
		{
			printf("%d = 4 * %d + 3", num, num / 4);break;
		}		
		default: printf ("ERROR");
	}
}