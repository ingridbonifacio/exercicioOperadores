#include<stdio.h>

main(){

    /*Escreva um algoritmo para ler o salario mensal atual de um funcionario e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

//declaração de variaveis

float salarioAtual, percentualReajuste, novoSalario;

printf("Digite o salario atual: ");
scanf("%f", &salarioAtual);

printf("Digite o percentual do reajuste: ");
scanf("%f", &percentualReajuste);

novoSalario = salarioAtual + ((percentualReajuste/100)*salarioAtual);

printf("Digite o novo salario: R$%.2f", novoSalario);





}