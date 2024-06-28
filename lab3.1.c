#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Ukr");
    printf("Номер товару Цiна за одиницю товару\n");
    printf(" 1 29.80 ГРН\n");
    printf(" 2 45.50 ГРН\n");
    printf(" 3 9.98 ГРН\n");
    printf(" 4 44.90 ГРН\n");
    printf(" 5 67.80 ГРН\n");

    float p1 = 29.80;
    float p2 = 45.50;
    float p3 = 9.98;
    float p4 = 44.90;
    float p5 = 67.80;
    float s;

    int n;
    printf("\nВведiть номер товару\n");
    scanf("%i", &n);

    int sold;

    switch (n)
    {
    case 1:
        printf("Введiть кiлькiсть проданого товару\n");
        scanf("%i", &sold);
        printf("\nНомер товару: %i\n", n);
        printf("Kiлькiсть проданого товару: %i\n", sold);
        s = sold*p1;
        printf("Сума: %0.2f ГРН", s);
        break;
    case 2:
        printf("Введiть кiлькiсть проданого товару\n");
        scanf("%i", &sold);
        printf("\nНомер товару: %i\n", n);
        printf("Kiлькiсть проданого товару: %i\n", sold);
        s = sold*p2;
        printf("Сума: %0.2f ГРН", s);
        break;
    case 3:
        printf("Введiть кiлькiсть проданого товару\n");
        scanf("%i", &sold);
        printf("\nНомер товару: %i\n", n);
        printf("Kiлькiсть проданого товару: %i\n", sold);

        s = sold*p3;
        printf("Сума: %0.2f ГРН", s);
        break;
    case 4:
        printf("Введiть кiлькiсть проданого товару\n");
        scanf("%i", &sold);
        printf("\nНомер товару: %i\n", n);
        printf("Kiлькiсть проданого товару: %i\n", sold);
        s = sold*p4;
        printf("Сума: %0.2f ГРН", s);
        break;
    case 5:
        printf("Введiть кiлькiсть проданого товару\n");
        scanf("%i", &sold);
        printf("\nНомер товару: %i\n", n);
        printf("Kiлькiсть проданого товару: %i\n", sold);
        s = sold*p5;
        printf("Сума: %0.2f ГРН", s);
        break;
    default:
        printf("Товар не занесений в базу");
    }
}
