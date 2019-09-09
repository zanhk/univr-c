// programma che calcola i primi DIM numeri primi:

#include <stdio.h>
#define N 8

int main(void){

    int primes[N];
    int nPrimes, isPrime, candidate, pos;
    
    //inizializzo l'array con i numeri primi:
    primes[0]=2;
    primes[1 ]=3;
    nPrimes=2;
    
    for(candidate = 5 ; nPrimes < N ; candidate+=2){ //NB: evito di controllare i candidate pari
        isPrime = 1;
        
        //controllo se candidate è primo, provando a dividerlo per i numeri primi piu' piccoli dellal radice quadrata del candidato stesso
        for(pos = 0 ; (primes[pos] * primes[pos] <= candidate) && isPrime ; pos++)
            if(candidate % primes[pos] == 0)
                isPrime = 0;
        
        //se il candidato era realmente primo, lo salvo nell'array:
        if(isPrime)
            primes[nPrimes++] = candidate;
    }

    //stampo l'array dei primi sul video:
    for(pos = 0 ; pos < N ; pos++)
        printf("%i ", primes[pos]);
    printf("\n");
    
    
return 0;
}
