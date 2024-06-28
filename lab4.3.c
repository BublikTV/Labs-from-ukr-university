#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float q;
    float y = 0;
    int k = 1;
    printf("Input X\n");
    float x = scanf("%f", &x);
    q = (pow(-1, 1)*pow(x, 3*1-1))/(pow(1, 2)*2);
    printf("q = %f\n", q);
    y = y + q;
    k = 2;
    while(fabs(q) > 0.0001)
    {
        int i = 1;
        int f = 1;
        while(i <= k + 1)
        {
            f = f*i;
            i++;
        }
        q = (pow(-1, k)*pow(x, 3*k-1))/(pow(k, 2)*f);
        printf("q[%i] = %f\n", k, q);
        y = y + q;
        k++;
    }
    printf("E = %f", y);
}
