typedef struct{
	int **dados;
	int lin, col;
}Grafo;

void inicializa_grafo( Grafo *p, int l, int c );
void mostra_grafo( Grafo m );
void carrega_info_arq(Grafo *gf);
