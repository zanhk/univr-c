//primo.c

#include <stdio.h>

int main(void){
    int numero, divisore, primo = 1;
    //controllo sulla positività del dato inserito
    do{
        printf("Inserisci un numero intero:");
        scanf("%i", &numero);
    }
    while(numero < 0);
    
    //controllo se numero è primo:
    
    for(divisore = 2 ;
        divisore < numero && primo;
        divisore++)
        if( numero % divisore == 0 ) //(se lo divide)
            primo = 0; // 0 = FALSO
    
    if(primo)
        printf("%i e' un numero primo\n", numero);
    else
        printf("%i NON e' un numero primo\n", numero);

    return 0;
}