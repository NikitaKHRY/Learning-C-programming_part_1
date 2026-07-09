#include<stdio.h>
#include <math.h>

int main() 
{
	char opn;
	float n1, n2;
	double sum = 0;
	printf("Specify the operation you want to do: \n\tamount + \n\tdifference - \n\tmultiplications * \n\tseparation / \n");
	scanf("%s", &opn);
	printf("Enter first number: ");
	scanf("%f", &n1);
	printf("Enter second number: ");
	scanf("%f", &n2);
	
	switch (opn)
	{
		case '+':
		{
			printf("\nSum = %f", sum = n1 + n2);break;
		} 
		case '-':
		{
			printf("\nSum = %f", sum = n1 - n2);break;
		}
		case '*':
		{
			printf("\nSum = %f", sum = n1 * n2);break;
		} 
		case '/':
		{
			if(n2 != 0)
			{
				printf("\nSum = %f", sum = (n1 / n2));break;break;
			}
			else
			{
				printf ("Can't divide by zero");break;break;
			}
		}		
		default: printf ("ERROR");
	}
}