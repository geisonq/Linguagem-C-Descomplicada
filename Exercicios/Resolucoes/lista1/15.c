/**************************************************************************
* Author: Lucas(heisen)
*
* Leia um ângulo em radianos e apresente-o convertido em graus.
* A fórmula de conversão é: G = R ∗ 180/π, sendo G o ângulo em 
* graus e R em radianos e π = 3.14.
**************************************************************************/
#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
    double r;
    printf("Ângulo em radianos -> ");
    scanf("%la", &r);

    printf("Ângulo em graus -: %.14f \n", r*180/PI);
    
    return 0;
}
