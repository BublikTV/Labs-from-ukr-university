#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float price = 10.50;
    float cost;
    int st;
    printf("Write the station number\n");
    scanf("%i", &st);
    switch (st)
    {
    case 1:
        printf("Station A\n");
        cost = price*3;
        printf("Cost: %0.2f\n", cost);
        break;
    case 2:
        printf("Station B");
        cost = price*5;
        printf("Cost: %0.2f\n", cost);
        break;
    case 3:
        printf("Station C\n");
        cost = price*7;
        printf("Cost: %0.2f\n", cost);
        break;
    case 4:
        printf("Station D\n");
        cost = price*8;

        printf("Cost: %0.2f\n", cost);
        break;
    default:
        printf("No such station exist");
        break;
    }
}
