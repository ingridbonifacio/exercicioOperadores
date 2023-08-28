#include<stdio.h>

main(){

    /*Dado um valor em reais e a cotação do dolar, converta esse valor para dolares.*/

    //declaração de variaveis 
    float reais = 10.0, cotacao = 4.98, valorConvertido;

    valorConvertido = reais/cotacao;

    printf("Valor convertido em dolar: %f", valorConvertido);

}