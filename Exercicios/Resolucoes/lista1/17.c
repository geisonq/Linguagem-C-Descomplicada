/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de comprimento em centı́metros e apresente-o 
* convertido em polegadas. A fórmula de conversão é: p = c / 2,54
* sendo C o comprimento em centı́metros e P o comprimento em polegadas.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    double c;
    printf("Valor em comprimento ->");
    scanf("%la", &c);

    printf("Valor em polegadas %.4f \n", c/2.54);
    
    return 0;
}
