//mcd_while.c
//kljlkjhljl
#include <stdio.h>

int main(void) {
 
    int a, b, resto;
    /*
    printf("Inserisci a: ");
    scanf("%i", &a);
    
    printf("Inserisci b: ");
    scanf("%i", &b);
    */
    
    printf("Inserisci a e b: ");
    scanf("%i%i", &a, &b);
    
    printf("L'mcd di %i e %i e': ", a, b);
    
    while( b!= 0 ){
        resto = a%b;
        a=b;
        b=resto;
    };
    
    /* con il costrutto for era:
     for ( ; b!0 ; ){
     resto = a%b;
     a=b;
     b=resto;
     };
    */
    printf("%i\n", a);
    
  return 0;
}
