#include <stdio.h>

int main(void) {

    int n;
    int candidato;
    int radice;
    
    // richiedo un numero positivo
    // altrimenti insisto a richiederlo:
    printf("Inserisci un intero positivo: ");
    scanf("%i", &n);
    
    while (n<=0){
        printf("Inserisci un intero positivo: ");
        scanf("%i", &n);
    };
    
    /* con il ciclo for era:
     for(candidato = 1 ; n>= candidato * candidato ; candidato++ )
        radice = candidato;
    */
    candidato = 1;
    /*while( n>= candidato*candidato ){
        radice = candidato;
        candidato++;
    };*/
    while( n>= candidato*candidato ){
        candidato++;
    };
    
    //radice = candidato - 1;
    
    //printf("La radice quadrata approssimata di %i e' %i\n", n, candidato-1);
    printf("La radice quadrata approssimata di %i e' %i\n", n, --candidato);
    printf("La radice quadrata approssimata di %i e' %i\n", n, candidato--);
    
    //candidato-- vs. --candidato
    //candidato++ vs. ++candidato
    
  return 0;
}
