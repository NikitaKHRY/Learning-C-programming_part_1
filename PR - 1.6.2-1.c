#include<stdio.h>
#include <math.h>

int main() 
{
	int pair;
	printf("Enter pair number (1-6): ");
	scanf("%d", &pair);	
	switch (pair)
	{
		case 1:printf("Start at 8:30 end at 9:50");  break;
		case 2:printf("Start at 10:10 end at 11:30");break;
		case 3:printf("Start at 12:00 end at 13:20");break;
		case 4:printf("Start at 13:40 end at 15:00");break;
		case 5:printf("Start at 15:20 end at 16:40");break;
		case 6:printf("Start at 17:00 end at 18:20");break;
		default:printf("The code has you.../n ERROR");
	}
}