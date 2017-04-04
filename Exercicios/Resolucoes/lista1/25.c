/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de área em acres e apresente-o convertido em metros 
* quadrados m². A fórmula de conversão é: M = A ∗ 4046, 86, sendo M a área
* em metros quadrados e A a área em acres.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    double a;
    printf("Acres -> ");
    scanf("%la", &a);

    printf("Metros quadrados -: %.2la\n", a*4046.86);
    
    return 0;
}
