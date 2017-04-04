/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um valor de massa em libras e apresente-o convertido em quilogramas. 
* A fórmula de conversão é: K = L ∗ 0, 45, sendo K a massa em quilogramas 
* e L a massa em libras
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float l;
	printf("Libras -> ");
    scanf("%f", &l);
	
	printf("Quilogramas -: %.1f \n", l*.45359237);
}
