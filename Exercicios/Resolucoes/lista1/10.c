/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma velocidade em km/h (quilômetros por hora) e apresente-a 
* convertida em m/s (metros por segundo). A fórmula de conversão é:
* M = K/3.6, sendo K a velocidade em km/h e M em m/s.
**************************************************************************/
#include <stdio.h>

int main(void)
{
	float kmh;
	printf("Velocidade km/h -> ");
	scanf("%f", &kmh);
	
	printf("Metros por segundo -: %.4f\n", kmh/3.6);
}
