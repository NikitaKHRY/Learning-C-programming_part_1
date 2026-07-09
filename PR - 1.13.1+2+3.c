#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int Task1();
int Task2();
int Task3();

int main()
{
	int task;
	while (1)
	{
		printf("1 - Task No1\n");
		printf("2 - Task No2\n");
		printf("3 - Task No3\n");
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
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
/*----------------------*/
int Task1()
{
	float array[10]={1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.01};
	float *ptr_a = array;
	int op, i;
	while (1)
	{
		printf("1 - Optration No1\n");
		printf("2 - Optration No2\n");
		printf("3 - Optration No3\n");
		printf("4 - Optration No4\n");
		printf("0 - Exit \n");
		printf("Choose what you need:\n");
		scanf ("%d", &op);
		switch (op)
		{
			case 0: printf("\nThe program has ended\n"); return 0;
			case 1:
				printf ("array = %p\n&array[0] = %p\n&array = %p\n",array, &array[0], &array);
				break;
			case 2:
				ptr_a = &array[0];
				ptr_a++;
				printf ("%p = %f\n", *ptr_a, *ptr_a);
				ptr_a+=4;
				printf ("%p = %f\n", *ptr_a, *ptr_a);
				ptr_a-=2;
				printf ("%p = %f\n", *ptr_a, *ptr_a);
				break;
			case 3:
				for( ptr_a = &array[0]; ptr_a <= &array[9]; ptr_a+=2)
				{
					printf ("%p = %.2f\n", *ptr_a, *ptr_a);
				}
				break;
			case 4:
				for( ptr_a = &array[9]; ptr_a >= &array[0]; ptr_a--)
				{
					printf ("%p = %.2f\n", *ptr_a, *ptr_a);
				}
				break;
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
/*----------------------*/
int Task2()
{
	int op;
	float *p_B, b , *p_A, a, y, *p_Y;
	printf("a:\n");
	scanf ("%f", &a);
	printf("b:\n");
	scanf ("%f", &b);
	p_A = &a;
	p_B = &b;
	p_Y = &y;
	while (1)
	{
		printf("1 - Optration No1\n");
		printf("2 - Optration No2\n");
		printf("3 - Optration No3\n");
		printf("0 - Exit \n");
		printf("Choose what you need:\n");
		scanf ("%d", &op);
		switch (op)
		{
			case 0: printf("\nThe program has ended\n"); return 0;
			case 1:
				printf ("%p = %.f\n", *p_A, *p_A);
				printf ("%p = %.1f\n", *p_B, *p_B);				
				break;
			case 2:
				y = (5/pow( *p_A, 2))+tan(pow( *p_B, 2));
				break;
			case 3:
				printf ("%p = %f\n", *p_Y, *p_Y);
				break;
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
/*----------------------*/
int Task3()
{
	float s1, s2, h, p1, p2, l, v, s;
	float *p_s1, *p_s2, *p_h, *p_p1, *p_p2, *p_l, *p_v, *p_s;
	const float PI = 3.14159265;
	printf("The first base side of the pyramid:\n");
	scanf ("%f", &s1);
	printf("The second base side of the pyramid:\n");
	scanf ("%f", &s2);
	printf("The height of the pyramid:\n");
	scanf ("%f", &h);
	printf("The first perimeter of the pyramid:\n");
	scanf ("%f", &p1);
	printf("The second perimeter of the pyramid:\n");
	scanf ("%f", &p2);	
	printf("The apothem of the pyramid:\n");
	scanf ("%f", &l);
	p_s1 = &s1;
	p_s2 = &s2;
	p_h = &h;
	p_p1 = &p1;
	p_p2 = &p2;
	p_l = &l;
	v = ((*p_h)/3)*((*p_s1)+(sqrtf((*p_s1)*(*p_s2)))+(*p_s2));
	s = (*p_s1) + (*p_s2) + 0.5*(((*p_p1)+(*p_p2))*(*p_l));	
	p_v = &v;
	p_s = &s;
	printf ("V = %f\t(%p)\n", *p_v, *p_v);
	printf ("S = %f\t(%p)\n", *p_s, *p_s);
}
/*----------------------*/