//triangular_dopo.c

#include <stdio.h>
#define NUM_ITERAZIONI 3

//definiamo la funzione per la lettura da tastiera dell'intero
int leggi_intero(void){
    int intero;
    printf("Inserisci un intero positivo: ");
    scanf("%i", &intero);
    return intero;
}

//definiamo la funzione calcolo e stampa numero triangolare:
void stampa_risultato_triangolare(int x){ // x e' un parametro FORMALE
    // somma e i sono variabili AUTOMATICHE
    int somma = 0;
    int i;

    for (i = 1 ; i <= x ; i++){
        somma += i;
    }

    printf("Il numero triangolare di ordine %i e' %i\n", x, somma);
    return;
}



int main(void) {
    int i, n;
    for(i=0 ; i < NUM_ITERAZIONI ; i++){
        n = leggi_intero();
        stampa_risultato_triangolare(n);// n contiene il parametro attuale
    };
    return 0;
}
