#include <stdio.h>

// scrivere programma che chiede in ingresso due lunghezze, x e y, e stampa:
// da zero a x : asterischi
// da x a y : e comm
// da y a 80: dollari


int main(void) {
    int x, y, pos;
    
    //chiedi inserimento x, y > 0 e con x<y
    printf("Inserisci x positivo: ");
    scanf("%i", &x);
    printf("Inserisci y positivo e maggiore di x: ");
    scanf("%i", &y);
    
    //stampa la stringa di */&/$
    /*for(pos = 1 ; pos <= 80 ; pos++)
        if(pos <= x)
            printf("%c", '*');
        else if ( pos > x && pos <= y )
            printf("%c", '&');
        else
            printf("%c", '$');
    */
    
    for(pos = 1 ; pos <= 80 ; pos++)
        printf("%c", (pos <= x) ? '*' : (pos > x && pos <= x+y) ? '&' : '$' );
    printf("\n");

  return 0;
}
