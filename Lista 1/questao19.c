#include<stdio.h>

int main (){

   float tamanhoArquivo, veldowload;

    printf("Qual o tamanho do arquivo para download? (mb)\n");
    scanf("%f", &tamanhoArquivo);
    printf("Qual a velocidade da sua internet?(mb/s)\n");
    scanf("%f", &veldowload);
    printf("O tempo de dowload sera aproximadamente: %.2f minutos \n", (tamanhoArquivo / (veldowload)) / 60);

return 0;
}

