/******************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de comprimento em metros e apresente-o convertido em jardas. 
* A fórmula * de conversão é: J = M / 0,9144 , sendo J o comprimento em jardas 
* e M o comprimento em metros.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float m;
    printf("Metros -> ");
    scanf("%f", &m);

    printf("Jardas -: %.5f \n", m/.9144);
    
    return 0;
}
