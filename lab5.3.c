#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float hypotenuse(float x, float y)
{
    float h;
    h = pow(x, 2) + pow(y, 2);
    return h;
}
int main()
{
    float side1;
    float side2;
    float H;
    printf("Input first side\n");
    scanf("%f", &side1);
    printf("Input second side\n");
    scanf("%f", &side2);
    H = hypotenuse(side1, side2);
    printf("Hypotenuse = %0.2f", H);
}
