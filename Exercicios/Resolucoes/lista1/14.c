/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula 
* de conversão é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos 
* e π = 3.14.
**************************************************************************/
#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
    double g;
    printf("Angulo em Graus -> ");
    scanf("%la", &g);

    printf("Graus em radianos -: %.14la\n", g*PI/180);
    
    return 0;
}

