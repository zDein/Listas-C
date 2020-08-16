#include<stdio.h>
#include<math.h>

int main(){

    int metrosPorLata = 54, valorLata = 80;
    float areaPintada;

    printf("Qual o valor em metros quadrados da area a ser pintada?\n\n");
    scanf("%f", &areaPintada);
    printf("\nQuantidade de latas a serem compradas: %.0f\n", ceil(areaPintada / metrosPorLata));
    printf("\nPreco total: %.0f\n", valorLata * ceil(areaPintada / metrosPorLata));

return 0;
}

