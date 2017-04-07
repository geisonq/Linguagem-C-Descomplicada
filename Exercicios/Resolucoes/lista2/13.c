/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
* A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. 
* Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou 
* reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos
**************************************************************************/
#include <stdio.h>
#define NOTA_APROVACAO 60
#define PESO_NOTA_1 1
#define PESO_NOTA_2 1
#define PESO_NOTA_3 2

int main(void)
{
    float n1, n2, n3;
    printf("Entre com a nota de 3 provas -> ");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    float media = (n1*PESO_NOTA_1)+(n2*PESO_NOTA_2)+(n3*PESO_NOTA_3)/PESO_NOTA_1+PESO_NOTA_2+PESO_NOTA_3;
    printf("[+] Media -> %.2f\n", media);
    
    (media >= NOTA_APROVACAO) ? printf("[+] Aprovado!\n") 
                              : printf("[+] Reprovado!\n");
    
    return 0;
}
