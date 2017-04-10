/**************************************************************************
* Author: Lucas(heisen)
*
* Leia uma data de nascimento de uma pessoa fornecida através de três
* números inteiros: Dia, Mês e Ano. Teste a validade desta data para saber
* se esta é uma data válida. Teste se o dia fornecido é um dia válido:
* dia > 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for bissexto),
* dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros meses. 
* Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano:
* ano ≤ ano atual (use uma constante definida com o valor igual a 2008). 
* Imprimir: “data válida” ou “data inválida” no final da execução do
* programa.
**************************************************************************/
#include <stdio.h>
#define ANO_ATUAL 2017

int main(void)
{
    int d, m, a;
    printf("Entre com a data de nascimento(dd/mm/aaaa) -> ");
    scanf("%d/%d/%d", &d, &m, &a);
    
    if((d > 31 || d < 0) || (m > 12 || m < 0) || (a > ANO_ATUAL)) printf("Data Invalida\n");
    else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) printf("Data Invalida\n");
    else if((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && (m == 2 && d <= 29)) printf("Data Valida\n");
    else if(m == 2 && d > 28) printf("Data Invalida\n");
    else printf("Data Valida\n");
    
    return 0;
}
