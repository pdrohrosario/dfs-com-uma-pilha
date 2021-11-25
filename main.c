#include <stdio.h>
#include <stdlib.h>
#include "Matriz.c"

int main(int argc, char *argv[]) {
	Grafo gf;
	
	int vs[9] = {0,0,0,0,0,0,0,0,0};
	
	inicializa_grafo( &gf, 9, 9 );
	carrega_info_arq(&gf);
	mostra_grafo( gf );
	
	int verticeInicial = 1;
	
	int x,	i;
	
	empilha(&gf,verticeInicial);
	
	while (pilha_vazia(gf) == 1){
		
		
		desempilha(&gf,&x);
		if(vs[x] == 0){
			printf("Vertice: %d\n",x + 1);
		
			vs[x] = 1;
			
			for(i =0; i < 9; i++){
				if(vs[i] == 0 && gf.dados[x][i] == 1){	
					empilha(&gf, i);
				}
			}
		}
				
	}
	
	return 0;
}

