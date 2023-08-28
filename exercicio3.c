#include<stdio.h>

main(){

    /*Dadas as medidas de uma sala, informe sua área*/

    //declaração de variaveis
    float comprimento, largura, area;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("\nDigite a largura: ");
    scanf("%f", &largura);

    area = largura * comprimento;

    printf("A area da sala é: %.2fm2", area);

  }