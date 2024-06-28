#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float p;
    float s = 0;
    for(int i = 1; i <= 5; i++)
    {
        p = 1;
        for(int j = 1; j <= i; j++)
        {
            p = p*(j*log(j + 2) + j);
        }
        s = s + ((pow(pow(3, i) + 1, 3)))/p;
        printf("Sum[%i] = %f\n", i, s);
    }
}
