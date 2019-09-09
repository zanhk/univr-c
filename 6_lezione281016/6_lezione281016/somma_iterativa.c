//somma iterativa
#include <stdio.h>

int main(void) {
    int i, n, counter, somma;
    
    for (counter = 1 ; counter <= 3 ; counter++)
    //da qui
    {
        somma = 0;
        printf("Inserisci il numero intero positivo: ");
        scanf("%i", &n);
        //continuo a chiederlo finche' è negativo
        while(n<=0){
            printf("Inserisci il numero intero positivo: ");
            scanf("%i", &n);
        };
    
        for ( i = 1 ; i <= n ; i++ ){
            somma = somma + i;
        }
        
        printf("La somma dei primi %i interi e': %i\n", n, somma);
    //a qui
    }
    
    
    return 0;
}
