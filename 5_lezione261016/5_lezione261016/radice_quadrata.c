// realizzare un programma che calcola la radice quadrata approssimata di un numero intero positivo
#include <stdio.h>

int main(void){
    int n, candidato, radice;
    
    //richiedo un numero positivo
    // altirmenti insisto a richiederlo (se inserito negativo)
    printf("Inserisci un numero positivo: ");
    scanf("%i", &n);
    
    for ( ; n<=0 ; ){
        printf("Ti avevo detto positivo! Reinseriscilo: ");
        scanf("%i", &n);
    };

    // calcolo radice quadrata approx:
    for( candidato = 1; n>= candidato*candidato ; candidato++){
        radice = candidato;
    };
    
    
    printf("La radice quadrata approssimata di %i e' %i\n", n, radice);
    
        return 0;
}