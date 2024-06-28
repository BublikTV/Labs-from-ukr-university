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
    printf("Input m\n");
    scanf("%i", &m);
    int arr[n][m];

    printf("Your array is:\n");
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = rand()%10;
            printf ("%4i", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
//Just a simple function. Appends empty spaces to print triangles.
    void appendSpaces(int i)
    {
        for (int j = 0; j < i; j++)
        {
            printf ("%4s", "");
        }
    }
//Print top triangle
    int k = 0;
    for (int i = 0; i < n / 2 + n % 2; i++)
    {
        appendSpaces(k);
        for (int j = 0 + k; j < m - k; j++)
        {
            printf ("%4i", arr[i][j]);
        }
        printf("\n");
        k++;
    }
    printf("\n");
//Print bottom triangle
    k = n / 2;
    for (int i = n / 2 - (1 - n % 2); i < n; i++)
    {
        appendSpaces(k);
        for (int j = 0 + k; j < m - k; j++)
        {
            printf ("%4i", arr[i][j]);

        }
        printf("\n");
        k--;
    }
    printf("\n");
//Swap triangles
    k = 0;
    int tmp = -1;
    for (int i = 0; i < n / 2 + n % 2; i++)
    {
        for (int j = 0 + k; j < m - k; j++)
        {
            tmp = arr[i][j];
            arr[i][j] = arr[n - 1 - i][j];
            arr[n - 1 - i][j] = tmp;
        }
        k++;
    }
//Print result
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf ("%4i", arr[i][j]);
        }
        printf("\n");
    }
}
