#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct lista
{
	float info;
	struct lista* prox;
};

struct fila
{
	Lista* inicio;
	Lista* fim;
};

Fila* criar_fila()
{

	Fila* fila = (Fila*)malloc(sizeof(Fila));
	fila->inicio = fila -> fim = NULL;
	return fila;

}

void inserir(Fila* fila, float valor)
{
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->info = valor;
	novo-> prox = NULL;
	if (fila->fim != NULL)
	{
		fila ->fim ->prox = novo;
	}
	else
	{
		fila->inicio = novo;
	}
	fila -> fim = novo;

}

int vazia (Fila* fila)
{
	return (fila->inicio == NULL);
}

float remover (Fila* fila)
{
	Lista *temp;
	float valor;
	if (vazia(fila))
	{
		printf("Fila vazia\n");
		exit(1);
	}
	temp = fila-> inicio;
	valor = temp->info;
	fila -> inicio = temp -> prox;
	if (fila->inicio == NULL)
	{
		fila->fim = NULL;
	}
	free(temp);
	return valor;
}

void liberar(Fila* fila)
{
	Lista* aux = fila->inicio;

	while (aux != NULL)
	{
		Lista* temp = aux->prox;
		free(aux);
		aux = temp;
	}
}



void imprimir(Fila* fila)
{
	Lista* aux = fila->inicio;
	while(aux != NULL)
	{
		printf("%.2f  ", aux->info);
		aux = aux -> prox;
	}
}
















