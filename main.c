#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"

int main(int argc, char *argv[]) {
	Grafo gf;
	
	inicializa_grafo( &gf, 9, 9 );
	carrega_info_arq(&gf);
	mostra_grafo( gf );
	
	return 0;
}

