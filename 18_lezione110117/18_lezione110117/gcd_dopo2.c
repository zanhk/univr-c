//gcd_dopo2.c
#include <stdio.h>
// calcolare e stampare il gcd tra due interi dati da tastiera:

void gcd(int u, int v){
    int temp;
    
    printf("Il gcd tra %i e %i e' ", u, v);
    
    while(v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }
    
    printf("%d\n", u);
}


int main(void) {

    int a, b; //, result;
    
    printf("Inserisci due numeri interi: ");
    scanf("%i%i", &a, &b);
    
    // invocazione o chiamata della funzione gcd con parametri attuali a, b
    gcd(a, b);
    
  return 0;
}
