#include <stdio.h>
#include <stdlib.h>
#define esc 27
int main()
{
    int exit;
    do
    {
        printf("Input number\n");
        int n = -1;
        scanf("%i", &n);
        printf("%i\n", pairedNumber(n));
        exit = getch();
    }
    while(exit != 27);
    printf("\nEnd");
}
int pairedNumber(int x)
{
    int y = 0;
    if(x % 2 != 0)
    {
        y = pow(x, 2);
    }
    return y;
}
