#include <stdio.h>
#include <stdlib.h>
#define SIZE 256
int main()
{
    char string[20][SIZE];
    int length = 0;
    int count = 0;
    char *filename = "task.txt";
    FILE *task;
    if ((task = fopen(filename, "a+")) == NULL)
    {
        perror("ERROR: ");
        exit(0);
    }
    char c;
    int k = 0;
    while(!feof(task))
    {
        length = 0;
        count = 0;
        while ((c = getc(task)) != '\n' && c != EOF)
        {
            string[k][length] = c;
            length++;
        }
        string[k][length] = '\0';
        for (int i = 0; i < length; i++)
        {
            if (string[k][i] == '+' || string[k][i] == '-' || (string[k][i] == 'b' && string[k][i -
                    1] == 'c'))
            {
                count++;
                continue;
            }
            string[k][i - count] = string[k][i];
        }
        string[k][length - count] = '\0';
        k++;
    }
    fclose(task);

    if ((task = fopen(filename, "w")) == NULL)
    {
        perror("ERROR: ");
        exit(0);
    }
    for (int i = 0; i < k; i++)
    {
        fprintf(task, "%s\n", string[i]);
    }
    fclose(task);
}
