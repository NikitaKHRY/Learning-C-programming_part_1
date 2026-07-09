#include<stdio.h>
#include <math.h>

void Task1();
void Task2();
void Task3();
void Task4();
double factorial(double);

int main()
{
	int task;
	while (1)
	{
		printf("\n\n0 - Exit\n");
		printf("1 - Task No1\n");
		printf("2 - Task No2\n");
		printf("3 - Task No3\n");
		printf("4 - Task No4 \n");
		printf("Choose what you need:\n");
		scanf ("%d", &task);
		switch (task)
		{
			case 0: printf("\nThe program has ended\n"); return 0;
			case 1:
				Task1();
				break;
			case 2:
				Task2();
				break;
			case 3:
				Task3();
				break;
			case 4:
				Task4();
				break;
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}	
}
/*----------------------*/
void Task1()
{
	int r=1, n, n1=0, n2=0, sum=0;
	printf ("Enter 10 natural numbers:\n");
	while (r<=10)
	{
		scanf("%d", &n);
		n1 = n;
		while(n1 != 0)
		{
			n2 = n1;
			n1 /= 10;
		}
		n1 = n%10;
		if (n1 == n2)
		{
			sum += n;
		}
		r++;
	}
	printf ("The sum is equal %d", sum);	
}
/*----------------------*/
void Task2()
{
	int N, n1, k, n=0, d;
	printf("Enter natural number: ");
	scanf("%d", &N);
	printf("Enter number system: ");
	scanf("%d", &k);
	n1=N;
	while(n1/k>0)
	{
		n++;
		n1/=k;
	}
	do
	{
		d=N/pow(k,n);
		if(d>9)
		{
			switch (d)
			{
			case 10:
			printf ("A");
			break;
			case 11:
			printf ("B");
			break;
			case 12:
			printf ("C");
			break;
			case 13:
			printf ("D");
			break;
			case 14:
			printf ("E");
			break;
			case 15:
			printf ("F");
			break;
			}
		}
		else printf; 
		{
			printf("%d",d);
		}
		N-=d*pow(k,n);
		n--;
	}while(n>=0);	
}
/*----------------------*/
void Task3()
{
	double S, F=0, f=0, x, k, degree = pow(10,-6);
	for ( x=0; x<0.9; x+=0.1)
	{
		k=0;
		do
		{	
			F+=f;
			f = pow(-1,k)*(pow(3,2*k)+3)*(pow(x,2*k+1))/factorial(2*k);
			++k;
		}while(fabs(f) > degree);
		S = F -4*pow( cos(x), 3);
		printf ("x=%.1lf\tF=%.5lf\tS=%.5lf\tdelta=.5lf\n", x, F, S, F-S);
	} 	
}
/*----------------------*/
void Task4()
{
	float x, Fx, Rx;
	int k;
	for ( x=-0.1; x<1.6; x+=0.1)
	{
		if (x<0.85)
		{
			Fx=1+sqrt(1+exp(x));
		}
		else
		{
			Fx=1-sqrt(1+exp(x));
		}
		Rx=Fx;
		for ( k=1; k<=5; k++)
		{
			Rx += (1+pow(x,k))/(1+exp(k*x));
		}
		printf ("\nx = %.1f \t F(x) = %.2f \t R(x) = %.3f", x, Fx, Rx);
	}	
}
/*----------------------*/
double factorial(double n) 
{
	double factorial = 1;
	while (n > 1)
	{
    	factorial *= n;
    	n--;
	}
	return factorial;}