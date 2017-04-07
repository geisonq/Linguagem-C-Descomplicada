/**************************************************************************
* Author: Lucas(heisen)
*
* Leia o salário de um trabalhador e o valor da prestação de um empréstimo.
* Se a prestação for maior que 20% do salário imprima: Empréstimo não 
* concedido, caso contrário imprima: Empréstimo concedido.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float s, pe;
    printf("Entre com o salario e valor da prestacao -> ");
    scanf("%f%f", &s, &pe);
    
    (pe > s * 0.20) ? printf("Emprestimo nao concedido\n") 
                    : printf("Emprestimo concedido\n");
    
    return 0;
}
