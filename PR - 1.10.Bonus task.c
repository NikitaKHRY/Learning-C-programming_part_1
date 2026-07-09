#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

void Task_1();
void Task_2();

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
			case 0: printf("\nBonus Practical lesson No.10 is stopped\n"); return 0;
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
void Task_1()
{
	int point, i, j, x1, y1, x2, y2, max_point_num[2], min_point_num[2];
	printf ("\nNumber of points: \n");
	scanf ("%d", &point);
	float cord[2*point], max=0, min, dis;
	for ( i=0; i<point; i++)
	{
		printf ("%d-st x: ", i+1);
		scanf ("%f", &cord[2*i]);
		printf ("%d-st y: ", i+1);
		scanf ("%f", &cord[2*i+1]);
	}
	for (i = 0; i < point-1; i++)
	{
		x1 = cord[2*i];
		y1 = cord[2*i+1];
		j = i;
		for( ; j < point-1; j++)
		{
			x2 = cord[2*(j+1)];
			y2 = cord[2*(j+1)+1];
			dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
			if(dis>max)
			{
				max = dis;
				max_point_num[0]=i;
				max_point_num[1]=j;
			}
		}
	}
	min = max;
	for (i = 0; i < point-1; i++)
	{
		x1 = cord[2*i];
		y1 = cord[2*i+1];
		j = i;
		for( ; j < point-1; j++)
		{
			x2 = cord[2*(j+1)];
			y2 = cord[2*(j+1)+1];
			dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
			if(dis<min)
			{
				min = dis;
				min_point_num[0]=i;
				min_point_num[1]=j;
			}
		}
	}
	printf("max=%.3f\tmin=%.3f\n", max, min);
	printf("max:\nFirst point(%.3f,%.3f)\nSecond point(%.3f,%.3f)\n",cord[2*max_point_num[0]],cord[2*max_point_num[0]+1],cord[2*(max_point_num[1]+1)],cord[2*(max_point_num[1]+1)+1]);
	printf("min:\nFirst point(%.3f,%.3f)\nSecond point(%.3f,%.3f)\n",cord[2*min_point_num[0]],cord[2*min_point_num[0]+1],cord[2*(min_point_num[1]+1)],cord[2*(min_point_num[1]+1)+1]);		
}
//--------------------------
void Task_2()
{
	int i, j, pos;
	printf ("\nNumber of points: \n");
	scanf ("%d", &pos);	
	int seqA[pos];
	for (i = 0; i < pos; i++)
	{
		printf ("%d-st points: ", i+1);
		scanf ("%d", &seqA[i]);
	}

	for (j = 0; j < pos; j++)
	{
		if (seqA[j]<=seqA[j-1])
		{
			for(i = j; i < pos-1; i++)
			{
				seqA[i] = seqA[i+1];
			}
			pos--;	
		}
	}
	for (i = 0; i < pos; i++)
		printf( "seqA[%d] = %d\n", i+1, seqA[i]);
}