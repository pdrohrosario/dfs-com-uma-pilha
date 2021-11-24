#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"

void inicializa_grafo( Grafo *p, int l, int c ){
	p->lin = l;
	p->col = c;
	
	p->dados = malloc( sizeof(int *) * l );
	p->vertice = malloc(sizeof(int *) * l );
	p->topoVerificados = -1;
	p->topoVertices = 10;
	
	int i, j;
	for( i = 0 ; i < l ; i++ ){
		p->dados[i] = calloc(c, sizeof(int) );
		/*
		p->dados[i] = malloc( sizeof(int) * c );
		for( j = 0 ; j < c; j++ )
			p->dados[i][j] = 0;
		*/
	}
}

void mostra_grafo( Grafo m ){
	printf("Dados da matriz %dx%d:\n", m.lin, m.col);
	int i, j;
	for( i = 0 ; i < m.lin ; i++ ){
		for( j = 0 ; j < m.col ; j++ )
			printf("%4d ", m.dados[i][j]);
		printf("\n");
	}
	printf("\n");
}

void carrega_info_arq(Grafo *gf)
{

    FILE *fp;

    fp = fopen("texto.txt", "rt");
   
    int i,j;
    for (i = 0; i < gf->lin; i++)
    {
        for (j = 0; j < gf->col; j++)
        {
            fscanf(fp, "%d", &gf->dados[i][j]);
        }
    }
    fclose(fp);    
}

int pilha_vazia ( Grafo p ) {
	return p.topoVertices == -1;
}


int empilha ( Grafo *p, int info ) {
	/*if( pilha_cheia ( *p ) )
		return ERRO_PILHA_CHEIA;*/

	p->topoVerificados++;
	p->verifcados[p->topoVerificados] = info;
	return 1; // Sucesso
}

int desempilha ( Grafo *p, int *info ) {
	/*if ( pilha_vazia ( *p ) )
		return ERRO_PILHA_VAZIA;*/


	p->topoVertices--;
	return 1; // Sucesso
}


