/**************************************************************************
* Author: Lucas(heisen)
*
* Leia o salário de um funcionário. Calcule e imprima o valor do novo 
* salário, sabendo que ele recebeu um aumento de 25%.
**************************************************************************/
#include <stdio.h>
#define AUMENTO 0.25

int main(void)
{
    float s;
    printf("Entre com o salario -> ");
    scanf("%f", &s);

    printf("[+] Com aumento -> %.2f\n", s + (s*AUMENTO));
    
    return 0;
}
