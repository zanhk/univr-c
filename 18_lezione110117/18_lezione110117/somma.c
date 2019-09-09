#include <stdio.h>
#include <math.h>


int main(void){

    int i;
    float num;
    float massimo;
    int a;
    float somma;
    float radice;

    printf("Inserisci numero numeri: ");
    scanf("%d", &a);

    for (i=0; i<a; i++){

        printf ("inserisci numero: ");
        scanf ("%f",&num);

        if(i==0){
            massimo=num;

        }else

            if(num>massimo){
                massimo=num;
            }

        somma = num + somma;
    }

    printf("La media dei numeri è: %.2f", somma/a);
    printf("\nMassimo = %.2f", massimo);

    radice = sqrt(somma);
    printf("\nradice: %f", radice);

}
