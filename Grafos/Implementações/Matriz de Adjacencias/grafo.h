//estrutura de dados

//grafo n�o direcionado

typedef struct {
	int **M;//ponteiro que aponta para a matriz
	int N;//n�mero de v�rtices//ordem da matriz
} Grafo;

//Opera��es
int GrafoVazio(Grafo *G);//Isso n�o ser� utilizado neste programa, somente em programas com grafos din�micos
int CriaGrafo(Grafo *G, int nvert);
int InserirAresta(Grafo *G, int v1, int v2);
int RemoverAresta(Grafo *G, int v1, int v2);
int ExisteAresta(Grafo *G, int v1, int v2);
void VerticesAdjacentes(Grafo *G, int v);
void ExibeGrafo(Grafo *G);
int GrauVertices(Grafo *G, int v);
void Destruir(Grafo *G);
int Vazio(Grafo *G);
