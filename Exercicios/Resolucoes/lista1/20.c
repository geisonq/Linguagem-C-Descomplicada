/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de massa em quilogramas e apresente-o convertido em libras.
* A fórmula de conversão é: L = K / 0, 45359237, sendo K a massa em quilogramas
* e L a massa em libras
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float k;
    printf("Quilogramas -> ");
    scanf("%f", &k);

    printf("Libras -: %f \n", k/0.45359237);
    
    return 0;
}
