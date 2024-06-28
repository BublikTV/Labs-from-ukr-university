#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x;
    printf("Input x\n");
    scanf("%f", &x);
    float y;
    if (x >= -1 && x <= 3)
    {
        y = pow(x, 2) - 27;
        printf("y = %f", y);
    }
    else
    {
        if (x < -5 || x >= 10 && x < 12)
        {
            y = (3.0/5)*pow(x, 2) + 5;
            printf("y = %f", y);
        }
        else
        {
            printf("Function doesn`t exist\n");
        }
    }
}
