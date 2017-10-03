#include<stdio.h>
#include<stdlib.h>
#include "tipopilhaINT.h"
int main()
{
	tipopilha topo;
	int v;
	INIT(&topo);
	PUSH(&topo,3);
	PUSH(&topo,4);
	if (TOP(topo,&v)==1)
		printf("valor do topo da pilha %d\n", v);
	if (POP(&topo,&v)==1)
		printf("valor do topo da pilha %d\n", v);
	PUSH(&topo,5);	
	if (POP(&topo,&v)==1)
		printf("valor do topo da pilha %d\n", v);
	if (POP(&topo,&v)==1)
		printf("valor do topo da pilha %d\n", v);
	if (POP(&topo,&v)==1)
		printf("valor do topo da pilha %d\n", v);
		
}
	

