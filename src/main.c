// #include "lista.h"
// #include "pilha.h"
#include "fila.h"

int main() {

	Item vet[] = {3, 2, 5, 1, 8, 12, 7};
	Item item;

	/*
		UTILIZANDO FILA
	*/

	// Lista *l;
	// FLVazia(l);


	// for(int i=0; i < 7; i++) {
	// 	LInsere(l, vet[i]);
	// }
	// Limprime(l);

	/*
		UTILIZANDO PILHA
	*/

	// Pilha *p;
	// FPVazia(p);

	// for(int i=0; i < 7; i++) {
	// 	Push(p, vet[i]);
	// }
	// Pimprime(p);
	// printf("\n");

	// while(p != NULL) {
	// 	Pop(p, &item);

	// 	if(p->base == p->top || p == NULL)
	// 		break;

	// 	Pimprime(p);
	// 	printf("\n");
	// }

	/*
		UTILIZANDO FILA
	*/

	Fila *f;
	FFVazia(f);

	for(int i=0; i < 7; i++) {
		Enfileira(f, vet[i]);
	}
	Fimprime(f);
	printf("\n");

	while(f != NULL) {
		Desenfileira(f, &item);
		Fimprime(f);
		printf("\n");

		if(f->first == f->last || f == NULL || f->first->prox == NULL){
			break;
		}
	}

	for(int i=0; i < 7; i++) {
		Enfileira(f, vet[i]);
		Fimprime(f);
		printf("\n");
	}

	return 0;
}