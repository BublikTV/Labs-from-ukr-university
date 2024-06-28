#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array [5] = {};
    int isOk = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("Input number[%i]\n", i);
        scanf("%i", &array[i]);
    }
    printf("The array elements are : \n");
    for(int j = 0; j < 5; j++)
    {
        printf("%i\t", array[j]);
    }
    for(int k = 0; k < 4; k++)
    {
        if(array[k] % 2 == array[k+1] % 2)
        {
            printf("\n%i", k + 1);
            isOk = -1;
            break;
        }
    }
    if (isOk == 0)
    {
        printf("\n0");

    }
}
