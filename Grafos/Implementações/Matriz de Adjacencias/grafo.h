//estrutura de dados

//grafo não direcionado

typedef struct {
	int **M;//ponteiro que aponta para a matriz
	int N;//número de vértices//ordem da matriz
} Grafo;

//Operações
int GrafoVazio(Grafo *G);//Isso não será utilizado neste programa, somente em programas com grafos dinâmicos
int CriaGrafo(Grafo *G, int nvert);
int InserirAresta(Grafo *G, int v1, int v2);
int RemoverAresta(Grafo *G, int v1, int v2);
int ExisteAresta(Grafo *G, int v1, int v2);
void VerticesAdjacentes(Grafo *G, int v);
void ExibeGrafo(Grafo *G);
int GrauVertices(Grafo *G, int v);
void Destruir(Grafo *G);
int Vazio(Grafo *G);
