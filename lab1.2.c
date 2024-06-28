#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a = 15;
int b = 2;
float c = 12.5;
float d = 1.4;
printf("Input x\n");
float x;
scanf("%f", &x);
printf("Input y\n");
float y;
scanf("%f", &y);
float t1;
float t2;
t1 = 1.0/c*(b/a*log(a*x+b)+d/y*log(y*x+d));
printf("t1 = %f\n", t1);
t2 = 1.0/(2*a*b)*log(abs(x*sqrt(c*c-b*b)/2*y*sqrt(c*c+b*b)));
printf("t2 = %f\n", t2);
}
