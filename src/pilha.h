#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Pilha Pilha;

struct Item {
	int val;
};

struct Block {
	Item dado;
	Block *prox;
};

struct Pilha {
	Block *base;
	Block *top;
};

void FPVazia(Pilha *p);
void Push(Pilha *p, Item d);
void Pop(Pilha *p, Item *d);
void Pimprime(Pilha *p);

#endif