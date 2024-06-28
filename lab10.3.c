#include <stdio.h>
#include <stdlib.h>
int Middle(FILE* f, int num, int count)
{
    int result = 1;
    int number;
    rewind(f);
    for (int i = 0; i < num; i++)
    {
        fscanf(f, "%d", &number);
    }
    return number;
}
int main()
{
    FILE* f;
    if ((f = fopen("example.txt", "a+")) == NULL)
    {
        perror("Error: ");

        exit(1);
    }
    fseek(f, 0, SEEK_END);
    int length = ftell(f);
    int count = 1;
    int result = 0;
    char symbol;
    rewind(f);
    for (int i = 0; (symbol = getc(f)) != '\n' && symbol != EOF; i++)
    {
        if (symbol == ' ') count++;
    }
    for (int i = 0; i < (count / 2); i++)
    {
        result += Middle(f, i + 1, count) * Middle(f, count - i, count);
    }
    fseek(f, 0, SEEK_END);
    fprintf(f, "\nResult = %d", result);
    fclose(f);
}
