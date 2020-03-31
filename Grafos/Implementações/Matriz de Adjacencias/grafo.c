#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>

int CriarGrafo(Grafo *G, int nvert) {
	int i, j;
	G->N=nvert;
	G->M=(int **)malloc(nvert*sizeof(int *));
	if (G->M==NULL) return 0;
	
	for(i=0;i<nvert;i++) {
		G->M[i]=(int*)malloc(nvert*sizeof(int));
		if(G->M[i]==NULL)
			return 0;
	}
}


if(!ExisteAresta(G,v1,v2))
    return 0;
G->M[v1][v2]=0;
G->M[v2][v2]=0;
return 1;
}
void VerticesAdjacentes(Grafo *G, int v) {
    int i;
    if (v<0 || v>G->n) return;

    for(i=0;i<G->n;i++) {
        if(G->M[v][i])
            printf("%d,", G->M[v][i]);
    }
}

//Exibe matriz
void ExibeGrafo(Grafo *G) {
    int i, j;

    for(i=0;i<G->n;i++) {
        printf("\n");

        for(j=0;j<G->n;j++)
            printf("%d\t",G->M[i][j]);
    }
}

void Destruir(Grafo *G) {
    int i;
    for(i=0;i<G->n;i++)
        free(G->M[i]);
    free(G->M);
}

int GrauVertice(Grafo *G, int v){
    //Fazer modificação VerticeAdjacentes
    int CriaGrafoVazio(Grafo *G) {
        G->n = 0;
    }
}

int GrafoVazio(Grafo *G) {
	G->N=0;
}

int Vazio(Grafo *G) {
	return(G->N==0);
}
