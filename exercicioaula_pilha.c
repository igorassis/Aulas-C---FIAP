#include<stdio.h>
#include<stdlib.h>

#include"tipopilhaINT.h"

/*
	Insere n elemntos na pilha
	retira todos os elemento até a pilha ficar vazia
*/



/* declaracao do no */
	struct no { 
		int dado;   //tipo do elemento da pilha
		struct no *prox;
	};

/*Definição do tipo de dado pilha */ 
	typedef struct no* tipopilha;

void INIT (tipopilha *topo)
{
*topo = NULL;
}

int IsEmpty(tipopilha topo)
{
if (topo == NULL)
   return(1);
else
  return(0);
}


void PUSH (tipopilha *topo, int elem)
{
tipopilha novo;
novo = (tipopilha) malloc (sizeof(struct no));
if (novo != NULL)
	{
	novo->dado=elem;
	novo->prox=*topo;
	*topo = novo;
	}
else
	printf("pilha cheia \n");
}

int POP (tipopilha *topo,int *elem)
{
tipopilha aux;
aux = *topo;
if (!IsEmpty(*topo))   {
     *elem=aux->dado;
     *topo=aux->prox;
     free(aux);
     return(1);
     }
else {
	printf("pilha vazia \n ");
    return(0);
    }
}


int TOP (tipopilha topo,int *elem)
{
if (!IsEmpty(topo))   {
     *elem= topo->dado;
     return(1);
     }
else {
       printf("pilha vazia \n ");
       return(0);
       }
}

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
	

