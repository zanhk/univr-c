// implementare un programma che, dato un array di valori interi, con dimensione fissata e parametrica, esegua lo shift a sinistra dei valori, con rotazione dell'ultimo valore.

#include <stdio.h>
#define DIM 8

int main(void){
   
    int array[DIM] = {30, 28, 28, 28, 118, 30, 30, 9};
    int pos;
    
    //salvo il primo valore dell'array
    int tmp = array[0];
    //eseguo lo shift a sx
    for(pos = 1 ; pos < DIM ; pos++)
        array[pos-1] = array[pos];
    //sposto il primo valore in coda a dx dell'array
    array[DIM-1] = tmp;
    
    //stampo il risultato dello shift
    for(pos = 0 ; pos < DIM ; pos++)
        printf("%10i\n", array[pos]);
    
    printf("\n");
       
    return 0;
}
