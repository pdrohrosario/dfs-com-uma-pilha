typedef struct{
	int **dados;
	int lin, col;
	int **verificados;
	int topoVerificados;
}Grafo;

void inicializa_grafo( Grafo *p, int l, int c );
void mostra_grafo( Grafo m );
void carrega_info_arq(Grafo *gf);
int pilha_vazia ( Grafo p );
int empilha ( Grafo *p, int info );
int desempilha ( Grafo *p, int *info );

