#include <stdio.h>
#include <math.h>

int main() { 
double x, y, a1, a2, a3, z; 
printf("Enter x: ");
scanf("%lf",&x);
printf("Enter y: ");
scanf("%lf",&y);
printf("x= %f\ny= %lf\n",x,y);
a1 = sqrt(y);
printf("a1= %.3f\n",a1);
a2 = 3*y;
printf("a2= %.3f\n",a2);
a3 = pow(x,2) -1;
printf("a3= %.3f\n",a3);
z = (a1 + a2) / a3;
printf("z= %.3f\n",z);
return 0; 
}