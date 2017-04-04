/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma temperatura em graus Celsius e apresente-a convertida em graus 
* Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura 
* em Celsius e K a temperatura em Kelvin.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float c;
    printf("Temperatura em Celsius -> ");
    scanf("%f", &c);

    printf("Temperatura em Kelvin -: %.2f \n", c+273.15);
    
    return 0;
}
