/**************************************************************************
* Author: Lucas(heisen)
*
* Receba o salário-base de um funcionário. Calcule e imprima o salário a 
* receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre 
* o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.
**************************************************************************/
#include <stdio.h>
#define GRAT 0.05
#define IMP 0.07

int main(void)
{
    float s;
    printf("Entre com o valor do salario -> ");
    scanf("%f", &s);
    
    printf("[+] Salario a receber -> %.2f\n", s + (s * GRAT) - (s * IMP));
    
    return 0;
}
