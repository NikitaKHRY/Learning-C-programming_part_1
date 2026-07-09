#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void Task1();
void Task2();
void Task3();
void Task4();

void input_rmas1( int mas[], int, int);
void output_mas1( int mas[], int);
void OP1( int mas[], int);

void input_rmas2( int mat[], int MD[], int , int);
void OP2( int MD[], int);
void output_mas2( int mat[], int MD[], int);

void input_rmas3(int* mat, int, int, int);
void output_mas3(int* mat, int, int, int);
int OP3(int* mat, int, int, int);

void input_rmas4(int* mat, int, int, int);
void output_mas4(int* mat, int, int);
int OP4(int* mat, int, int, int);

int main()
{
	int task;
	while (1)
	{
		printf("\n\t0 - Exit \n");
		printf("\t1 - Task No1\n");
		printf("\t2 - Task No2\n");
		printf("\t3 - Task No3\n");
		printf("\t4 - Task No4\n");
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
	int N, r=20;
	printf("Set the size of the square matrix:");
	scanf("%d", &N);
	int mat[N][N];
	input_rmas1( &mat[0][0], N, r);
	output_mas1( &mat[0][0], N);
	OP1( &mat[0][0], N);
	output_mas1( &mat[0][0], N);
}
/*---------------------*/
void Task2()
{
	int N, r=20;
	printf("Set the size of the square matrix:");
	scanf("%d", &N);
	int mat[N][N], MD[N];
	input_rmas2( &mat[0][0], MD, N, r);
	output_mas2( &mat[0][0], MD, N);
	OP2( MD, N);
	output_mas2( &mat[0][0], MD, N);
}
/*----------------------*/
void Task3()
{
	int r=10, M1, N1, M2, N2, term1 = 2, term2 = 3, k1 = 0, k2 = 0;
	printf("Enter the first parameter for the first matrix:");
	scanf("%d", &M1);
	printf("Enter the second parameter for the first matrix:");
	scanf("%d", &N1);
	printf("Enter the first parameter for the second matrix:");
	scanf("%d", &M2);
	printf("Enter the second parameter for the second matrix:");
	scanf("%d", &N2);
	int MAT_M1_N1[M1][N1], MAT_M2_N2[M2][N2];
	
	input_rmas3( &MAT_M1_N1[0][0], M1, N1, r);
	output_mas3( &MAT_M1_N1[0][0], M1, N1, k1);
	k1 = OP3(&MAT_M1_N1[0][0], M1, N1, term1);
	output_mas3( &MAT_M1_N1[0][0], M1, N1, k1);
		
	input_rmas3( &MAT_M2_N2[0][0], M2, N2, r);
	output_mas3( &MAT_M2_N2[0][0], M2, N2, k2);
	k2 = OP3(&MAT_M2_N2[0][0], M2, N2, term2);
	output_mas3( &MAT_M2_N2[0][0], M2, N2, k2);
}
/*----------------------*/
void Task4()
{
	int r=10, M1, N1, M2, N2, term1 = 1, term2 = 0;
	printf("Enter the first parameter for the first matrix:");
	scanf("%d", &M1);
	printf("Enter the second parameter for the first matrix:");
	scanf("%d", &N1);
	printf("Enter the first parameter for the second matrix:");
	scanf("%d", &M2);
	printf("Enter the second parameter for the second matrix:");
	scanf("%d", &N2);
	int MAT_M1_N1[M1][N1], MAT_M2_N2[M2][N2];
	
	input_rmas4( &MAT_M1_N1[0][0], M1, N1, r);
	output_mas4( &MAT_M1_N1[0][0], M1, N1);
	M1 = OP4(&MAT_M1_N1[0][0], M1, N1, term1);
	output_mas4( &MAT_M1_N1[0][0], M1, N1);	
	
	input_rmas4( &MAT_M2_N2[0][0], M2, N2, r);
	output_mas4( &MAT_M2_N2[0][0], M2, N2);
	M2 = OP4(&MAT_M2_N2[0][0], M2, N2, term2);
	output_mas4( &MAT_M2_N2[0][0], M2, N2);	
}
/*----------------------*/
void input_rmas1( int rmat[], int N, int r)
{
	srand(time(NULL));
	int i, j;
	for ( i=0; i<N; i++)
	{
		for ( j=0; j<N; j++)
		{
			rmat[i*N+j] = rand()%r;
		}
	}
	printf ("\nBefore\n");
}
/*----------------------*/
void output_mas1( int mat[], int N)
{
	int i, j;
	printf ("\n");
	for ( i=0; i<N; i++)
	{
		for ( j=0; j<N; j++)
		{
			printf ("%d\t", mat[i*N+j]);
		}
		printf ("\n");
	}
}
/*----------------------*/
void OP1( int mat[], int N)
{
	int i, j;
	for ( i=0; i<N-1; i++)
	{
		for ( j=0; j<N; j++)
		{
			mat[i*N+j] -= mat[N*(N-1)+j];
		}
	}
	printf ("\nAfter\n");
}
/*----------------------*/
void input_rmas2( int rmat[], int MD[], int N, int r)
{
	srand(time(NULL));
	int i, j, k=0;
	for ( i=0; i<N; i++)
	{
		for ( j=0; j<N; j++)
		{
			rmat[i*N+j] = rand()%r;
			if (i == j)
			{
				MD[k] = rmat[i*N+j];
				k++;
			}
		}
	}	
}
/*----------------------*/
void OP2( int MD[], int N)
{
	int i, j, p;
	for ( i=0; i<N-1; i++)
	{
		for (j=0; j<N; j++)
		{
			if(MD[j] > MD[j+1])
			{
				p = MD[j+1];
				MD[j+1] = MD[j];
				MD[j] = p;
			}
		}
	}	
}
/*----------------------*/
void output_mas2( int mat[], int MD[], int N)
{
	int i, j;
	printf ("\n");
	for ( i=0; i<N; i++)
	{
		for ( j=0; j<N; j++)
		{
			printf ("%d\t", mat[i*N+j]);
		}
		printf ("\n");
	}
	printf ("\n");
	for ( i=0; i<N; i++)
	{
		printf ("%d\t", MD[i]);
	}
	printf ("\n");	
}
/*----------------------*/
void input_rmas3( int* mas, int t, int u, int r)
{
	srand(time(NULL));
	int i, j;
	for ( i=0; i<t; i++)
	{
		for ( j=0; j<u; j++)
		{
			mas[i*u+j] = rand()%r-2;
		}
	}
}
/*----------------------*/
void output_mas3( int* mas, int t, int u, int k)
{
	int i, j;
	for ( i=0; i<t; i++)
	{
		for ( j=0; j<u; j++)
		{
			if(u-k>j)
			{
				printf ("%d\t", mas[u*i+j]);
			}
		}
		printf ("\n");
	}
	printf ("\n");
}
/*----------------------*/
int OP3( int* mas, int t, int u, int term)
{
	int i1, j1, check, i2, j2, k = 0;
	for ( j1=0; j1<u; j1++)
	{
		check = 0;
		for ( i1=0; i1<t; i1++)
		{
			if(mas[u*i1+j1] < 0)
			{
				check ++;
			}
		}
		if(check >= term)
		{
			for( i2=0; i2<t; i2++)
			{
				for( j2=j1; j2<u-1; j2++)
				{
					mas[u*i2+j2] = mas[u*i2+j2+1];
				}
			}
			j1--;
			k++;
		}	
	}
	return k;
}
/*----------------------*/
void input_rmas4( int* mas, int t, int u, int r)
{
	srand(time(NULL));
	int i, j;
	for ( i=0; i<t; i++)
	{
		for ( j=0; j<u; j++)
		{
			mas[i*u+j] = rand()%r-5;
		}
	}
}
/*----------------------*/
void output_mas4( int* mas, int t, int u)
{
	int i, j;
	for ( i=0; i<t; i++)
	{
		for ( j=0; j<u; j++)
		{
			printf ("%d\t", mas[u*i+j]);
		}
		printf ("\n");
	}
	printf ("\n");
}
/*----------------------*/
int OP4( int* mas, int t, int u, int term)
{
	int i1, j1, check, i2, j2;
	for ( i1=0; i1<t; i1++)
	{
		check = 0;
		for ( j1=0; j1<u; j1++)
		{
			if(mas[u*i1+j1] == term)
			{
				check = 1;
			}
		}
		if(check == 1)
		{
			for( j2=0; j2<u; j2++)
			{
				for( i2=i1; i2<t-1; i2++)
				{
					mas[u*i2+j2] = mas[u*(i2+1)+j2];
				}
			}
			t--;
			i1--;
		}	
	}
	return t;
}