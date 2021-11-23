#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <stdlib.h>
#include "Matriz.c"

int main(int argc, char *argv[]) {
	Grafo gf;
	
	inicializa_grafo( &gf, 9, 9 );
	carrega_info_arq(&gf);
	mostra_grafo( gf );
	
	return 0;
}

