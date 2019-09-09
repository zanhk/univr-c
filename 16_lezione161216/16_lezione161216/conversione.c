// traduce un numero in un array che contiene le sue cifre
// espresse in una base arbitraria


#include <stdio.h>


/*
int (32 bit) da -2.147.483.648 a +2.147.483.647
unsigned int (32 bit) da 0 a +4.294.967.295
 
long/long int (64 bit) da -9.223.372.036.854.775.808 a +9.223.372.036.854.775.807
unsigned long/long/int (64 bit) da 0 a ...
 
 */
int main(void) {
    long int numberToConvert;
    int index=0, base;
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
        'D', 'E', 'F'};
    char convertDigits[64];
    
    //loeggo il numero da convertire e la base di conversione:
    do {
        printf("Numero positivo da convertire: ");
        scanf("%ld", &numberToConvert);
    } while (numberToConvert<0);
    do {
        printf("Base (2-16): ");
        scanf("%i", &base);
    } while (base < 2 || base > 16);
    
    //converto il numero nella base specificata:
    
    do {
        convertDigits[index++] = baseDigits[numberToConvert % base];
        numberToConvert /= base;
        
    } while (numberToConvert != 0);
    
    //visualizzo il risultato in ordine inverso:
    
    for(--index ; index >= 0 ; index--)
        printf("%c", convertDigits[index]);
    
    printf("\n");
  return 0;
}
