//calcolatrice.c
// realizzare programma che chiede all'utente di inserire espressioni del tipo:
//float operatore float
//dove l'operatore è una delle 4 operazioni aritmetiche
//e ne calcola il risultato e lo stampa a video:

#include <stdio.h>

int main(void){
    float sinistra, destra, risultato;
    char operatore;
    //chiedi l'inserimento dell'operatore e operandi nel giusto ordine:
    do {
        printf("Inserire in sequenza: float, operatore (+,-,*,/), float\n");
        scanf("%f", &sinistra);
        scanf(" %c", &operatore);
        scanf("%f", &destra);
        //esegui l'operazione:
        switch (operatore) {
            case '+':
                risultato = sinistra + destra;
                break;
            case '-':
                risultato = sinistra - destra;
                break;
            case '*':
                risultato = sinistra * destra;
                break;
            case '/':
                risultato = sinistra / destra;
                break;
            default:
                printf("L'operatore inserito è sconosciuto (babbeo!)\n");
                break;
        };
        
    } while ( operatore != '+' &&
             operatore != '-' &&
             operatore != '*' &&
             operatore != '/');
    //stampa il risultato:
    printf("%.3f %c %.3f = %.3f\n", sinistra, operatore, destra, risultato);
    
    
    
    
    
    return 0;
}