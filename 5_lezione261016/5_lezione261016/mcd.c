//mcd
#include <stdio.h>

int main(void) {
    int a, b, resto;
    //fase inserimento:
    printf("Inserisci a: ");
    scanf("%i", &a);

    printf("Inserisci b: ");
    scanf("%i", &b);

    printf("L'mcd di %i e %i e' ", a, b);
    
    //fase calcolo mcd:
    for( ; b!=0 ; ){
        resto = a%b;
        a=b;
        b=resto;
    };
    
    printf("%i\n", a);
    
  return 0;
}
