#include <stdio.h>

int main(void) {

    int voti[31] = {0};
    /* anziche'
     for(pos = 0 ; pos < 31 ; pos++)
        voti[pos] = 0;
     */
    int voto, pos, num, den;
    //fase inserimento voti da tastiera:
    do {
        printf("voto: ");
        scanf("%i", &voto);
        if(voto >= 0 && voto <= 30)
            voti[voto]++;
    } while (voto >= 0);

    //stampo riepilogo voti:
    for(pos = 0 ; pos < 31 ; pos++)
        printf("%i ", voti[pos]);
    printf("\n");

    //stampo riassunto studenti/voti:
    for(voto=0 ; voto < 31 ; voto++)
        if(voti[voto] > 0)
            printf("%i student%c ha%s preso %i/30 %s\n",
                   voti[voto],
                   voti[voto] == 1 ? 'e' : 'i',
                   voti[voto] == 1 ? "" : "nno",
                   voto,
                   voto >= 18 ? "": "(insufficiente)");

    //calcolo della media:
    num = den = 0;
    for(voto = 0 ; voto < 31 ; voto++){
        num += voti[voto] * voto;
        den += voti[voto];
    }
    //stampo la media:
    printf("La media dei voti è: %g\n", ((double)num/den));

    return 0;
}
