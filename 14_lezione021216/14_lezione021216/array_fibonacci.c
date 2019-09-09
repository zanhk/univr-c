// crea un array che contiene i primi DIM numeri di fibonacci
// e poi lo stampa

// 0, 1, 1, 2, 3, 5, 8, 13, .....

#include <stdio.h>
#define DIM 20

int main(void) {
    int fibonacci[DIM];
    int pos;

    //set dei valori base della sequenza:
    fibonacci[0]=0;
    fibonacci[1]=1;
    //set dei rimanenti numeri di fibonacci:
    for(pos = 2 ; pos < DIM ; pos++)
        fibonacci[pos] = fibonacci[pos-1] + fibonacci[pos-2];

    //stampo l'array:
    for(pos=0 ; pos < DIM ; pos++)
        printf("%5i\n", fibonacci[pos]);

    printf("\n");

   return 0;
}
