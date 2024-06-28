#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float p;
    float s = 0;
    int i = 1;
    int j;
    do
    {
        p = 1;
        j = 1;
        do
        {
            p = p*(j*log(j + 2) + j);
            j++;
        }
        while(j <= i);
        s = s + ((pow(pow(3, i) + 1, 3)))/p;
        printf("Sum[%i] = %f\n", i, s);
        i++;
    }
    while(i <= 5);
}
