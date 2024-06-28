#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct DiaryRecord
{
    int year;
    float mass;
    float area;
    float fertility;
};
//returns random value from interval [lower, upper]
int getRandomValue(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}
//Initializess our dictionary with some random values.
void initDiary(struct DiaryRecord diary[], int diarySize)
{
    srand(time(NULL));
    for (int i = 0; i < diarySize; i++)
    {
//Even though we use random function here still we can have duplicates of the
        year.
//Anyway it's not a big deal. Ñonsider that as multiple harvests. :)
        diary[i].year = getRandomValue(2000, 2022);
        diary[i].mass = getRandomValue(1, 100);
        diary[i].area = getRandomValue(1, 100);
        diary[i].fertility = diary[i].mass / diary[i].area;
    }
}
void printDiary(struct DiaryRecord diary[], int diarySize)
{
    for (int i = 0; i < diarySize; i++)
    {
        printf("Year: %d; ", diary[i].year);
        printf("Mass: %.2f; ", diary[i].mass);
        printf("Area: %.2f; ", diary[i].area);

        printf("Fertility: %.2f", diary[i].fertility);
        printf("\n");
    }
}
//Swaps two diary records
void swap(struct DiaryRecord* r1, struct DiaryRecord* r2)
{
    struct DiaryRecord temp = *r1;
    *r1 = *r2;
    *r2 = temp;
}
//Last parameter determines by which field we will sort our diary.
//(0 - by year; 1 - by fertility)
void bubbleSort(struct DiaryRecord diary[], int diarySize, int sortingByField)
{
    for (int i = 0; i < diarySize - 1; i++)
    {
        for (int j = 0; j < diarySize - i - 1; j++)
        {
//sort by year
            if (sortingByField == 0)
            {
//Comparison sign determines sorting order. Ascending order here.
                if (diary[j].year > diary[j + 1].year)
                {
                    swap(&diary[j], &diary[j + 1]);
                }
//sort by fertility
            }
            else if (sortingByField == 1)
            {
// and Descending order here.
                if (diary[j].fertility < diary[j + 1].fertility)
                {
                    swap(&diary[j], &diary[j + 1]);
                }
            }
        }
    }
}
float getOverallAvgFertility(struct DiaryRecord diary[], int diarySize)
{
    float totalFertility = 0;
    for (int i = 0; i < diarySize; i++)
    {
        totalFertility += diary[i].fertility;
    }
    return totalFertility / diarySize;
}

int main()
{
//Just hardcoded amount of records in diary.
    int diarySize = 5;
//Here is our diary. It's an array of records.
    struct DiaryRecord diary[diarySize];
    initDiary(diary, diarySize);
    printf("Initial diary (unsorted): \n");
//print our initial Diary;
    printDiary(diary, diarySize);
    printf("Average fertility for entire period (%d entries in Diary): %.2f\n\n",
           diarySize, getOverallAvgFertility(diary, diarySize));
    printf("Sorted by year (ascending): \n");
    bubbleSort(diary, diarySize, 0);
    printDiary(diary, diarySize);
    printf("Sorted by fertility (descending): \n");
    bubbleSort(diary, diarySize, 1);
    printDiary(diary, diarySize);
    return 0;
}
