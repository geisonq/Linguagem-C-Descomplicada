/**************************************************************************
* Author: Lucas(heisen)
*
* Faça um programa que leia o horário (hora, minuto e segundo) de inicio 
* e a duração, em segundos, de uma experiência biológica. O programa deve 
* resultar com o novo horário (hora, minuto e segundo) do termino da mesma. 
**************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int hora, minuto, segundo, duracao;
    printf("Entre com o horario de inicio(HH:MM:SS) -> ");
    scanf("%d%d%d", &hora, &minuto, &segundo);
	
	printf("Duração em segundos -> ");
	scanf("%d", &duracao);
	
	printf("\n Inicio da experiência %d:%d:%d \n\n", hora, minuto, segundo);
	
	unsigned int inicio = (hora * 60 + minuto) * 60 + segundo;
	unsigned int termino = inicio + duracao;
	unsigned int fimSegundo = termino % 60;
	
	termino = termino / 60;
	
	unsigned int fimMinuto = termino % 60;
	unsigned int fimHora = termino / 60;
	
	printf(" Fim da experiência %d:%d:%d \n", fimHora, fimMinuto, fimSegundo);
}
