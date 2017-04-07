/**************************************************************************
* Author: Lucas(heisen)
*
* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele 
* pode ou não se aposentar. As condições para aposentadoria são
* > Ter pelo menos 65 anos,
* > Ou ter trabalhado pelo menos 30 anos,
* > Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int i, ts;
    printf("Entre com a idade e o tempo de servico -> ");
    scanf("%d%d", &i, &ts);
    
    (i >= 65 || ts >= 30 || (i >= 60 && ts >= 25))
        ? printf("Pode se aposentar\n")
        : printf("Nao pode se aposentar\n");
    
    return 0;
}
