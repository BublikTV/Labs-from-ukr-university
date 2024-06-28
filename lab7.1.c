#include <stdio.h>
#include <stdlib.h>
void arrayOutput (int N, int *pArr);
void arrayFilling (int N, int *pArray);
int main()
{
    int *arr = NULL;
    int N;
    printf("Input the length of the array\n");
    scanf("%d", &N);
    arr = malloc (sizeof(int) * N);
    if(arr != NULL)
    {
        arrayFilling(N, arr);
        arrayOutput(N, arr);
    }
    printf("Sum = %d", sum(N, arr));
    free(arr);
    arr = NULL;
}
void arrayFilling (int N, int *pArray)

{
    for(int i = 0; i < N; i++)
    {
        printf("Input %d element\n", i);
        scanf("%d", &pArray[i]);
    }
}
void arrayOutput(int N, int *pArr)
{
    printf("Your array is:\n");
    for(int i = 0; i < N; i++)
    {
        printf("[%d] = %d\n", i, pArr[i]);
    }
}
int sum (int N, int *p)
{
    printf("\n");
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        if(*(p + i) > 0 && *(p + i) % 2 == 0)
        {
            sum = sum + *(p + i);
        }
    }
    return sum;
}
