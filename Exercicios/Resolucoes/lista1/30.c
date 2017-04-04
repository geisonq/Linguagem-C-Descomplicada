/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor
* correspondente em dólares
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float real, cotacao;	
    printf("Entre com o valor em reais e a cotacao -> ");
	scanf("%f%f", &real, &cotacao);
	
	printf("Dolares -: $ %.4f \n", real / cotacao);
}
