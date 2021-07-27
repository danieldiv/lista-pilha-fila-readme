#include "pilha.h"

void FPVazia(Pilha *p) {
	p->base = (Block *) malloc(sizeof(Block));
	p->top = p->base;
	p->base->prox = NULL;
}

void Push(Pilha *p, Item d) {
	Block *aux = (Block *) malloc(sizeof(Block));
	aux->dado = d;
	aux->prox = p->top;
	p->top = aux;
}

void Pop(Pilha *p, Item *d) {
	Block *aux;

	if(p->base == p->top || p == NULL) {
		printf("[Erro]: PILHA VAZIA!!\n");
		return;
	}

	aux = p->top;
	p->top = p->top->prox;
	d->val = aux->dado.val;
	free(aux);
}

void Pimprime(Pilha *p) {
	Block *aux;

	aux = p->top;
	while(aux != p->base) {
		printf("%d\n", aux->dado.val);
		aux = aux->prox;
	}
}
