/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um número real e imprima a quinta parte deste número.
**************************************************************************/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
	printf("Entre com n (inteiro) -> ");
	scanf("%d", &n);
	
	printf("A quinta parte de %d é: %.2f\n", n, (float)(n / 5));
}
