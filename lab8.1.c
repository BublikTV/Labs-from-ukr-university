#include <stdio.h>
#include <string.h>
#include <limits.h>
void main()
{
    printf("Write a line: ");
    char s[CHAR_MAX];
    scanf("%[^\n]s", &s);
    OemToCharA(s,s);
    char strnew[CHAR_MAX][CHAR_MAX];
    int k = 0;
    int dl = strlen(s);
    for(int i = 0; i < dl; i++)
    {
        if( s[i] != ' ')
        {
            int j = 0;
            for(j; s[i + j] != ' ' && s[i + j] != '\0'; j++)
            {
                strnew[k][j] = s[i + j];
            }
            strnew[k][j] = '\0';
            k++;
            i += j;
        }
    }
    qsort(strnew, k, CHAR_MAX, (int (*)(const void *,const void *)) strcmp);
    for(int i = 0; i < k; i++)
    {
        printf("%s ", strnew[i]);
    }
    _getch();
}
