#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int Task_1();
int Task_2();
int read_mas(int mas[], int, int);
int print_mas(int mas[], int, int);
void read_and_print_rand_mas(int rmas[], int);
int maximum_modulo(int mas[], int, int);
int sorting(int mas[], int, int);
int individual_task(int mas[], int, int);

int main()
{
	int task, dim, mas[dim], rmas[dim];
	while (1)
	{
		printf("\n0 - Exit \n");
		printf("1 - Task #1\n");
		printf("2 - Task #2\n");
		printf("Choose what you need:\n");
		scanf ("%d", &task);
		switch (task)
		{
			case 0: printf("\nPractical lesson No.10 is stopped\n"); return 0;
			case 1:
			Task_1();
			break;
			case 2:
			Task_2();
			break;
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}		
}
//--------------------------
int Task_1()
{
	int choice, dim, key=0;
	printf ("\n Array Size: \n");
	scanf ("%d", &dim);
	int mas[dim], rmas[dim];
	while (1)
	{
		printf("\nkey=%d\n",key);
		printf("0 - Exit \n");
		printf("1 - Input array value and size\n");
		printf("2 - Output array value\n");
		printf("3 - An array of random integers\n");
		printf("4 - Finding the maximum modulo element and its number\n");
		printf("5 - Sorting the array in descending order\n");
		printf("Choose what you need:\n");
		scanf ("%d", &choice);
		switch (choice)
		{
			case 0: printf("\nTask 1 is stopped\n"); return 0;
			case 1:
				key = read_mas( mas, dim, key);
				break;
			case 2:
				print_mas( mas, dim, key);
				break;
			case 3:
				read_and_print_rand_mas( rmas, dim);
				break;
			case 4:
				maximum_modulo( mas, dim, key);
				break;
			case 5:
				sorting( mas, dim, key);
				break;
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
//--------------------------
int Task_2()
{
	int choice, dim = 50, key=0;
	printf ("\n Array Size: \n");
	scanf ("%d", &dim);
	int mas[dim], rmas[dim];
	while (1)
	{
		printf("\n0 - Exit \n");
		printf("1 - Input array value and size\n");
		printf("2 - An array of random integers\n");
		printf("3 - Individual task\n");
		printf("Choose what you need:\n");
		scanf ("%d", &choice);
		switch (choice)
		{
			case 0: 
				printf("\nTask 1 is stopped\n"); 
				return 0;
			case 1:
				key = read_mas( mas, dim, key);
				break;
			case 2:	
				read_and_print_rand_mas( rmas, dim);
				break;
			case 3:
				individual_task( mas, dim, key);
				break;				
			break;
			default: 
			printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
//--------------------------
int read_mas( int mas[], int dim, int key)
{
	printf ("\n Array Input: \n");
	int i;
	for ( i=0; i<dim; i++){
		printf ("%d-st element: ", i+1);
		scanf ("%d", &mas[i]);
	}
	return 1;
}
//--------------------------
int print_mas(int mas[], int dim, int key)
{
	int i;
	if (key==0){
		printf ("\n Required to enter an array \n");
		return 0;
	}
	printf ("\n Array Output: \n");
	for ( i=0; i<dim; i++){
		printf ("mas[%d] = %d\n", i, mas[i]);
	}
	printf ("key = %d\n", key=1);
}
//--------------------------
void read_and_print_rand_mas(int rmas[], int dim)
{
	printf ("\n Random generation: \n");
	srand(time(NULL));
	for ( int i=0; i<dim; i++){
		rmas[i] = rand()%201-100;
	}
	printf ("\n Array Output: \n");
	for ( int i=0; i<dim; i++){
		printf ("rmas[%d] = %d\n", i+1, rmas[i]);
	}
}
//--------------------------
int maximum_modulo(int mas[], int dim, int key)
{
	int i, max, nmax;
	if (key==0){
		printf ("\n Required to enter an array \n");
		return 0;
	}
	for (i=0; i < dim; i++)
	{
		if (abs(mas[i])>abs(max))
		{
			max = mas[i];
			nmax = i;
		}
	}
	printf ("\n\nMaximum modulo element = %d\nNumber of the maximum modulo element = %d\n", max, nmax+1);	
}
//--------------------------
int sorting(int mas[], int dim, int key)
{
	int i, j, p;
	if (key==0){
		printf ("\n Required to enter an array \n");
		return 0;
	}
	printf ("\n\nSorting the array in descending order\n");	
	for ( j=0; j<=dim-1; j++)
	{
		for ( i=0; i<=dim-1; i++)
		{
			if (mas[j]>mas[i])
			{
				p = mas[j];
				mas[j] = mas[i];
				mas[i] = p;
			}
		}
	}
	for (i=0; i < dim; i++)
	printf ("%d\t", mas[i]);
}
//--------------------------
int individual_task(int mas[], int dim, int key)
{
	int i, p, min, nmin, ask=0;
	if (key==0){
		printf ("\n Required to enter an array \n");
		return 0;
	}
	min=mas[0];
	for (i=0; i < dim; i++)
	{
		if (mas[i]<=min)
		{
			min = mas[i];
			nmin = i;
		}
	}
	printf ("\nMin = %d\nNumber of the min = %d\n", min, nmin+1);
	for (i=0; i < dim; i++)
	{
		if (mas[i] < 0)
		{
			if (ask==0)
			{
				ask = 1;
				continue;	
			}
			p = mas[i];
			mas[i] = mas[nmin];
			mas[nmin] = p;
			break;	
		}		
	}
	for (i=0; i < dim; i++)
	{
		printf ("%d\t", mas[i]);
	}	
}