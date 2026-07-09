#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void Task1();
void Task2();
void input_rmas (int* mas, int, int, int);
void output_mas (int* mas, int, int);
void OP_1 (int* mas, int, int);
void OP_2 (int* mas, int, int, int, int);

int main()
{
	int task;
	while (1)
	{
		printf("1 - Task No1\n");
		printf("2 - Task No2\n");
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
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
/*----------------------*/
void Task1()
{
	int N, r=20;
	printf("Set the size of the square matrix:");
	scanf("%d", &N);
	int mas[N][N];
	input_rmas( &mas[0][0], N, N, r);
	output_mas( &mas[0][0], N, N);
	OP_1( &mas[0][0], N, r);
	output_mas( &mas[0][0], N, N);	
}
/*----------------------*/
void Task2()
{
	int M, N, k, p, r=20;
	printf("Set the number of rows:");
	scanf("%d", &M);
	printf("Set the number of columns:");
	scanf("%d", &N);
	printf("Enter k:");
	scanf("%d", &k);
	printf("Enter p:");
	scanf("%d", &p);	
	int mas[M][N];
	input_rmas( &mas[0][0], M, N, r);
	output_mas( &mas[0][0], M, N);
	OP_2( &mas[0][0], k, p, M, N);
}
/*----------------------*/
void input_rmas( int* mas, int t, int u, int r)
{
	srand(time(NULL));
	int i, j;
	for ( i=0; i<t; i++)
	{
		for ( j=0; j<u; j++)
		{
			mas[i*u+j] = rand()%r+1;
		}
	}
	mas[i] = rand()%r+2;
}
/*----------------------*/
void output_mas(int* mas, int t, int u)
{
	printf ("\n Matrix Output: \n");
	int i, j;
	for ( i=0; i<t; i++)
	{
		for ( j=0; j<u; j++)
		{
			printf ("%d\t", mas[u*i+j]);
		}
		printf ("\n");
	}
}
/*----------------------*/
void OP_1(int* mas, int N, int r)
{
	int min = r+5, i, j;
	for ( i=0; i<N; i++)
	{
		for ( j=0; j<N; j++)
		{
			if (mas[i*N+j] < min)
			{
				min = mas[i*N+j];
			}
		}
	}
	printf ("Min = %d\n",min);
	for ( i=0; i<N; i++)
	{
		for ( j=0; j<N; j++)
		{
			mas[i*N+j] -= min;
		}
	}
}
/*----------------------*/
void OP_2(int* mas, int k, int p, int t, int u)
{
	int i, j;
	double dob=1;
	for ( i=0; i<t; i++)
	{
		for ( j=k; j<p-1; j++)
		{
			dob *= mas[u*i+j];
		}
	}
	printf ("Product = %.lf\n", dob);
}