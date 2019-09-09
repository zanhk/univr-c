//es. 2 (diagonale.c)
#include <stdio.h>

int main(void) {
    int n, contatore, contatore2;
    
    //leggi la dimensione per la diagonale di asterischi (n >= 0)
    printf("Inserisci n intero positivo:");
    scanf("%i", &n);
    while (n<0){
        printf("Ho detto positivo!");
        printf("Inserisci n intero positivo:");
        scanf("%i", &n);
    };

    for(contatore = 1 ; contatore <= n ; contatore++){
    //stampa "contatore-1" spazi:
        for(contatore2 = 1 ; contatore2 <= contatore-1 ; contatore2++)
            printf(" ");
        //stampa asterisco e a capo:
        printf("*\n");
    }
    
  return 0;
}


