#include<stdio.h>

main(){

    /*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor*/

//declaração de variaveis

float custo, porcentagemDistribuidor = 0.28, imposto = 0.45, custoFinal;

printf("Digite o custo de fabrica do carro: ");
scanf("%f", &custo);

custoFinal = (custo * imposto) + (custo * porcentagemDistribuidor) + custo;

printf("Custo final do carro: %f", custoFinal);

    }