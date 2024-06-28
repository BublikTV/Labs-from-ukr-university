#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void autoFilling(int N, int M, int *pM);
void changeMatrix(int N, int M, int *pNewM);
int main()
{
    int *pMatrix = NULL;
    int N = 4;
    int M = 7;
    pMatrix = malloc(sizeof(int) * N * M);
    if(pMatrix != NULL)
    {
        autoFilling(N, M, pMatrix);
        changeMatrix(N, M, pMatrix);
    }
    free(pMatrix);
    pMatrix = NULL;
    N = 7;
    M = 5;
    pMatrix = malloc(sizeof(int) * N * M);
    if(pMatrix != NULL)
    {
        autoFilling(N, M, pMatrix);
        changeMatrix(N, M, pMatrix);
    }
    free(pMatrix);
    pMatrix = NULL;
}
void autoFilling(int N, int M, int *pM)
{
    srand(time(NULL));
    printf("\nYour matrix:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            *(pM + i * M + j) = rand()%100;
            printf("%4d", *(pM + i * M + j));
        }
        printf("\n");
    }
}
void changeMatrix(int N, int M, int *pNewM)
{
    printf("\nNew matrix is:\n");
    for(int i = N - 1; i >= 0; i--)
    {
        for(int j = 0; j < M; j++)
        {

            printf("%4d", *(pNewM + i * M + j));
        }
        printf("\n");
    }
}
