//condizioni.c
#include <stdio.h>

int main(void) {

    int a, b;
    
    printf("Inserire il primo intero: ");
    scanf("%i", &a);
    
    printf("Inserire il secondo intero: ");
    scanf("%i", &b);
    
    //operazione binaria di confronto:
    //il risultato è sempre un booleano: true (1) o false (0)
    
    printf("a < b: %i\n", a < b);
    printf("a > b: %i\n", a > b);
    printf("a <= b: %i\n", a <= b);
    printf("a >= b: %i\n", a >= b);
    printf("a == b: %i\n", a = b); // NB: non confondere = con ==
    printf("a != b: %i\n", a != b);
    
    
  return 0;
}
