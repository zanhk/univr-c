//bisestile.c
/*La regola del calendario gregoriano è la seguente:
 "Un anno è bisestile se il suo numero è divisibile per 4, 
 con l'eccezione degli anni secolari (quelli divisibili per 100) che non sono
 divisibili per 400.
 Ovvero:
 1. tutti i divisibnili per 4
 2. no quelli divisibili per 100
 3. si quelli divisibili per 400
 es:
 -) 1111 non è bisestile (non è divisibile per 4)
 -) 300 non è bisestile (è divisibile per 4 ma anche per 100)
 -) 1200 è bisestile (è divisibile per 4, anche per 100, ma anche per 400)
 */
#include <stdio.h>

int main(void){
    
    int anno;
    //controllo sulla positività del dato inserito
    do{
        printf("Inserisci l'anno:");
        scanf("%i", &anno);
    }
    while(anno < 0);
    
    //controllo e stampo se l'anno è bisestile
    if( anno % 4 == 0 &&
        (anno % 100 != 0 || anno % 400 == 0)
       )
        printf("%i e' bisestile\n", anno);
    else
        printf("%i non e' bisestile\n", anno);
    
    return 0;
}