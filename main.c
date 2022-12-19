/**
* @file main.c
* @brief Componente principal do projeto ColtecApp, em C/C++
* @author Pedro Henrique Pinto de Oliveira
* @date 2022-10-09
*/

/* Inclusões */
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
				"| Mecânica     | Lab Verde    | 302          |\n"
				"+--------------+--------------+--------------+\n"
				"| Madeira      | Lab Amarelo  | 308          |\n"
				"+--------------+--------------+--------------+\n"
				"| Informática  | Lab Vermelho | 309          |\n"
				"+--------------+--------------+--------------+\n"
				"| Grêmio       | Lab. 216     | 325          |\n"
				"+--------------+--------------+--------------+\n"));
	// 1. substituir nomes por %s e incluir parâmetros char[] na chamada da função
	// 2. escrever lista de salas e professores em arquivo.txt
}

bool_t salaOcupada(unsigned short ID) {
	// sincronizar com tempo
	// @return valor booleano 0 ou 1, interpretado em listaHorariosSala()
	return SUCESSO;
}

void listaHorariosSala(unsigned short ID) {
	
	// Lista horários conhecidos em que a sala é usada, formatado em tabela por dia
	if (salaOcupada(ID)) {
		printf("\n\t* A sala solicitada está OCUPADA\n");
	}
	else printf("\n\t* A sala solicitada está LIVRE\n");
}

int listaProfessores(void) {
	// tabela simples com matérias e professores
	return SUCESSO;
}

int main(int argc, char ** argv) {
	
	int opcao = 0;
	char lixo;
	unsigned short ID_sala;
	
	setlocale(LC_ALL, "Portuguese");
	
	puts("\n"
		"\aSeja bem-vinda(o) ao app do Coltec! Com essa utilidade\n"
		"você pode ter controle sobre o que acontece dentro da \n"
		"sua maravilhosa escola!"
		"\n________________________________________________________");

	do {
		puts("\n"
			"Opções:\n"
			"0) SAIR\n"
			"\n"
			"1) Lista de salas\n"
			"2) Lista de professores\n"
			"3) Lista de turmas\n"
			"\n"
			"4) Horários por sala\n"
			"5) Horários por professor\n"
			"6) Horários por turma");

		if (scanf("%d%c", &opcao, &lixo)) {
			switch (opcao) {
			case 0:
				puts("<Encerrando...>");
				break;
			case 1:
				if(listaSalas() <= 0) fprintf(stderr, "\n<Erro 2: lista não pôde ser impressa.>\n");
				break;
			case 2:
				// Lista de professores
				break;
			case 3:
				// Lista de turmas
				break;
			case 4:
				printf("Qual sala deseja saber os horários? ");
				(void)scanf("%hu%c", &ID_sala, &lixo);
				listaHorariosSala(ID_sala);
				break;
			case 5:
				// Horários por professor
				break;
			case 6:
				// Horários por turma
				break;
			default:
				fprintf(stderr, "\n<Erro 1: função não existe\n");
				break;
			}
		}
		else continue;
	} while (opcao != 0);

	return SUCESSO;
}