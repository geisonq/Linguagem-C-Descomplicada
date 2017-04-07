/**************************************************************************
* Author: Lucas(heisen)
*
* Escreva um programa que, dada a idade de um nadador, o classifique em uma
* das seguintes categorias:
*
*   Categoria          Idade         
*  ------------- -------------------- 
*   Infantil A    5-7                 
*   Infantil B    8-10                
*   Juvenil A     11-13               
*   Juvenil B     14-17               
*   Sênior        maiores de 18 anos 
**************************************************************************/
#include <stdio.h>

int main(void)
{
    int idade;
    printf("Entre com a idade λ> ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7) printf("[λ] Nadador Infantil A\n");
    else if(idade <= 10) printf("[λ] Nadador Infantil B\n");
    else if(idade <= 13) printf("[λ] Nadador Juvenil A\n");
    else if(idade <= 17) printf("[λ] Nadador Juvenil B\n");
    else printf("[λ] Nadador Senior\n");

    return 0;
}
