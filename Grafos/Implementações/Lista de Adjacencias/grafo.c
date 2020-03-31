#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>

int GrafoVazio(Grafo *G) {
}
int CriaGrafoVazio(Grafo *G){
	G->N=0;
}
int CriaGrafo(Grafo *G, int nvert){
	int i;
	G->N=nvert;
	
	G->L = (No **)malloc(nvert*sizeof(No*));
	
	if(G->L==NULL)return 0;
	
	for(i=0; i<nvert; i++)
		G->L[i]=NULL;
		
	return 1;
}
int InserirAresta(Grafo *G, int v1, int v2){
	No *p;
	
	if(ExisteAresta(G, v1, v2)) return 0;
	
	//inserir no inicio
	//inserindo v1->v2
	p = (No*)malloc(sizeof(No));
	if(p==NULL) return 0;
	
	p->vert = v2;
	p->prox = G->L[v1];
	G->L[v1] = p;
	
	//inserindo v2->v1
	p = (No*)malloc(sizeof(No));
	if(p==NULL) return 0;
	
	p->vert = v1;
	p->prox = G->L[v2];
	G->L[v2] = p;
	return 1;
}
int RemoverAresta(Grafo *G, int v1, int v2){
	No *p, *q;
	if(!ExisteAresta(G, v1, v2)) return 0;
	
	//removendo aresta v1 -> v2
	p = G->L[v1];
	q = NULL;
	
	while(p && p->vert!=v2){
		q = p;
		p = p->prox;
	}
	if(q==NULL) {
		G->L[v1]->prox = p->prox;
	}
	else
		q->prox = p->prox;
	free(p);
	return 1;
}

int verticeValido(Grafo *G, int v) {
	if(v<0 || v>G->N) return 0;
	
}
int ExisteAresta(Grafo *G, int v1, int v2){
	No *p;
	
	if(Vazio(G)) return 0;
	if(!verticeValido(G,v1) || !verticeValido(G,v2))
		return 0;
		
	if(G->L[v1]==NULL) return 0;
	
	p = G->L[v1];
	
	while(p && p->vert != v2){
		p = p->prox;
	}
	
	if (p==NULL) return 0;
	
	return 1;
}
void VerticesAdjacentes(Grafo *G, int v){
}
void ExibeGrafo(Grafo *G){
	No *p;
	int i;
	if(Vazio(G)) printf("Grafo Vazio\n");
	else {
		for(i = 0; i<G->N; i++) {
			printf("%d -> ", i);
			p = G->L[i];
			while(p) { //(p != NULL)
				printf("%d,", p->vert);
				p = p->prox;
			}//while
		}//for
	}//else
}//ExibeGrafo
int GrauVertice(Grafo *G, int v){
	int cont = 0;
	No *p = G->L[v];
	while(p) {
		cont++;
		p = p->prox;
	}
	return cont;
	
	
}
void Adjacentes(Grafo *G, int v) {
	No *p = G->L[v];
	while(p) {
		printf("%d, ", p->vert);
		p = p->prox;
	}
}
void Destruir(Grafo *G){
	No *p, *q;
	int i;
	
	if(Vazio(G)) return;
	for(i = 0; i < G->N; i++) {
		p = G->L[i];
		while(p) {
			q = p;
			p = p->prox;
			free(q);
		}//while
	}//for
	free(G->L);
}//Destruir
int Vazio(Grafo *G){
	return (!G->N);
}
