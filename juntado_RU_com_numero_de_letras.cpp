#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <assert.h>
#include <iostream>

int main()
{
	printf("\t\t\Bem vindo ao exercicio 4 \n\n");
	char primeironome[20];
	char segundonome[20];
	int RU;
	int i = 0;
	int um;
	int dois;
	int espaco;
	int espaco2;
	char juntando[40];
	int linha;


	Sleep(2000);
	system("cls");
	printf("\t\t\ Digite seu primeiro nome sem espacos\n\n");
	gets_s(primeironome);
	printf("\t\t\ Digite seu segundo nome sem espacos\n\n");
	gets_s(segundonome);
	printf("\t\t\ Digite o ultimo digito do seu RU \n\n \t\t (POR EXEMPLO 1141678, NUMERO DIGITADO SERA 8 ) \n\n");
	scanf_s("%d", &RU);
	espaco = strlen(primeironome);
	espaco2 = strlen(segundonome);
	printf("\t\t\  Conferindo dados   \n\n", primeironome, segundonome);
	Sleep(2000);
	printf("\t\t\ O nome digitado foi    %s   %s   \n\n", primeironome, segundonome);
	printf("\t\t\ O numero digitado e  %d \n\n", RU);
	printf("\t\t\ Confira dados e continue\n\n");
	system("pause");

	um = 0;
	dois = RU;

	for (linha = 0; linha < RU; ++linha)
	{
		juntando[linha] = primeironome[linha];

	}
	for (linha = RU; linha < RU + espaco2; ++linha)
	{
		juntando[linha] = segundonome[um];
		um = um + 1;
	}
	for (linha = RU + espaco2; linha < espaco + espaco2; ++linha)
	{
		juntando[linha] = primeironome[RU];
		RU = RU + 1;
	}
	juntando[espaco + espaco2] = '\0';
	printf("\t\t\t  %s   \n\n\n", juntando);
	system("pause");




	return 0;


}



