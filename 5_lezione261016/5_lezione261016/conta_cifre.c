// conta cifre
#include <stdio.h>

int main(void) {
    int n, copia, numero_cifre;
    
    //richiedo un numero positivo
    // altirmenti insisto a richiederlo (se inserito negativo)
    printf("Inserisci un numero positivo: ");
    scanf("%i", &n);
    
    for ( ; n<=0 ; ){
        printf("Ti avevo detto positivo! Reinseriscilo: ");
        scanf("%i", &n);
    };
    
    // conto le cifre del numero:
    copia = n;
    
    for (numero_cifre = 0 ; n!= 0 ; n/=10){ // n = n/10
        numero_cifre++;
    };
    
    printf("Il numero %i ha %i cifre\n", copia, numero_cifre);
    
  return 0;
}
