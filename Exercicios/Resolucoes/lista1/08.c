/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma temperatura em graus Kelvin e apresente-a convertida * em 
* graus Celsius. A fórmula de conversão é: C = K − 273.15, * sendo C a 
* temperatura em Celsius e K a temperatura em Kelvin.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float k;
    printf("Temperatura em Kelvin -> ");
    scanf("%f", &k);

    printf("Temperatura em Celsius -: %.2f \n", k-273.15);
    
    return 0;
}
