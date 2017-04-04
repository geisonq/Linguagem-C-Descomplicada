/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma distância em milhas e apresente-a convertida em quilômetros.
* A fórmula de conversão é: K = 1, 609344 ∗ M , sendo K a distância em 
* quilômetros e M em milhas.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float m;
    printf("Distância em milhas -> ");
    scanf("%f", &m);

    printf("Distância em quilômetros -: %.6f\n", 1.609344*m);
    
    return 0;
}
