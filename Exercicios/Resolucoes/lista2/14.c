/**************************************************************************
* Author: Lucas(heisen)
*
* A nota final de um estudante é calculada a partir de três notas 
* atribuı́das entre o intervalo de 0 até 10, respectivamente, a um trabalho 
* de laboratório, a uma avaliação semestral e a um exame final. A média das 
* três notas mencionadas anteriormente obedece aos pesos: Trabalho de 
* Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o 
* resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
* de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as 
* verificações necessárias.
**************************************************************************/
#include <stdio.h>
#define VALOR_MIN_NOTA 0
#define VALOR_MAX_NOTA 10
#define VALOR_APROVACAO 2.9
#define VALOR_RECUPERACAO 4.9

int main(void)
{
    double n1, n2, n3;
    printf("Entre com 3 notas -> ");
    scanf("%la%la%la", &n1, &n2, &n3);
    
    if((n1 > VALOR_MIN_NOTA && n1 <= VALOR_MAX_NOTA) && (n2 <= VALOR_MAX_NOTA && n2 > VALOR_MIN_NOTA) && (n3 <= VALOR_MAX_NOTA && n3 > VALOR_MIN_NOTA))
    {
        double media = n1*2+n2*3+n3*5/10;

        if(media <= VALOR_APROVACAO) printf("Reprovado\n");
        else if(media <= VALOR_RECUPERACAO) printf("Recuperacao\n");
        else printf("Aprovado\n");
    }
    else printf("As notas devem ser entre 0 e 10\n");
    
    return 0;
}
