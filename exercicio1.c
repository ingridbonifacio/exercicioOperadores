#include<stdio.h>

main(){

    //Escreva um programa que receba dois numeros e mostre a soma, multiplicação, subtração e a divisão 

    int numero1, numero2, soma, multi, sub, potencia, modulo;
    float div;

    printf("Digite dois numeros ");
    scanf("%d %d", &numero1, &numero2);

    soma = numero1 + numero2;
    multi = numero1 * numero2;
    sub = numero1 - numero2;
    div = (float)numero1/(float)numero2;

    printf("Soma; %d, \nMultiplicacao: %d, \nSubtracao: %d, \nDivisao: %.2f",soma, multi, sub, div);

    //potencia

    potencia = pow(numero1,numero2);

    printf("\nPotencia: %d", potencia);

    //operador modulo 

    modulo = numero1 % numero2;

    printf("\nResto da divisão: %d", modulo);


}
