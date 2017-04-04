/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva um programa de ajuda para vendedores. A partir de um valor total 
* lido, mostre:
* • o total a pagar com desconto de 10%;
* • o valor de cada parcela, no parcelamento de 3× sem juros;
* • a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor
*     com desconto)
* • a comissão do vendedor, no caso da venda ser parcelada
*     (5% sobre o valor total)
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float valor;
    printf("Entre com o valor da compra -> ");
    scanf("%f", &valor);
    
    float desconto = valor * 0.10;
    float valorParcela = valor / 3;
    float comissaoVista =  (valor - desconto) * 0.05;
    float comissaoPrazo = valor * 0.05;
    
    printf("[+] Total a pagar com desconto -> %.2f\n", valor - desconto);
    printf("[+] Valor de cada parcela -> %.2f\n", valorParcela);
    printf("[+] Comissao a vista -> %.2f\n", comissaoVista);
    printf("[*] Comissao a prazo -> %.2f\n", comissaoPrazo);
    
    return 0;
}
