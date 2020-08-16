#include<stdio.h>
#include<math.h>

int main(){

    int metrosPorLata = 108, valorLata = 80, valorGalao = 25, lata = 18;
    float areaPintada, metrosPorGalao = 21.6, galao = 3.6, qtdLitros = areaPintada / 6;

    printf("Qual o valor em metros quadrados da area a ser pintada?\n\n");
    scanf("%f", &areaPintada);

    printf("\nQuantidade de latas a serem compradas: %.0f totalizando %.0f litros", ceil(areaPintada / metrosPorLata), ceil(areaPintada / metrosPorLata) * lata );
    printf("\nPreco total: %.0f\n", valorLata * ceil(areaPintada / metrosPorLata));

    printf("\nQuantidade de galoes a serem compradas: %.0f totalizando %.2f litros", ceil(areaPintada / metrosPorGalao), ceil(areaPintada / metrosPorGalao) * galao );
    printf("\nPreco total: %.0f\n", valorGalao * ceil(areaPintada / metrosPorGalao));

    printf("\nSera nescessario %.2f litros de tinta (galoes e latas)",(areaPintada / 6));

    int qtdLatas = qtdLitros / 18;

    float qtdLitrosRestante = (qtdLitros - qtdLatas) * 18;

    float qtdGaloes = ceil((qtdLitrosRestante / 18)/3.6);

    printf("%.2f galoes e %.2f latas", qtdLatas, qtdGaloes);
return 0;
}
//Nao consegui resolver a ultima parte da questão
