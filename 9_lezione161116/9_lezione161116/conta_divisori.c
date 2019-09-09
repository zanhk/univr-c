//conta_divisori.c
// realizzare programma che conta i divisori di un intero positivo (esatti fino a max 5 divisori)
// e ne deduca se è primo!

#include <stdio.h>

int main(void){
    int num, candidato, numero_divisori;
    //chiedi un intero maggiore o uguale a 1
    do {
        printf("Inserisci un numero >=1: ");
        scanf("%i", &num);
    } while (num < 1);
    
    //calcola il numero dei suoi divisori:
    for(candidato = 1, numero_divisori = 0; candidato <= num ; candidato++)
        if(num % candidato == 0)
            //ho torvato un divisore!
            numero_divisori++;
    
    //stampa quanti divisori ha e se e' primo:
    if(numero_divisori <= 5)
        printf("Il numero %i ha %i divisori!\n", num, numero_divisori);
    else
        printf("Il numero %i ha piu' di 5 divisori!\n", num);
    
    if(numero_divisori == 2)
        printf("Il numero %i e' primo!!\n", num);
    else
        printf("Il numero %i non e' primo!\n", num);
    
    return 0;
}