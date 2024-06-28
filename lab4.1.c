#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Ukr");
    float p1 = 29.80;
    float p2 = 45.50;
    float p3 = 9.98;
    float p4 = 44.90;
    float p5 = 67.80;
    float s;
    float sum = 0;
    int sold;
    float itemPrice;
    int n;
    for(n = 1; n <= 5; n++)
    {
        printf("\nВведiть кiлькiсть проданого товару No%i\n", n);
        scanf("%i", &sold);
        switch (n)
        {
        case 1:
            itemPrice = p1;
            break;
        case 2:
            itemPrice = p2;
            break;
        case 3:
            itemPrice = p3;
            break;
        case 4:
            itemPrice = p4;
            break;
        case 5:
            itemPrice = p5;
            break;
        }
        s = sold*itemPrice;
        printf("\nТовар No%i - Цiна: %0.2f ГРН - Кiлькiсть: %i - До сплати: %0.2f
               ГРН\n", n, itemPrice, sold, s);
               sum = sum + s;
    }
    printf("\nЗагальна сума покупки: %0.2f ГРН", sum);
}
