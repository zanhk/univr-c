//sommaprimi.c
#include <stdio.h>

int main(void) {
    int somma=0;
    int i;
    int n;
    
    printf("Inserire il numero di interi da sommare: ");
    scanf("%i", &n);
    
    for (i=1 ; i<=n ; i=i+1){
        somma=somma+i;
    };
        
    printf("La somma dei primi %i interi e'; %i\n", n, somma);
    
    
    return 0;
}
