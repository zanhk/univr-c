//triangular_prima.c
#include <stdio.h>

int main(void) {
    int somma = 0;
    int i, n;

    //fase lettura da tastiera dell'intero
    printf("Inserisci un intero positivo:");
    scanf("%i", &n);

    //fase calcolo e numero triangolare
    for(i=1 ; i <= n ; i = i + 1)
        somma = somma + i;

    //fase stampa numero triangolare
    printf("La somma dei primi %i numeri interi e': %i\n", n, somma);

    return 0;
}
