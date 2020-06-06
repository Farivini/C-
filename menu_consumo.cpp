#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <assert.h>
#include <iostream>

int escolha;
int total = 0;
int coluna; 
int linha; 
int def; 
int big = 0;
float maior;
float menor;
float media; 
float kw = 1.75;
float clientes[10][3];

int main()
{
	
	
	inicio:
	

		printf("\t\Bem vindo ao menu: \n\n");
		printf("\t\------------------------------------------------------------------|\n\n");
		printf("\t\Escolha uma opcao abaixo:                                         |\n");
		printf(" \t\Digite 1 para novo usuario                                        |\n");
		printf(" \t\Digite 2 para Verificar qual cliente teve maior consumo           |\n");
		printf(" \t\Digite 3 para saber a media do consumo dos clientes cadastrados   |\n");
		printf(" \t\Digite 4 para saber quem teve menor consumo                       |\n");
		printf(" \t\Digite 5 para exibir quais clientes ultrapassem 170 kw            |\n");
		printf(" \t\Digite 6 para relatorio de todas as contas                        |\n");
		printf(" \t\7- SAIR                                                           \n");
		printf("\t\------------------------------------------------------------------|\n\n");
		printf("\t\ - Digite sua opcao desejada: ");
		scanf_s("%d", &escolha);
		Sleep(2000);

		switch (escolha) {
		case 1:

			if (total <= 150) {
				printf("\n\t\Coloque o numero da nova conta:   ");
				scanf_s("%f", &clientes[total][0]);
				printf("\n\t\ Agora coloque o KW consumido pelo mesmo:  ");
				scanf_s("%f", &clientes[total][1]);
				clientes[total][2] = clientes[total][1] * kw;
				total = total + 1;
			}
			else {
				printf("Limite de cadastro atingido");
			}
			Sleep(1000);

			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE


		case 2:
			def = 0;
			escolha = 0;
			maior = 0;
			if (total != 0) {
				for (linha = 0; linha < total; ++linha)
				{
					if (maior < clientes[linha][1])
					{
						maior = clientes[linha][1];
						def = linha;
					}
				}
				printf("Agora sera mostrado o maior consumo e de qual cliente foi:\n Cliente %f\n Consumiu %f\n Gasto %f\n", clientes[def][0], clientes[def][1], clientes[def][2]);
				if (total == 0)
				{
					printf(" Erro nao a clientes cadastrados\n");
				}
			}
			Sleep(1000);
			
			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE

		case 3:// opcao 3
			escolha = 0;
			media = 0;
			if (total != 0)
			{
				for (linha = 0; linha < total; ++linha)
				{
					media = media + clientes[linha][1];
				}
				media = media / total;
				printf("\t\A media consumida de todos os clientes %f kw\n", media);

			}
			else {
				printf("Nao a clientes no cadastro");
			}
			
			Sleep(1000);
			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE

		case 4: //Digite 4 para saber quem teve menor consumo
			escolha = 0;
			menor = clientes[0][1];
			def = 0;
			if (total != 0)
			{
				for (linha = 0; linha < total; ++linha)
				{
					if (menor > clientes[linha][1])
					{
						def = linha;
					}
				}
				printf("Agora sera mostrado o menor consumo: que e do cliente com numero da conta %f:\n Consumo foi %f:\n Que consumiu %f:\n", clientes[def][0], clientes[def][1], clientes[def][2]);

			}
			else
			{
				printf("Erro nenhum cliente encontrado");
			}
			Sleep(1000);
			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE

		case 5: // Digite 5 para exibir quais clientes ultrapassem 170 kw
			escolha = 0;
			media = 0;
			if (total != 0)
			{
				printf("---- OS SEGUINTES CLIENTES PASSARAM DO LIMITE DE CONSUMO DE 170 KW ----\n");
				for (linha = 0; linha < total; ++linha)
				{
					if (clientes[linha][1] > 170)
					{

					}
					for (coluna = 0; coluna < 3; ++coluna)
					{
						printf("      %f      ", clientes[linha][coluna]);
					}
				}

			}
			Sleep(1000);
			
			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE



		case 6: //Digite 6 para relatorio de todas as contas
			escolha = 0;
			if (total != 0)
			{
				for (linha = 0; coluna < 3; ++coluna)
				{
					for (coluna = 0; coluna < 3; ++coluna)
					{
						printf("     %f    \n", clientes[linha][coluna]);
					}
				}
			}
			else
			{
				printf("ERRO NAO A CLIENTES\n");
			}
			Sleep(1000);
			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE

		case 7: //sair
			printf("VOCE DESEJA REALMENTE SAIR?\n 1 - SIM\n 2 - NAO\n");
			scanf_s("%d", &big);
			if (big == 1)
			{
				exit(0);
			}
			goto inicio;//RETORNA AO MENU , PEGUEI ESSA SOLUÇAO POIS NAO CONSEGUI ELABORAR OUTRA MAIS EFICIENTE



		}

	

}

