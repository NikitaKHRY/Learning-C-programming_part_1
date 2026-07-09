#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void Print(char Str_ALL[]);
void Enter_name(char Str_ALL[]);
void Exclamation_marks(char Str_ALL[]);
void Capital_letters(char Str_ALL[]);
void Mockingbird2(char Str_ALL[]);
void Mockingbird10(char Str_ALL[]);

int main()
{
	int task;
	char Str_ALL[100] = "";
	while (1)
	{
		printf("\n1 - Print\n");
		printf("2 - Enter your name\n");
		printf("3 - Exclamation marks\n");
		printf("4 - Capital letters\n");
		printf("5 - Mockingbird No2\n");
		printf("6 - Mockingbird No10\n");
		printf("0 - Exit \n");
		printf("Choose what you need:\n");
		scanf ("%d", &task);
		switch (task)
		{
			case 0: printf("\nThe program has ended\n"); return 0;
			case 1:
				Print( Str_ALL);
				break;
			case 2:
				Enter_name( Str_ALL);
				break;
			case 3:
				Exclamation_marks( Str_ALL);
				break;
			case 4:
				Capital_letters( Str_ALL);
				break;
			case 5:
				Mockingbird2( Str_ALL);
				break;
			case 6:
				Mockingbird10( Str_ALL);
				break;
			default: printf("A non-existent option is selected. Repeat the input\n");
		}
	}
}
/*----------------------*/
void Print(char Str_ALL[])
{
	int i, n = strlen(Str_ALL);
	for(i = 0; i <= n; i++)
	{
		char ch = Str_ALL[i];
		putchar(ch);	
	}
}
/*----------------------*/
void Enter_name(char Str_ALL[])
{
	char str_Hello[50] = "Good morning ";
	char Str_Name[50];
	puts("\nEnter your name:");
	scanf ("%s", &Str_Name);
	strcpy(str_Hello+13,Str_Name);
	strcpy(Str_ALL,str_Hello);
}
/*----------------------*/
void Exclamation_marks(char Str_ALL[])
{
	int n2 = strlen(Str_ALL);
	char Str_mark [2] = "!";
	for( n2; n2 < 40; n2++)
	{
		strcpy(Str_ALL+n2,Str_mark);
	}
}
/*----------------------*/
void Capital_letters(char Str_ALL[])
{
	int i;
	for(i = 0; i <= 40; i++)
	{
		char ch = Str_ALL[i];
		if (ch >='a' && ch <='z') 
		{
			ch = ch - 'a' + 'A';
		}
		putchar(ch);	
	}
}
/*----------------------*/
void Mockingbird2(char Str_ALL[])
{
	int i;
	for(i = 0; i <= 40; i++)
	{
		char ch = Str_ALL[i];
		if(i==13)
		{
			if (ch >='A' && ch <='Z') 
			{
				ch = ch + 'a' - 'A';
			}
		}
		if(i>13)
		{
			if (ch >='a' && ch <='z') 
			{
				ch = ch - 'a' + 'A';
			}
		}
		Str_ALL[i] = ch;	
	}
}
/*----------------------*/
void Mockingbird10(char Str_ALL[])
{
	int i;
	for(i = 0; i <= 40; i++)
	{
		char ch = Str_ALL[i];
		if(ch=='a')
		{
			ch = '@';
		}
		Str_ALL[i] = ch;	
	}
}