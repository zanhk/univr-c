#include <stdio.h>
#define DIM 5 //direttiva di pre-processing

int main(void) {
    //dichiaro l'array dei voti:
    int voti[DIM];
    int pos, somma = 0;
    
    //leggo da tastiera DIM i voti:
    for(pos = 0 ; pos < DIM ; pos++){
        printf("voto %i: ", pos+1);
        scanf("%i", &voti[pos]);
    }
    
    //stampo il riepilogo dei voti:
    printf("Ecco i voti che hai immesso:\n");
    
    for( pos = 0 ; pos < DIM ; pos++)
        printf("voto %i: %i\n", pos+1, voti[pos]);
    
    //calcolo e stampo la media dei voti:
    /*for (pos = 0 ; pos < DIM ; pos++)
        somma += voti[pos];
    */
    
    for(pos = DIM-1 ; pos >= 0 ; pos--)
        somma += voti[pos];
    
    printf("La media dei voti è: %g\n", somma/(float)DIM);
    
  return 0;
}
