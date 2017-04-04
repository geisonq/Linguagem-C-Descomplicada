/**************************************************************************
* Author: Lucas(heisen)
*
* Peça ao usuário para digitar três valores inteiros e imprima a soma 
* deles.
**************************************************************************/
#include <stdio.h>

int main(void)
{
	int x, y, z;
    printf("Entre com 3 inteiros -> ");
    scanf("%d%d%d", &x, &y, &z);
	
	printf("[+] %i + %i + %i = %i \n", x, y, z, (x+y+z));
}
