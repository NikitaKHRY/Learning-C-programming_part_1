#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void input_rmas ( int* mas, int G, int S, int E);
void excellent_and_good ( int* mas, int G, int S, int E);

int main()
{
	int G = 3, S = 25, E = 4;
	int SR[G][S][E];
	input_rmas (&SR[0][0][0], G, S, E);
	excellent_and_good (&SR[0][0][0], G, S, E);
}
/*----------------------*/
void input_rmas ( int* mas, int G, int S, int E)
{
	srand(time(NULL));
	int i, j, k;
	for ( i=0; i<G; i++)
	{
		for ( j=0; j<S; j++)
		{
			for ( k=0; k<E; k++)
			{
				mas[i*S+j*E+k] = rand()%5+1;
				printf("mas[%d][%d][%d] = %d\n", i, j, k, mas[i*S+j*E+k]);
			}
			printf("\n");
		}
	}
}
/*----------------------*/
void excellent_and_good ( int* mas, int G, int S, int E)
{
	int i, j, k, e=0, g=0;
	for ( i=0; i<G; i++)
	{
		for ( j=0; j<S; j++)
		{
			if( mas[i*S+j*E+0] == 5 && mas[i*S+j*E+1] == 5 && mas[i*S+j*E+2] == 5 && mas[i*S+j*E+3] == 5)e++;
			if( mas[i*S+j*E+0] >= 4 && mas[i*S+j*E+1] >= 4 && mas[i*S+j*E+2] >= 4 && mas[i*S+j*E+3] >= 4)g++;
		}
	}
	printf("Excellent(5) = %d\nGood(4) = %d", e, g);
}