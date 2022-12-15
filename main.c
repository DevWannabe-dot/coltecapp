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

/* Constantes */
#define SUCESSO (0)

/* Tipos */
typedef int bool_t;

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
}

int listaProfessores(void) {
	// tabela simples com mat�rias e professores
}

int main(int argc, char ** argv) {
	
	int opcao = 0;
	
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

		if (scanf("%d", &opcao) != 0) {
			switch (opcao) {
			case 0:
				puts("<Encerrando...>");
				break;
			case 1:
				if(listaSalas() <= 0) fprintf(stderr, "\n<Erro 2: lista n�o p�de ser impressa.>\n");
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
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