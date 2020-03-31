//estrutura de dados

//grafo não direcionado


typedef struct no {
	int vert;
	struct no *prox;
} No;

typedef struct {
	No **L;
	int N;//número de vértices//ordem da matriz
} Grafo;

//Operações
int GrafoVazio(Grafo *G);//Isso não será utilizado neste programa, somente em programas com grafos dinâmicos
int CriaGrafoVazio(Grafo *G);
int CriaGrafo(Grafo *G, int nvert);
int InserirAresta(Grafo *G, int v1, int v2);
int RemoverAresta(Grafo *G, int v1, int v2);
int ExisteAresta(Grafo *G, int v1, int v2);
int verticeValido(Grafo *G, int v);
void VerticesAdjacentes(Grafo *G, int v);
void ExibeGrafo(Grafo *G);
int GrauVertices(Grafo *G, int v);
void Destruir(Grafo *G);
int Vazio(Grafo *G);
