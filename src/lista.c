#include "lista.h"

void FLVazia(Lista *l) {
	l->first = (Block *) malloc(sizeof(Block));
	l->last = l->first;
	l->first->prox = NULL;
}

void LInsere(Lista *l, Item d) {
	l->last->prox = (Block *) malloc(sizeof(Block));
	l->last = l->last->prox;
	l->last->dado = d;
	l->last->prox = NULL;
}

void LRemove(Lista *l, Item d) {
	Block *aux, *tmp;

	if(l->last == l->first || l == NULL || l->first->prox == NULL) {
		printf("[Erro]: Lista vazia ou posicao nao existe\n");
		return;
	}

	aux = l->first;
	while(aux != NULL) {

		if(aux->prox->dado.val != d.val)
			aux = aux->prox;
		else {
			tmp = aux;
			aux = aux->prox;
			tmp->prox = aux->prox;
			free(aux);
		}
	}
}

void Limprime(Lista *l) {
	Block *aux;

	aux = l->first->prox;
	while(aux != NULL) {
		printf("%d\t", aux->dado.val);
		aux = aux->prox;
	}
}

void Swap(Block *a, Block *b) {
	Item aux;
	aux = a->dado;
	a->dado = b->dado;
	b->dado = aux;
}