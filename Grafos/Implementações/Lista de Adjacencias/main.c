#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Grafo G;
    int v1, v2, op;
    GrafoVazio(&G);

    do {
        system("cls");
        printf("Grafo_Matriz de Adjacencias");
        printf("\n\n1 CRIA GRAFO\n");
        printf("2 VAZIO\n");
        printf("3 INSERE ARESTA\n");
        printf("4 REMOVE ARESTA\n");
        printf("5 EXIBE ARESTA\n");
        printf("6 VERTICES ADJACENTES\n");
        printf("7 GRAU VERTICE\n");
        printf("8 EXIBE GRAFO\n");
        printf("0 SAIR\n");

    } while(0);
}
