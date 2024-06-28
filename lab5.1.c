#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int functions (float x, float y)
{
    printf("\nFunction\tAppointment \tExample");
    printf("\nsqrt(x) \tMath square \t%0.2f", sqrt(x));
    printf("\nexp(x) \tExponent \t%0.2f", exp(x));
    printf("\nlog(x) \tNatural logarithm \t%0.2f", log(x));
    printf("\nfabs(x) \tFractional module \t%0.2f", fabs(x));
    printf("\npow(x, y)\tFlattening to a power \t%0.2f", pow(x, y));
    printf("\nsin(x) \tSinus \t%0.2f", sin(x));
    printf("\ncos(x) \tCosine \t%0.2f", cos(x));
    printf("\ntan(x) \tTangent \t%0.2f", tan(x));
    printf("\nfmod(x, y) \tThe remainder of the division of two numbers\t%0.2f",
           fmod(x, y));
}
int main()
{
    float n1;
    float n2;
    printf("Input two numbers\n");
    scanf("\n%f", &n1);
    scanf("\n%f", &n2);

    functions(n1, n2);
}
