#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"

int main(int argc, char *argv[]) {
	Grafo gf;
	
	int vs[9] = {0,0,0,0,0,0,0,0,0};
	
	inicializa_grafo( &gf, 9, 9 );
	carrega_info_arq(&gf);
	mostra_grafo( gf );
	
	int verticeInicial = 1;
	
	empilha(&gf,verticeInicial);
	
	int x = verticeInicial;
	int i;
	
	while (pilha_vazia(gf) != -1){
	
		desempilha(&gf,x);
		if(vs[x] == 0){
			printf("Vertice: %d\n",x);
		
			vs[x] = 1;
			
			for(i =0; i < 9; i++){
				if(vs[i] == 0){			
					empilha(&gf, i);
					x = i;
				}
			}
		}
		
	}
	
	return 0;
}

