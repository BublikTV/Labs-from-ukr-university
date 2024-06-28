#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int k;
    float q;
    float y = 0;
    printf("Input x\n");
    float x = scanf("%f", &x);
    q = (pow(-1, 1)*pow(x, 3*1-1))/(pow(1, 2)*2);
    printf("q = %f\n", q);
    y = y + q;
    for(int k = 2; fabs(q) > 0.0001; k++)
    {
        int f = 1;
        for(int i = 1; i <= k + 1; i++)
        {
            f = f*i;
        }
        q = (pow(-1, k)*pow(x, 3*k-1))/(pow(k, 2)*f);
        printf("q[%i] = %f\n", k, q);
        y = y + q;
    }
    printf("E = %f", y);
}
