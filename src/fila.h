#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Fila Fila;

struct Item {
	int val;
};

struct Block {
	Item dado;
	Block *prox;
};

struct Fila {
	Block *first;
	Block *last;
};

void FFVazia(Fila *f);
void Enfileira(Fila *f, Item d);
void Desenfileira(Fila *f, Item *d);
void Fimprime(Fila *f);

#endif