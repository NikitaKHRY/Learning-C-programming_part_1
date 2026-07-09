#include<stdio.h>
#include <math.h>

int Task1(int);
int Task2(int);
int Task3(int);

int main()
{
	int task , num;
	while (1)
	{
		printf("1 - Task No1 - Factorial \n");
		printf("2 - Task No2 - Fibonacci\n");
		printf("3 - Task No3 - Composite or Prime number\n");
		printf("4 - Exit \n");
		printf("Choose what you need:\n");
		scanf ("%d", &task);
		switch (task)
		{
			case 4: printf("\nThe program has ended\n"); return 0;
			case 1:
			Task1(num);
			break;
			case 2:
			Task2(num);
			break;
			case 3:
			Task3(num);
			break;
			default: printf("A non-existent option is selected. Repeat the input\n");
	
		}
	}
}
/*----------------------*/
int Task1(int n)
{
	int i=1,f=1;
	printf("\nFunction No1\n\n");
	printf("Enter a number:\n");
	scanf ("%d", &n);
	for( ; i<=n; i++)f*=i;
	if (f<pow(10,9))
		printf ("The factorial is equal to %d\n\n", f);
	else printf ("Factorial is too big\n\n");
	return f;
}
/*----------------------*/
int Task2(int n)
{
	int fib_sum, fib1 = 1, fib2 = 1, i = 0;
	printf("\nFunction No2\n\n");
	printf("Enter a number:\n");
	scanf ("%d", &n);
	if (n==0){
		fib2 = 0;
	}
	else {
	
		while (i < abs(n)-2)
		{
			fib_sum = fib1 + fib2;
	    	fib1 = fib2;
	    	fib2 = fib_sum;
	    	i++;
		}
		if (n<0){
			fib2 = fib2 * pow(-1,abs(n)-1);
		}
	}
	printf ("The %d Fibonacci number is equal to %d\n\n", n, fib2);
}
/*----------------------*/
int Task3(int n)
{
	int r, x;
	printf("\nFunction No3\n\n");
	printf("Enter a number:\n");
	scanf ("%d", &n);	
	for (r=2; r<=(sqrt(n)); r++)
	{	
		if (n%r==0)
		{
			printf("This is composite number - 0\n\n", x = 0);                            
			return 0;
	    }
	}
	printf("This is prime number - 1\n\n", x = 1);
	return x;
}