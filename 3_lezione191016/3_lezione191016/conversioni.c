//conversioni.cc
#include <stdio.h>

int main (void){

    float varfloat1 = 18.989, varfloat2;
    int varint1, varint2 = 30;
    char varchar = 'a';
    
    varfloat2 = varint2;
    printf("Conversione dell'intero %i a float %f\n", varint2, varfloat2);
    
    varint1 = varfloat1;
    printf("Conversione del float %f a intero %i\n", varfloat1, varint1);
    
    // operazioni tra operandi interi con conversione implicita/esplicita:
    
    varfloat1 = (float)varint2 / 16;
    printf("Il valore di varfloat1 e': %f\n", varfloat1);
    
    varint1 = (int)15.99 + 2;
    printf("Il valore di varint1 e': %i\n", varint1);
    
  return 0;
}
