#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3, tecna;

    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 < num2)
    {
        tecna = num1;
        num1 = num2;
        num2 = tecna;
    }
    if (num1 < num3)
    {
        tecna = num1;
        num1 = num3;
        num3 = tecna;
    }
    if (num2 < num3)
    {
        tecna = num2;
        num2 = num3;
        num3 = tecna;
    }

    printf("%.2lf, %.2lf, %.2lf\n", num1, num2, num3);

    return 0;
}