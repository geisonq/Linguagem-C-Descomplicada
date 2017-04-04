/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de comprimento em jardas e apresente-o convertido em 
* metros. A fórmula * de conversão é: M = 0, 9144 ∗ J, sendo J o 
* comprimento em jardas e M o comprimento em metros
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float j;
    printf("Jardas -> ");
    scanf("%f", &j);

    printf("Metros -: %.4f\n", 0.9144*j);
    
    return 0;
}
