//tipo_carattere.c
/* realizzare programma che legge da tastiera un carattere e
determina se e' una lettera maiuscola o minuscola oppure una 
cifra decimale */

#include <stdio.h>

int main(void){
    
    char carattere;
    //leggi il carattere:
    printf("Inserisci il carattere: ");
    scanf("%c", &carattere);
    //determina che tipo di carattere è:
    
    if( carattere >= 'A' && carattere <= 'Z' ) //NB: 'A' != "A"
        printf("Hai inserito una lettera maiuscola!\n");
    else if ( carattere >= 'a' && carattere <= 'z')
        printf("Hai inserito una lettera minuscola!\n");
    else if ( carattere >= '0' && carattere <= '9') //NB: '0' != 0
        printf("Hai inserito una cifra decimale!\n");
    else
        printf("Hai inserito un carattere che non è ne cifra ne' \
               lettera!\n");
    
    return 0;
}