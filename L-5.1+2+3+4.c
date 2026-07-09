#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void Task1();
void Task2();
void Task3();
int Task4();
void input_rmas(int mas[], int, int);
void output_mas(int mas[], int);
void result_task_1(int mas[], int);
void input_mas_X_Y(float mas_X[], float mas_Y[], float, int);
void output_intrgral(float mas_Y[], float, int);
int input_grade_all_guests_table(int All_guests[], int Grade[], int Table[], int);
void output_grade ( int Grade[]);
void output_table ( int Table[], int);
int input_add_table ( int Table[], int);
int input_remove_table ( int Table[], int);
void proces_Task3( int rmas[], int);


int main()
{
	int task;
	while (1)
	{
		printf("\n1 - Task No1\n");
		printf("2 - Task No2\n");
		printf("3 - Task No3\n");
		printf("4 - Task No4\n");
		printf("0 - Exit \n");
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
	int dim, r = 2;
	printf ("\n Array Size: \n");
	scanf ("%d", &dim);
	int rmas[dim];
	input_rmas( rmas, dim, r);
	output_mas( rmas, dim);
	result_task_1( rmas, dim);
	}
/*----------------------*/
void Task2()
{
	int N;
	printf ("\nN = ");
	scanf ("%d", &N);
	float mas_X[N], mas_Y[N];
	float dx = (4-0.5)/N;
	input_mas_X_Y( mas_X, mas_Y, dx, N);
	output_intrgral( mas_Y, dx, N);	
}
/*----------------------*/
void Task3()
{
	int dim, i, r = 10;
	printf ("\nN = ");
	scanf ("%d", &dim);
	int rmas[dim];
	input_rmas( rmas, dim, r);
	output_mas( rmas, dim);
	proces_Task3( rmas, dim);
	output_mas( rmas, dim);
}
/*----------------------*/
int Task4()
{
	int task, All_guests[20], Grade[10], Table[20], tab;
	tab = input_grade_all_guests_table( All_guests, Grade, Table, tab);
	output_grade( Grade);
	while (1)
	{
		printf ("\n0 - Exit\n");
		printf ("1 - Show list\n");
		printf ("2 - Add\n");
		printf ("3 - Remove\n");
		printf ("Choose what you need:\n");
		scanf ("%d", &task);
		switch (task)
		{
			case 0: printf ("\nThe program has ended\n"); return 0;
			case 1:
				output_table ( Table, tab);
				break;
			case 2:
				tab = input_add_table ( Table, tab);
				break;
			case 3:
				tab = input_remove_table ( Table, tab);
				break;
			default: printf ("A non-existent option is selected. Repeat the input\n");
		}
	}
}
/*----------------------*/
void input_rmas( int rmas[], int dim, int r)
{
	printf ("\n Random generation: \n");
	srand(time(NULL));
	int i;
	for ( i = 0; i < dim; i++)
	{
		rmas[i] = rand()%r;
	}
}
/*----------------------*/
void output_mas(int mas[], int dim)
{
	printf ("\n Array Output: \n");
	int i;
	for ( i = 0; i < dim; i++)
	{
		printf ("mas[%d] = %d\n", i, mas[i]);
	}
}
/*----------------------*/
void result_task_1( int mas[], int dim)
{
	
	int i, count = 0, max_count = 0;
	for ( i=0; i<dim; i++)
	{
		if( mas[i] == 0) count +=1 ;
		else count = 0;
		if(count > max_count) max_count = count;
	}
	printf("\nThe longest sequence of elements equal to 0 is: %d", max_count);
}
/*----------------------*/
void input_mas_X_Y( float mas_X[], float mas_Y[], float dx, int N)
{
	int i = 0;
	for ( ; i <= N; i++)
	{
		mas_X[i] = (0.5)+i*dx;
		mas_Y[i] = mas_X[i]*sin(mas_X[i]);
		printf ("X(%d)=%.3f\tY(%d)=%.3f\n", i, mas_X[i], i, mas_Y[i]);
	}
}
/*----------------------*/
void output_intrgral(float mas_Y[], float dx, int N)
{
	float S = mas_Y[0] + mas_Y[N];
	int i = 0;
	for ( i = 1; i <= N; i += 2)
	{
		S += 4*mas_Y[i];
	}
	for ( i = 2; i <= N; i += 2)
	{
		S += 2*mas_Y[i];
	}
	S *= (dx/3);
	printf ("Integral = %.3f\n",S);
}
/*----------------------*/
void proces_Task3( int rmas[], int dim)
{
	int i;
	for ( i = 0; i<dim; i++)
	{
		if (i%2==1)
		{
			rmas[i] -= i;
		}
	}
}
/*----------------------*/
int input_grade_all_guests_table(int All_guests[], int Grade[], int Table[], int t)
{
	srand(time(NULL));
	int i, j;
	t=0;
	for ( i=1; i<=20; i++)
	{
		Table[i]=0;
	}
	for ( i=1; i<=20; i++)
	{
		All_guests[i] = rand()%10+1;
		if (All_guests[i] <= 3)
		{
			t++;
			Table[t] = i;
		}
	}
	for ( i=1; i<=10; i++)
	{
		Grade[i]=0;
	}
	for ( i=1; i<=10; i++)
	{
		for ( j=1; j<=20; j++)
		{
			if(All_guests[j]==i)
			{
				Grade[i]++;
			}
		}
	}
	return t;
}
/*----------------------*/
void output_grade( int Grade[])
{	
	int i;
	printf ("Grade\tNumber of votes\n");
	for ( i=1; i<=10; i++)
	{
		printf ("%d\t%d\n", i, Grade[i]);
	}
	printf ("Total\t20\n");
}
/*----------------------*/
void output_table( int Table[], int t)
{
	int i;
	for( i=1; i<=t; i++)
	{
		printf ("\n%d\t%d", i, Table[i]);
	}
}
/*----------------------*/
int input_add_table ( int Table[], int t)
{
	int a, b, i;
	printf ("Enter an item:");
	scanf ("%d", &a);
	printf ("Enter position:");
	scanf ("%d", &b);
	for( i=t;i>=b;i--)
	{
		Table[i+1] = Table[i];
	}
	Table[b] = a;
	t++;
	return t;
}
/*----------------------*/
int input_remove_table ( int Table[], int t)
{
	int a, i;
	printf ("Enter position:");
	scanf ("%d", &a);
	t--;
	for( i=a;i<=t;i++)
	{
		Table[i] = Table[i+1];
	}
	return t;	
}