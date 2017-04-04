/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma temperatura em graus Fahrenheit e apresente-a convertida
* em graus Celsius. A fórmula de conversão é: * C = 5.0 ∗ (F − 32.0)/9.0, 
* sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.
**************************************************************************/
#include <stdio.h>

int main(void)
{	
    float f;
    printf("Temperatura em Fahrenheit -> ");	
    scanf("%f", &f);
	
    printf("Temperatura em Fahrenheit -> %.2f \n", 5.0 * (f-32.0)/9.0);
    
    return 0;
}
