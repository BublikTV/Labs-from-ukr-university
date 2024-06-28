#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct
{
    int number;
    int mass;
    char city[100];
} post;
typedef struct
{
    post element[20];
    int size;
} p;
void Input(p* AddList)
{
    post NewElement;
    printf("Write the number - ");
    scanf("%d", &NewElement.number);
    printf("Write mass - ");
    scanf("%d", &NewElement.mass);
    printf("Write city - ");
    scanf("%s", &NewElement.city);
    AddList->element[AddList->size]=NewElement;
    AddList->size++;
}
p FromFile(char* NameFile)
{
    p AddList;
    FILE *f;
    AddList.size = 0;
    if ((f = fopen(NameFile, "rb")) == 0)
    {

        return AddList;
    }
    while(fread(&AddList.element[AddList.size], sizeof(post),1,f) == 1)
    {
        AddList.size++;
    }
    fclose(f);
    return AddList;
}
void ToFile(char* NameFile, p AddList)
{
    int i;
    FILE* f;
    post Element;
    if((f = fopen(NameFile,"wb")) == 0)
    {
        printf("Error");
    }
    for(i = 0; i<AddList.size; i++)
    {
        Element = AddList.element[i];
        fwrite(&Element,sizeof(post), 1, f);
    }
    fclose(f);
}
void SearchToFile(char *NameFile, p AddList)
{
    int search, ch = 0;
    printf("\nWrite the number: ");
    scanf("%d",&search);
    for (int i = 0; i < AddList.size; i++)
    {
        if (search == AddList.element[i].number)
        {
            printf("| Number | Mass | City |\n");
            printf("| %-6d | %-4d | %-4s |", AddList.element[i].number,
                   AddList.element[i].mass,
                   AddList.element[i].city);
            ch = 1;
        }
    }
    if (ch == 0)
    {
        printf("\n Not found");
    }

}
void write(p AddList)
{
    if(AddList.size == 0)
    {
        printf("No information");
        return 0;
    }
    else
    {
        printf("| Number | Mass | City |\n");
        for(int i=0; i<AddList.size; i++)
        {
            printf("| %-6d | %-4d | %-4s |\n", AddList.element[i].number,
                   AddList.element[i].mass,
                   AddList.element[i].city);
        }
    }
}
void DeletePtash(p AddList, char* NameFile)
{
    int search, i = 0,flag = 0;
    FILE *f;
    post Element;
    if((f=fopen(NameFile,"wb")) == 0)
    {
        printf("Error");
        return 0;
    }
    printf("Write the number\n");
    scanf("%d", &search);
    for(i = 0; i < AddList.size; i++)
    {
        if(i != (search - 1))
        {
            Element = AddList.element[i];
            fwrite(&Element, sizeof(post), 1, f);
        }
        else
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {

        printf("Not found");
    }
    else
    {
        AddList.size--;
    }
    fclose(f);
}
void create(char* NameFile)
{
    FILE *f;
    if((f = fopen( NameFile,"wb")) == 0)
    {
        printf("Cannot be open");
        return 0;
        fclose(f);
    }
}
int main()
{
    int c = 0, ch = 0;
    post NewElement;
    p List;
    char *Name = "File.txt";
    while(ch == 0)
    {
        printf("\nSelect operation");
        printf("\n1. Create file");
        printf("\n2. Output iformation");
        printf("\n3. Search for information");
        printf("\n4. Adding information");
        printf("\n5. Delete information");
        printf("\n6. Exit the program\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            create(Name);
            break;
        case 2:
            List = FromFile(Name);
            write( List);
            break;
        case 3:
            List = FromFile(Name);

            SearchToFile(Name, List);
            break;
        case 4:
            List = FromFile(Name);
            Input(&List);
            ToFile(Name,List);
            break;
        case 5:
            List = FromFile(Name);
            DeletePtash(List, Name);
            break;
        case 6:
            c = 1;
            break;
        default:
            printf("No operation found");
            break;
        }
    }
    return 0;
}
