DFS(Grafo *G, int vi)
{
	int Pilha[G->N];
	int fp = 0;
	int Visitados[G->N];
	
	for(int i = 0; i < G->N; i++)
		Visitados[i] = 0;
	
	DFS_rec(G, Pilha, Visitados, vi, &fp);
}

DFS_rec(Grafo *G; int P[]; int Visitados[], int v, int *fp)
{
	Visitados[v]++;
	P[*fp] = v;
	*fp++;
	No *q;
	
	for(q = G->L[v]; q != NULL; q = q->prox)
	{
		if (visitados(q->vert) == 0)
		{
			printf("%d %d", v, q->vert);
			DFS_rec(G, P, Visitados, q->vert, fp);
		}
		
		if ( EstaNaPilha(q->vert, P) && (P[fp-2] != q->vert) )
			printf("%d %d", v, q->vert);
	}
}
