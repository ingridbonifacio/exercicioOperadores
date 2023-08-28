#include <stdio.h>

main()
{

    /*Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adicion-se ao custo do valor do frete e despesas eventuais (tambem solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a porcentagem de lucro da*/

    // declaração de variaveis

    float custo, frete, despesa, valorVenda, valorBruto, lucro, porcentagemLucro;

    printf("Digite o custo do produto");
    scanf("%f",&custo);

    printf("Digite o frete do produto");
    scanf("%f",&frete);

    printf("Digite a despesa");
    scanf("%f",&despesa);

    valorBruto = custo + frete + despesa;

    printf("O valor de custo do produto é: R$%f. \nDigite o valor da venda:", valorBruto);
    scanf("%f",&valorVenda);

    lucro = valorVenda - valorBruto;

    porcentagemLucro = (lucro/valorBruto)*100;

    printf("Porcentagem do lucro: %f%%", porcentagemLucro);


}
