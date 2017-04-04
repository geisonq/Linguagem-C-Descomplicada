/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de área em hectares e apresente-o convertido em metros 
* quadrados m 2. A fórmula de conversão é: M = H ∗ 10000, sendo M a área 
* em metros quadrados e H a área em hectares.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float h;
	printf("Hectares -> ");
    scanf("%f", &h);
	
	printf("Metros Quadrados :- %f\n", h*10000);
}
