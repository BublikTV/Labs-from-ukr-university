#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float p;
    float s = 0;
    int i = 1;
    int j;
    while(i <= 5)
    {
        p = 1;
        j = 1;
        while(j <= i)
        {
            p = p*(j*log(j + 2) + j);
            j++;
        }
        s = s + ((pow(pow(3, i) + 1, 3)))/p;
        printf("Sum[%i] = %f\n", i, s);
        i++;
    }
}
