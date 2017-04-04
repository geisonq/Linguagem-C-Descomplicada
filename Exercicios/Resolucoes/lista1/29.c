/**************************************************************************
* Author: Lucas(heisen)
*
* Leia quatro notas, calcule a média aritmética e imprima o resultado.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float n1, n2, n3, n4;
	printf("Enre com 4 notas -> ");
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

	printf("A média das notas é -: %.2f \n", (n1 + n2 + n3 + n4) / 4);
    
    return 0;
}
