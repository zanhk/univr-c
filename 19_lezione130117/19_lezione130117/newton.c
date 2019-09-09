//newton.c
#include <stdio.h>

// calcolare e stampare la radice quadrata di un float dato da tastiera
// con metodo Newton-Raphson

//dichiarazione delle funzioni usate nel main
float square_root(float x);
float abs_value(float x);

int main(void) {

    float f, result;
    
    f = 15.5;
    if (f >= 0)
        //calcolo (invoco la funzione per il calcolo della) la radice quadrata:
        result = square_root(f);
    
    printf("La radice quadrata di %f è: %f\n", f, result);
    
    return 0;
}


// definizione delle funzioni usate nel main
float square_root(float x){
    float epsilon = 0.0001;
    float guess = 1;
    
    while( abs_value(guess*guess - x) > epsilon )
        guess = (guess + x/guess) / 2.0;
    return guess;
};

float abs_value(float x){
    if (x < 0)
        x = -x;
    return x;
};





