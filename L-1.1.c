#include <stdio.h> 

int main() 
{
	unsigned int t = 0, s = 0, m = 0; 
	printf("Enter time in seconds: ");
	scanf("%d",&t);
	m = t / 60;
	s = t - m*60;
	printf("second= %d\n",s);
	printf("minutes= %d\n",m);
	return 0;
}