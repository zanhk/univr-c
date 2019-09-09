//quadrato.c
#include <stdio.h>

int main(void) {
    int numero, potenziale_radice;
    int trovata_radice_intera=0;
    
    //controllo sulla positività del dato inserito
    do{
        printf("Inserisci un numero intero:");
        scanf("%i", &numero);
    }
    while(numero < 0);
    
    //controllo se numero è un quadrato perfetto
    for( potenziale_radice = 1 ;
        potenziale_radice <= numero && !trovata_radice_intera;
        potenziale_radice++){
    
        if(potenziale_radice * potenziale_radice == numero)
            trovata_radice_intera = 1; //1 = VERO
    };
    
    if(trovata_radice_intera) // (trovata_radice_intera == 1)
        printf("%i e' un quadrato perfetto!\n", numero);
    else
        printf("%i NON e' un quadrato perfetto!\n", numero);
    
    return 0;
}
