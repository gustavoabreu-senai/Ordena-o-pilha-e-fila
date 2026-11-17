#include <stdio.h>
#define MAX 5

typedef struct {
	int dados[MAX];
	int topo;
} Pilha;

void inicializarPilha(Pilha *p){
	p->topo = -1;
}

int empilhar(Pilha *p, int valor){
	if (p->topo == MAX - 1)
		return 0;
		
	p->topo++;
	p->dados[p->topo]= valor;
	return 1;
}

int desempilhar(Pilha *p, int *valor){
	if (p->topo == -1)
		return 0;
	
	*valor = p->dados[p->topo];
	p->topo--;
	return 1;
}
int main(){
	Pilha p;
	int removido;
	inicializarPilha(&p);
	empilhar(&p, 101);
	empilhar(&p, 102);
	empilhar(&p, 103);
	if (desempilhar(&p, &removido))
		printf("Removido %d\n", removido);
	return 0;
}
