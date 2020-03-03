//Fila = fila de banco
//FIFO First in First Out
//Precisamos de 2 ponteiros, 1 para o início da fila e outro para o final da fila
//quando chega, chega no final da fila; quando sai, sai do início da fila.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"



int main()
{	
	setlocale(LC_ALL,"");
	printf("Fila funciona como fila do Banco!\n");
	printf("Primeiro que entra é o primeiro a sair a sair\n\n");
	
	Fila* fila = criar_fila();
	
	inserir(fila,10);
	inserir(fila,20);
	inserir(fila,35);
	inserir(fila,60);
	imprimir(fila);
	remover(fila);
	printf("\n\n");
	imprimir(fila);
	remover(fila);
	printf("\n\n");
	imprimir(fila);
	remover(fila);
	printf("\n\n");
	imprimir(fila);
	printf("\n\n");
	system("PAUSE");
	
	
	return 0;
}