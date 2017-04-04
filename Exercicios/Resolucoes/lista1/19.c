/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor em litros e apresente-o convertido em metros cúbicos m³. 
* A fórmula de conversão é: M = L / 1000, sendo L o volume em litros e M
* o volume em metros cúbicos.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int l;
    printf("Litros -> ");
    scanf("%d", &l);

    printf("Metros cúbicos :- %d\n", l/1000);
    
    return 0;
}
