/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de volume em metros cúbicos m³ e apresente-o convertido 
* em litros. A fórmula de conversão é: L = 1000 ∗ M , sendo L o volume 
* em litros e M o volume em metros cúbicos.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int m;
    printf("Metros cúbicos -> ");
    scanf("%d", &m);

    printf("Litros -: %d\n", 1000*m);
    
    return 0;
}
