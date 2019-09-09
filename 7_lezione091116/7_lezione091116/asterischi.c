//es1 (asterischi.c)
#include <stdio.h>

int main(void) {
  
    int n, contatore, contatore2;
    
    //leggi la dimensione della cornice di asterischi (n >= 0)
    printf("Inserisci n intero positivo:");
    scanf("%i", &n);
    while (n<0){
        printf("Ho detto positivo!");
        printf("Inserisci n intero positivo:");
        scanf("%i", &n);
    };
    
    //stampa il numero di asterischi richiesto:
    //stampo la prima riga della cornice:
    for(contatore = 1 ; contatore <= n ; contatore++)
        printf("*");
    printf("\n");
    //stampa le righe intermedie:
    for (contatore = 1 ; contatore <= n-2 ; contatore++){
        //stampa il primo asterisco a sinistra:
        printf("*");
        //stampa n-2 spazi:
        for(contatore2 = 1 ; contatore2 <= n-2 ; contatore2++)
            printf(" ");
        //stampa l'asterisco di destra:
        printf("*");
        //stampa a capo:
        printf("\n");
    }
    //stampo l'ultima riga della cornice:
    for(contatore = 1 ; contatore <= n ; contatore++)
            printf("*");
    printf("\n");
    
  return 0;
}


