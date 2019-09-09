//parametri_array.c
#include <stdio.h>
#define DIM 5
//dichiarazione funzioni:
void leggi_elementi_per_array(int z[], int length){
    int pos;
    
    for(pos = 0 ; pos < length ; pos++){
        printf("Inserisci un intero: ");
        scanf("%i", &z[pos]);
    }
};

int calcolo_somma(int x[], int length){
    int pos;
    int somma = 0;
    
    for(pos = 0 ; pos < length ; pos++)
        somma += x[pos];
    
    return somma;
};

int calcolo_minimo(int y[], int length){
    int minimo = y[0];
    int pos;
    
    for (pos = 1 ; pos < length ; pos++)
        if (y[pos] < minimo)
            minimo = y[pos];
    return minimo;
}



int main(void) {
  
    int arr[DIM]; //DIM vale 5
    int arr2[10] = {1, 5, 10, -1, 4, 33, 44, 13, -1, 0};
    int somma, min;
    
    //riempio l'array arr di valori:
    leggi_elementi_per_array(arr, DIM);
    
    //calcolo la somma:
    somma = calcolo_somma(arr, DIM);
    //calcolo il minimo valore contenuto nell'array:
    min = calcolo_minimo(arr, DIM);
    printf("La somma dei valori dell'array è: %i\n", somma);
    printf("Il minimo dei valori dell'array è: %i\n", min);
    
    
    //calcolo la somma:
    somma = calcolo_somma(arr2, 10);
    //calcolo il minimo valore contenuto nell'array:
    min = calcolo_minimo(arr2, 10);
    printf("La somma dei valori dell'array è: %i\n", somma);
    printf("Il minimo dei valori dell'array è: %i\n", min);

    
  return 0;
}
