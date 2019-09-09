//somma.c
#include <stdio.h>

int main(void){

    int var1;
    int var2;
    
    printf("Inserisci il primo valore intero: ");
    scanf("%i", &var1);
    
    printf("Inserisci il secondo valore intero: ");
    scanf("%i", &var2);
    
    printf("La somma di %i e %i e': %i\n", var1, var2, var1+var2);
    
    
    return 0;
}