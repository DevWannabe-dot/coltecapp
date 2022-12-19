/**
* @file main.c
* @brief Componente principal do projeto ColtecApp, em C/C++
* @author Pedro Henrique Pinto de Oliveira
* @date 2022-10-09
*/

/* Inclus�es */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdint.h>

/* Constantes */
#define SUCESSO (0)

/* Tipos */
typedef uint8_t bool_t;

typedef struct estrutura_salas {
	unsigned short ID;
	uint8_t andar;
} salas;

// coltecapp
// void imprimeTabelaHorarios(int x[], int y[])
// int LabVerde[] = {0, 1, 2}
// time.h

int listaSalas(void) {
	return(printf("+--------------+--------------+--------------+\n"
				"| %-12s | %-12s | %-12s", "1o andar", "2o andar", "3o andar     |\n"
				"+--------------+--------------+--------------+\n"
				"| Mec�nica     | Lab Verde    | 302          |\n"
				"+--------------+--------------+--------------+\n"
				"| Madeira      | Lab Amarelo  | 308          |\n"
				"+--------------+--------------+--------------+\n"
				"| Inform�tica  | Lab Vermelho | 309          |\n"
				"+--------------+--------------+--------------+\n"
				"| Gr�mio       | Lab. 216     | 325          |\n"
				"+--------------+--------------+--------------+\n"));
	// 1. substituir nomes por %s e incluir par�metros char[] na chamada da fun��o
	// 2. escrever lista de salas e professores em arquivo.txt
}

bool_t salaOcupada(unsigned short ID) {
	// sincronizar com tempo
	// @return valor booleano 0 ou 1, interpretado em listaHorariosSala()
	return SUCESSO;
}

void listaHorariosSala(unsigned short ID) {
	
	// Lista hor�rios conhecidos em que a sala � usada, formatado em tabela por dia
	if (salaOcupada(ID)) {
		printf("\n\t* A sala solicitada est� OCUPADA\n");
	}
	else printf("\n\t* A sala solicitada est� LIVRE\n");
}

int listaProfessores(void) {
	// tabela simples com mat�rias e professores
	return SUCESSO;
}

int main(int argc, char ** argv) {
	
	int opcao = 0;
	char lixo;
	unsigned short ID_sala;
	
	setlocale(LC_ALL, "Portuguese");
	
	puts("\n"
		"\aSeja bem-vinda(o) ao app do Coltec! Com essa utilidade\n"
		"voc� pode ter controle sobre o que acontece dentro da \n"
		"sua maravilhosa escola!"
		"\n________________________________________________________");

	do {
		puts("\n"
			"Op��es:\n"
			"0) SAIR\n"
			"\n"
			"1) Lista de salas\n"
			"2) Lista de professores\n"
			"3) Lista de turmas\n"
			"\n"
			"4) Hor�rios por sala\n"
			"5) Hor�rios por professor\n"
			"6) Hor�rios por turma");

		if (scanf("%d%c", &opcao, &lixo)) {
			switch (opcao) {
			case 0:
				puts("<Encerrando...>");
				break;
			case 1:
				if(listaSalas() <= 0) fprintf(stderr, "\n<Erro 2: lista n�o p�de ser impressa.>\n");
				break;
			case 2:
				// Lista de professores
				break;
			case 3:
				// Lista de turmas
				break;
			case 4:
				printf("Qual sala deseja saber os hor�rios? ");
				(void)scanf("%hu%c", &ID_sala, &lixo);
				listaHorariosSala(ID_sala);
				break;
			case 5:
				// Hor�rios por professor
				break;
			case 6:
				// Hor�rios por turma
				break;
			default:
				fprintf(stderr, "\n<Erro 1: fun��o n�o existe\n");
				break;
			}
		}
		else continue;
	} while (opcao != 0);

	return SUCESSO;
}