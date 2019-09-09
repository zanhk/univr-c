//eratostene.c
#include <stdio.h>
#define DIM 30
#define N 8

int main(void){

    short isPrime[DIM];
    int primes[N];
    int pos, candidate = 2, nPrimes = 0;
    //inizialmente assumo che tutti i numeri interi siano primi:
    for(pos = 2 ; pos < DIM ; pos++)
        isPrime[pos] = 1;
    
    //prendo il numero piu' a sx ancora considerato primo:
    while(nPrimes < N){
    
        if(isPrime[candidate]){
            primes[nPrimes++] = candidate;
        
            for (pos = candidate * 2 ; pos < DIM ; pos += candidate)
                isPrime[pos] = 0; // non primo
        };
    
        candidate++;
    
    };
    //stampo l'array dei numeri primi che ho calcolato:
    for(pos = 0 ; pos < nPrimes ; pos++)
        printf("%i ", primes[pos]);
    printf("\n");
    printf("nPrimes = %i\n", nPrimes);

    return 0;
}
