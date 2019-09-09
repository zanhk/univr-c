//conta_divisori.c
// realizzare programma che conta i divisori di un intero positivo (esatti fino a max 5 divisori)

#include <stdio.h>

int main(void){
    
    int num, i, counter;
    //inserisci il numero intero maggiore o uguale a 1:
    
    do {
        printf("Inserisci un numero >=1 ");
        scanf("%i", &num);
    } while (num < 1);
    
    //conta quanti divisori ha e deduci se è primo:
    
    for(i=1 , counter=0 ; i<=num ; i++)
        if(num % i == 0)
            //ho trovato un divisore!
            counter++;
        
    if(counter == 2)
        printf("Il numero %i ha 2 divisori \
               ovvero è un numero primo\n", num);
    else
        if (counter <= 5)
            printf("Il numero %i ha %i divisori\n", num, counter);
        else
            printf("Il numero %i ha più di 5 divisori\n", num);
    
    return 0;
}