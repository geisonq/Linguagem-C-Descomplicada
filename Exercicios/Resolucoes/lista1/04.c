/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um número real e imprima o resultado do quadrado desse número
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float n;
	printf("Entre com n -> ");
    scanf("%f", &n);
	
	printf("[+] Quadrado de %.2f é: %.2f\n", n, (n * n));
}
