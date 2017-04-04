/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma distância em quilômetros e apresente-a convertida em milhas. 
* A fórmula de conversão é: M = K / 1, 609344 , sendo K a distância em 
* quilômetros e M em milhas. 
**************************************************************************/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
	long double k;
	printf("Distância em KMs -> ");
	scanf("%La", &k);
		
	printf("Distância em Milhas -: %.6La\n", k/1.609344);
}
