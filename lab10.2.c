#include <stdio.h>
#include <stdlib.h>
#define i 15
void fun (double *element)
{
    int k = 0;
    int f = 1;
    element [k] = pow(2, k + 2) / sqrt(k + 1);
    for(int k = 1; k < i; k++)
    {

        f = f*(k + 1);
        element[k] = element [k - 1] + pow(2, k + 2) / sqrt(f);
    }
}
void write(double *element, char *NameFile)
{
    FILE *f;
    if((f = fopen(NameFile,"wb")) == 0)
    {
        printf("Error");
        return 0;
    }
    for(int k = 0; k < i; k++)
    {
        fprintf(f,"%f\n", element[k]);
    }
    fclose(f);
}
int main()
{
    double List[i];
    char Name[100];
    printf("Write file`s name\n");
    gets(Name);
    fun(&List);
    write(&List, &Name);
    return 0;
}
