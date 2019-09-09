//mesi.c
#include <stdio.h>

int main(void) {
    
    int mese, anno;
    //chiedi inserimento di mese {1-12} e di anno > 1600:
    do {
        printf("Inserisci il mese (1-12): ");
        scanf("%i", &mese);
        printf("Inserisci l'anno (>1600) ");
        scanf("%i", &anno);
        
    } while (mese < 1 || mese > 12 || anno < 1600);
    
    switch(mese){
        case 1: printf("Gennaio"); break;
        case 2: printf("Febbraio"); break;
        case 3: printf("Marzo"); break;
        case 4: printf("Aprile"); break;
        case 5: printf("Maggio"); break;
        case 6: printf("Giugno"); break;
        case 7: printf("Luglio"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Settembre"); break;
        case 10: printf("Ottobre"); break;
        case 11: printf("Novembre"); break;
        case 12: printf("Dicembre"); break;
        default: break;
    };
    
    printf(" %i", anno);
    
    switch(mese){
        case 2:
            printf(" ha esattamente %i giorni\n",
                   (anno %400 == 0 || (anno %4 == 0&&
                                       anno % 100 != 0) ? 29 : 28));
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf(" ha esattamente 31 giorni\n");
            break;
        default:
            printf(" ha esattamente 30 giorni\n");
            break;
    };
    
  return 0;
}
