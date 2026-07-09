#include <stdio.h>
#include <math.h>
int main ()
{
 int a1, a2, a3, k, N ;
 printf ("This program converts a three digit number with any base and\nconverts the number to base 10 \n\n");
 printf ("The number consists of a1-a2-a3 \n");
 printf ("Enter the first digit:");
 scanf ("%d", & a1 );
 printf ("Enter the second digit:");
 scanf ("%d", & a2 );
 printf ("Enter the third digit:");
 scanf ("%d", & a3 );
 printf ("Enter the basis:");
 scanf ("%d", & k );
 N = a1*(k*k)+a2*k+a3;
 printf("The number N=%d",N);
 getchar ( );
 return 0;
}