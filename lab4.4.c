#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float q;
    float y = 0;
    printf("Input x\n");
    float x = scanf("%f", &x);
    int k = 1;
    do
    {
        int i = 1;
        int f = 1;
        do
        {
            f = f*i;
            i++;
        }
        while (i <= k+1);
        q = (pow(-1, k)*pow(x, 3*k-1))/(pow(k, 2)*f);
        y = y + q;
        k++;
    }
    while (fabs(q) > 0.0001);
    printf("E = %f", y);
}
