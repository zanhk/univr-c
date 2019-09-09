// somma due matrici 4x3

#include <stdio.h>

int main(void) {
    const float matriceA[4][3] = {
        {1.2, 3.4, -0.6},
        {1.8, 0.1, 8.11},
        {0.0, 0.1, -2.9},
        {0.0, 0.0, 11.9}
    };
    int riga, colonna;
    float matriceB[4][3];
    float matriceR[4][3];
    
    //leggo da tastiera i valori della seconda matrice (B):
    for (riga = 0 ; riga < 4 ; riga++){
        for(colonna = 0 ; colonna < 3 ; colonna++){
            printf("matriceB[%i][%i]: ", riga, colonna);
            scanf("%f", &matriceB[riga][colonna]);
        }
    };
    
    // calcolo il risultato A+B:
    for (riga = 0 ; riga < 4 ; riga++){
        for(colonna = 0 ; colonna < 3 ; colonna++)
            matriceR[riga][colonna] = matriceA[riga][colonna] + matriceB[riga][colonna];
    };
    //stampo il risultato
    for (riga = 0 ; riga < 4 ; riga++){
        for(colonna = 0 ; colonna < 3 ; colonna++)
            printf("%8.2f", matriceR[riga][colonna]);
        printf("\n");
    };
    return 0;
}
