/**************************************************************************
* Author: Lucas(heisen)
*
* Escrever um programa que leia o código do produto escolhido do cardápio 
* de uma lanchonete e a quantidade. O programa deve calcular o valor a ser 
* pago por aquele lanche. Considere que a cada execução somente será 
* calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:
*
* |  Especificação  | Código | Preço |
* |-----------------|--------|-------|
* | Cachorro Quente |    100 |  1,20 |
* | Bauru Simples   |    101 |  1,30 |
* | Bauru com Ovo   |    102 |  1,50 |
* | Hamburguer      |    103 |  1,20 |
* | Cheeseburguer   |    104 |  1,70 |
* | Suco            |    105 |  2,20 |
* | Refrigerante    |    106 |  1,00 |
**************************************************************************/
#include <stdio.h>
#define PROD_100 1.20
#define PROD_101 1.30
#define PROD_102 1.50
#define PROD_103 1.20
#define PROD_104 1.70
#define PROD_105 2.20
#define PROD_106 1.00

int main(void)
{
    int cod_prod, qtd;
    
    printf("\n |  Especificação  | Código | Preço |\n");
    printf(" |-----------------|--------|-------|\n");
    printf(" | Cachorro Quente |    100 |  1,20 |\n");
    printf(" | Bauru Simples   |    101 |  1,30 |\n");
    printf(" | Bauru com Ovo   |    102 |  1,50 |\n");
    printf(" | Hamburguer      |    103 |  1,20 |\n");
    printf(" | Cheeseburguer   |    104 |  1,70 |\n");
    printf(" | Suco            |    105 |  2,20 |\n");
    printf(" | Refrigerante    |    106 |  1,00 |\n\n");
    
    printf("Entre com codigo do produto -> ");
    scanf("%d", &cod_prod);
    
    printf("Entre com a quantidade -> ");
    scanf("%d", &qtd);
    
    switch(cod_prod)
    {
        case 100: printf("Valor a ser pago: %.2f\n", qtd * PROD_100); break;
        case 101: printf("Valor a ser pago: %.2f\n", qtd * PROD_101); break;
        case 102: printf("Valor a ser pago: %.2f\n", qtd * PROD_102); break;
        case 103: printf("Valor a ser pago: %.2f\n", qtd * PROD_103); break;
        case 104: printf("Valor a ser pago: %.2f\n", qtd * PROD_104); break;
        case 105: printf("Valor a ser pago: %.2f\n", qtd * PROD_105); break;
        case 106: printf("Valor a ser pago: %.2f\n", qtd * PROD_106); break;
        default: printf("Codigo invalido\n");
    }
    
    return 0;
}
