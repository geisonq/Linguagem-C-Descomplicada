/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia 2 notas de um aluno, verifique se as notas são 
* válidas e exiba na tela a média destas notas. Uma nota válida deve ser, 
* obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua
* um valor válido, este fato deve ser informado ao usuário e o programa 
* termina.
**************************************************************************/
#include <stdio.h>
#define NOTA_MIN 0.0
#define NOTA_MAX 10.0

int main(void)
{
    float n1, n2;
    printf("Entre com duas notas -> ");
    scanf("%f%f", &n1, &n2);

    (n1 <= NOTA_MAX && n1 >= NOTA_MIN && n2 <= NOTA_MAX && n2 >= NOTA_MIN) 
        ? printf("[+] media das notas -> %.2f\n", (n1+n2/2))
        : printf("Nota(s) Invalida(s)\n");

    return 0;
}
