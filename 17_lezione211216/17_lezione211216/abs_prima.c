//abs_prima.c
#include <stdio.h>

int main(void) {

    float f1, f2, f3;
    
    printf("Inserisci il primo float: \n");
    scanf("%f", &f1);
    printf("Inserisci il secondo float: \n");
    scanf("%f", &f2);
    printf("Inserisci il terzo float: \n");
    scanf("%f", &f3);
    
    //calcolo il valore assoluto dei float inseriti:
    if(f1<0)
        f1=-f1;
    if(f2<0)
        f2=-f2;
    if(f3<0)
        f3=-f3;
    
    //stampo il risultato:
    printf("il modulo di f1 = %f\n", f1);
    printf("il modulo di f2 = %f\n", f2);
    printf("il modulo di f3 = %f\n", f3);
    
  return 0;
}
