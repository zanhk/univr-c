//gcd_dopo.c
#include <stdio.h>
// calcolare e stampare il gcd tra due interi dati da tastiera:
int gcd(int u, int v){
    int temp;
    
    //printf("Il gcd tra %i e %i e' ", u, v);
    
    while(v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }
    
    return u;
}


int main(void) {

    int a, b; //, result;
    
    printf("Inserisci due numeri interi: ");
    scanf("%i%i", &a, &b);
    
    // invocazione o chiamata della funzione gcd con parametri attuali a, b
    /*result = gcd(a, b);
    printf("Il gcd tra %i e %i e' ", a, b);
    printf("%d\n", result);*/
    
    //oppure anche:
     printf("Il gcd tra %i e %i e' ", a, b);
     printf("%d\n", gcd(a, b));
    
    
  return 0;
}
