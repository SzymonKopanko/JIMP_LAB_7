#include "list.h"

#include <stdlib.h>

list_t dodaj_do_listy( int *tab_linii, int n ) {
  // dopisuje nowy nr linii na koniec tablicy tab_linii
  // przed tym robimy realloc
	rozmiar_tablicy = sizeof(tab_linii)/sizeof(int);
	
	realloc(tab_linii, rozmiar_tablicy * sizeof(int));
	tab_linii[rozmiar_tablicy - 1] = n;
}
