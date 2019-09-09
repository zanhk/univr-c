//gcd_prima.c
#include <stdio.h>

int main(void) {
  int a, b, resto;
    
    printf("Inserisci due numeri interi: ");
    scanf("%i%i", &a, &b);
    
    
    printf("L'MCD di %i e %i e' ", a, b);
    while( b != 0 ) {
        resto = a % b;
        a = b;
        b = resto;
    };
    
    printf("%i\n", a);
    
    return 0;
}
