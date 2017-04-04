/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de comprimento em polegadas e apresente-o convertido
* em centı́metros.  A fórmula de conversão é: C = P ∗ 2, 54, sendo C 
* o comprimento em centı́metros e P o comprimento em polegadas.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    short p;
    printf("Comprimento em polegadas -> ");
    scanf("%hu", &p);

    printf("Comprimento em centímetros -: %.2f \n", p*2.54);
    
    return 0;
}
