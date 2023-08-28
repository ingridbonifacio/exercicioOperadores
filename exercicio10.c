#include<stdio.h>

main(){

    /*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/

    // declaração de variaveis

    float salario_base, valor_comissao, total_vendas, total_comissao, total_salario;
    int total_carros_vendidos;

    printf("\nEntre com o salario base do vendedor: ");
    scanf("%f",&salario_base);

    printf("\nEntre com o valor da comissao por carro vendido: ");
    scanf("%f",&valor_comissao);

    printf("\nEntre com o total de carros vendidos: ");
    scanf("%d",&total_carros_vendidos);

    printf("\nEntre com o total de vendas: ");
    scanf("%f",&total_vendas);

    total_comissao = total_carros_vendidos * valor_comissao;
    total_comissao = total_comissao + ( total_vendas * 5/100 );

    total_salario = total_comissao + salario_base;
    
    printf("\nO salario final do vendedor: %8.2f", total_salario);

}