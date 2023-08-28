#include<stdio.h>

main(){

    /*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa em dias. Considerar ano com 365 dias e mes com 30 dias.*/

    //declaração de variaveis 

    int anos, meses, dias, totalDias;

    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    totalDias = anos * 365 + meses *30 + dias;

    printf("Total de dias vividos: %d", totalDias);
    
    
    
    }