/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma temperatura em graus Celsius e apresente-a convertida em 
* graus Fahrenheit. A fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, 
* sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
**************************************************************************/
#include <stdio.h>

int main(void)
{
	float c;
    printf("Temperatura em Celsius para Fahrenheit -> ");
	scanf("%f", &c);

	printf("Temperatura em Fahrenheit: %.2f \n", (c*(9.0/5.0)+32.0));
    
    return 0;
}
