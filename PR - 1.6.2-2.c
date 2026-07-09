#include<stdio.h>
#include <math.h>

int main() 
{
	int month;
	printf("Enter month number: ");
	scanf("%d", &month);	
	
	switch (month)
	{
		case 1:
		{
			printf("1st block");break;
		} 
		case 2:
		{
			printf("1st block");break;
		} 
		case 3:
		{
			printf("1st block");break;
		} 		
		case 4:
		{
			printf("2st block");break;
		}
		case 5:
		{
			printf("2st block");break;
		}
		case 6:
		{
			printf("2st block");break;
		}
		case 7:
		{
			printf("3st block");break;
		} 
		case 8:
		{
			printf("3st block");break;
		}
		case 9:
		{
			printf("3st block");break;
		}
		case 10:
		{
			printf("4st block");break;
		} 
		case 11:
		{
			printf("4st block");break;
		}
		case 12:
		{
			printf("4st block");break;
		}
		default: printf ("Enter the number of the month from 1 to 12");
	}
}