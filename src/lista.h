#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Lista Lista;

struct Item {
	int val;
};

struct Block {
	Item dado;
	Block *prox;
};

struct Lista {
	Block *first;
	Block *last;
};

void FLVazia(Lista *l);
void LInsere(Lista *l, Item d);
void LRemove(Lista *l, Item d);
void Swap(Block *a, Block *b);
void Limprime(Lista *l);

#endif