//multipli.c
// realizzare programma che, ricevendo 2 interi positivi e uno multiplo dell'altro, dice quale è il maggiore e calcola la media aritmetica tra i due.

#include <stdio.h>

int main(void){
    int n,m;
    
    //leggi n e m da tastiera: devono essere positivi e uno multiplo dell'altro:
    
    do {
        printf("Inserisci n: ");
        scanf("%i", &n);
        
        printf("Inserisci m: ");
        scanf("%i", &m);
    } while (!
             ((n > 0 && m > 0 ) &&
             ((n % m == 0) || (m % n == 0)))
            );
    //controlla quale e' maggiore dell'altro:
    if(m > n){
        printf("il maggiore e' %i\n", m);
        printf("il minore e' %i\n", n);
    }
    else{
        printf("il maggiore e' %i\n", n);
        printf("il minore e' %i\n", m);
    };
    
    //calcolo e stampo la media tra i due:
    printf("La media e': %f\n", (m+n)/2.0);
    
    return 0;
}