#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Ukr");
    printf("����� ������ �i�� �� ������� ������\n");
    printf(" 1 29.80 ���\n");
    printf(" 2 45.50 ���\n");
    printf(" 3 9.98 ���\n");
    printf(" 4 44.90 ���\n");
    printf(" 5 67.80 ���\n");

    float p1 = 29.80;
    float p2 = 45.50;
    float p3 = 9.98;
    float p4 = 44.90;
    float p5 = 67.80;
    float s;

    int n;
    printf("\n����i�� ����� ������\n");
    scanf("%i", &n);

    int sold;

    switch (n)
    {
    case 1:
        printf("����i�� �i���i��� ��������� ������\n");
        scanf("%i", &sold);
        printf("\n����� ������: %i\n", n);
        printf("Ki���i��� ��������� ������: %i\n", sold);
        s = sold*p1;
        printf("����: %0.2f ���", s);
        break;
    case 2:
        printf("����i�� �i���i��� ��������� ������\n");
        scanf("%i", &sold);
        printf("\n����� ������: %i\n", n);
        printf("Ki���i��� ��������� ������: %i\n", sold);
        s = sold*p2;
        printf("����: %0.2f ���", s);
        break;
    case 3:
        printf("����i�� �i���i��� ��������� ������\n");
        scanf("%i", &sold);
        printf("\n����� ������: %i\n", n);
        printf("Ki���i��� ��������� ������: %i\n", sold);

        s = sold*p3;
        printf("����: %0.2f ���", s);
        break;
    case 4:
        printf("����i�� �i���i��� ��������� ������\n");
        scanf("%i", &sold);
        printf("\n����� ������: %i\n", n);
        printf("Ki���i��� ��������� ������: %i\n", sold);
        s = sold*p4;
        printf("����: %0.2f ���", s);
        break;
    case 5:
        printf("����i�� �i���i��� ��������� ������\n");
        scanf("%i", &sold);
        printf("\n����� ������: %i\n", n);
        printf("Ki���i��� ��������� ������: %i\n", sold);
        s = sold*p5;
        printf("����: %0.2f ���", s);
        break;
    default:
        printf("����� �� ��������� � ����");
    }
}
