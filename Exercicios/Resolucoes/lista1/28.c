/**************************************************************************
* Author: Lucas(heisen)
*
* Faça a leitura de três valores e apresente como resultado a soma dos 
* quadrados dos três valores lidos.
**************************************************************************/
#include <stdio.h>

int main(void)
{
	int x, y, z;
    printf("Le tres valores e apresenta a soma dos quadrados\n\n");
    
	printf("Enre com x, y, z -> ");
    scanf("%d%d%d", &x, &y, &z);
	
	printf("A soma dos quadrados é -: %d \n", (x*x)+(y*y)+(z*z));
    
    return 0;
}
