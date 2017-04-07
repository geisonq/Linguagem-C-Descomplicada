/**************************************************************************
* Author: Lucas(heisen)
*
* Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De
* acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre 
* uma redução de conceito.
*
* |     NOTA     | CONCEITO (ATÉ 20 FALTAS) | CONCEITO (MAIS DE 20 FALTAS) |
* |--------------|--------------------------|------------------------------|
* | 9.0 até 10.0 | A                        | B                            |
* | 7.5 até 8.9  | B                        | C                            |
* | 5.0 até 7.4  | C                        | D                            |
* | 4.0 até 4.9  | D                        | E                            |
* | 0.0 até 3.9  | E                        | E                            |
**************************************************************************/
#include <stdio.h>

int main(void)
{
    float nota;
    int nro_faltas;
    printf("Entre com a nota -> ");
    scanf("%f", &nota);
    printf("Entre com o numero de faltas -> ");
    scanf("%d", &nro_faltas);
    
    if(nota > 10 || nota < 0)
        printf("Nota deve estar entre 0 e 10\n");
    else if(nota > 9.0 && nota <= 10.0)
        (nro_faltas <= 20) ? printf("Conceito A\n") : printf("Conceito B\n");
    else if(nota >= 7.5)
        (nro_faltas <= 20) ? printf("Conceito B\n") : printf("Conceito C\n");
    else if(nota >= 5.0)
        (nro_faltas <= 20) ? printf("Conceito C\n") : printf("Conceito D\n");
    else if(nota >= 4.0)
        (nro_faltas <= 20) ? printf("Conceito D\n") : printf("Conceito E\n");
    else
        (nro_faltas <= 20) ? printf("Conceito E\n") : printf("Conceito E\n");
    
    return 0;    
}
