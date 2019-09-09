// realizzare programma che implementa un accumulatore, con controllo di divisione per zero
// S per resettare l'accumulatore al numero inserito
// E per terminare

#include <stdio.h>

int main(void){

    float numero, accumulatore = 0.0f;
    char operatore;
    //chiedi l'inserimento dell'operatore e operando nel giusto ordine:
    do {
        printf("Inserire in sequenza: operatore, operando (float)\n");
        /*scanf("%c", &operatore);
        scanf(" %f", &numero);*/
        //oppure:
        scanf(" %c %f", &operatore, &numero);
        //esegui l'operazione di accumulazione:
        
        switch (operatore) {
            case '+':
                accumulatore += numero;
                break;
            case '-':
                accumulatore -= numero;
                break;
            case '*':
                accumulatore *= numero;
                break;
            case '/':
                if (numero == 0.0f)
                    printf("Divisione per 0 non permessa!!\n");
                else
                    accumulatore /= numero;
                
                break;
            case 'S':
                accumulatore = numero;
                break;
            case 'E':
                break;
            default:
                printf("L'operatore inserito è sconosciuto. Operazioni disponibili \
                       +, -, *, /, E, S \n");
                break;
        };
        //stampa il risultato:
        printf("= %f\n", accumulatore);
        
    } while ( operatore != 'E' );
    
    
    

    
    
    
    return 0;
}