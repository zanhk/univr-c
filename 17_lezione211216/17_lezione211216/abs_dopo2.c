#include <stdio.h>

//dichiarazione delle funzioni:
float abs_value(float f){
    if(f<0)
        f=-f;
    return f;
};

float inserimento(void){
    float f;
    printf("Inserisci un float: \n");
    scanf("%f", &f);
    return f;
};


//dichiarazione della funzione principale (speciale) "main":
int main(void) {
    
    float f1, f2, f3;
        /*
    printf("Inserisci il primo float: \n");
    scanf("%f", &f1);
    printf("Inserisci il secondo float: \n");
    scanf("%f", &f2);
    printf("Inserisci il terzo float: \n");
    scanf("%f", &f3);
     */
    f1 = inserimento();
    f2 = inserimento();
    f3 = inserimento();
    
    //calcolo il valore assoluto dei float inseriti:
    
    f1 = abs_value(f1);
    f2 = abs_value(f2);
    f3 = abs_value(f3);
    
    //stampo il risultato:
    printf("il modulo di f1 = %f\n", f1);
    printf("il modulo di f2 = %f\n", f2);
    printf("il modulo di f3 = %f\n", f3);

    
    
  return 0;
}
