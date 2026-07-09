#include<stdio.h>
#include <math.h>

int Function_No1(int n);
int Function_No2(int n);

int main()
{
	int task , num, n1, n2;
	while (1)
	{
		printf("1 - Bonus task No1 - Natural numbers that divisible by each of their digits\n");
		printf("2 - Bonus task No2 - Number of lucky tickets\n");
		printf("3 - Exit \n");
		printf("Choose what you need:\n");
		scanf ("%d", &task);
		switch (task)
		{
			case 3: printf("\nThe program has ended\n"); return 0;
			case 1:
			Bonus_No1( );
			break;
			case 2: 
			Bonus_No2( );
			break;
			default: printf("A non-existent option is selected. Repeat the input\n");
	
		}
	}
}
/*----------------------*/
int Bonus_No1(int n)
{
	int i, j, k, x = 1; 
	printf("\nBonus task No1\n\n");
	printf("Enter a number:\n");
	scanf ("%d", &n);
	for ( i = 1; i != n; i++)
	{
		x = 1;
		j = i;
		for( j = i; j != 0; )
		{
			k = j %10;
			if (k == 0 || i%k!=0)
			{
				x = 0;break;
			}
			j /= 10;
		}
		if (x)
		{
			printf ("%d\n", i);
		}
	}
	printf ("\nend\n\n");
}
/*----------------------*/
int Bonus_No2(int N, int M)
{
	int x=0, sum=0;
	printf("\nBonus task No2\n\n");
	printf("Ticket number M----N\n");
	printf("Enter smaller ticket number from 0 to 9:\n");
	scanf ("%d", &N);
	printf("Enter higher ticket number from 0 to 9:\n");
	scanf ("%d", &M);
	if (N>9 || N<0 || M>9 || M<0)
	{
		printf ("M or N number incorrect\n\n");
		return 0;
	}
	while( x < 10000)
	{
		if (N + x%10 + (x/10)%10 == M + x/1000 + (x/100)%10)
		sum++;
		x++;
	}
	printf ("Number of lucky tickets = %d\n\n", sum);
}