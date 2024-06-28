#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
//Enter the size of the matrix
    int n;
    int m;
    printf("Input n\n");
    scanf("%i", &n);
    if(n%2 != 0)
    {
        printf("Incorrect number n");

    }
    else
    {
        printf("Input m\n");
        scanf("%i", &m);
        if(m%2 != 0)
        {
            printf("Incorrect number m");
        }
        else
        {
            int arr [30][30];
            int arr1 [30][30];
            arrayAutocomplete(arr, arr1, n, m);
            displayQuarters(arr, n, m);
            swapQuarters(arr, arr1, n, m);
            displayTheMatrix(arr1, n, m);
        }
    }
}

void arrayAutocomplete(int arr[30][30], int arr1[30][30], int N, int M)
{
//Array autocomplete
    printf("Your array is:\n");
    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            arr[i][j] = rand()%10;

            printf ("%4i",arr[i][j]);
            arr1[i][j] = arr[i][j];
        }
        printf("\n");
    }
    printf("\n");
}

void displayQuarters(int arr[30][30], int N, int M)
{
//Upper right quarter of the matrix
    printf("Upper right quarter of the matrix is:\n");
    for(int i = 0; i < N/2; i++)
    {
        for(int j = M/2; j < M; j++)
        {
            printf("%4i", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
//Lower left quarter of the matrix
    printf("Lower left quarter of the matrix is:\n");
    for(int d = N/2; d < N; d++)
    {
        for(int k = 0; k < M/2; k++)
        {
            printf("%4i", arr[d][k]);

        }
        printf("\n");
    }
}

void swapQuarters(int arr[30][30], int arr1[30][30], int N, int M)
{
//Swap quarters of the matrix
    int i1, j1, d1, k1;
    for(i1 = 0, d1 = N/2; i1 < N/2, d1 < N; i1++, d1++)
    {
        for(j1 = M/2, k1 = 0; j1 < M, k1 < M/2; j1++, k1++)
        {
            arr1[i1][j1] = arr[d1][k1];
            arr1[d1][k1] = arr[i1][j1];
        }
        printf("\n");
    }
}

void displayTheMatrix(int arr1[30][30], int N, int M)
{
//Display the new matrix
    printf("New array is:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {

            printf("%4i", arr1[i][j]);
        }
        printf("\n");
    }
}
