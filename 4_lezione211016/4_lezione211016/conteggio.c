//conteggio.c
#include <stdio.h> //ecco


int main(void) {

    int n, i=1;
    
    printf("Fino a dove devo arrivare? ");
    scanf("%i", &n);
    
    //for(i=1 ; i<=n ; i=i+1){
    //for(i=n ; i>=1 ; i=i-1){
    //for(i=1 ; i<=n ; i=i+2){
    //for(i=n ; i>=1 ; i=i-2){
    for( ; ; ){ // i=i+1; e' equivalente a i++;
        printf("i=%i\n", i);
        printf("Ecco un'altra iterazione...\n");
        //i++;
    }//fine blocco
    
    //in generale var=var+1; e' equivalente a var++;
    //in generale var=var-1; e' equivalente a var--;
    
    //in generale var=var+10; e' equivalente a var+=10;
    //in generale var=var-19; e' equivalente a var-=19;
    //in generale a=a/(b+c); e' equivalente a a/=(b+c);
    
    
  return 0;
}
