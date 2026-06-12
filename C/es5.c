#include<stdio.h>

int main(void){

//Si scriva un programma che la media di un numero di float specificato dall'utente.

printf("dimmi un numero e ti chiedero numeri tanti quanto il numero che hai scelto e poi ti farò la media \n");
int q;
float numero;
scanf("%d",&q);
if(q<=0){
    printf("quantita minore/uguale di zero\n");
    return 0;
}
int quantita=q;
float media=0;
while (q>0){
    printf("dimmi un numero\n");
    scanf("%f",&numero);
    media+=numero;
    q--;
}
printf("la media è %f\n", media/quantita);
return 0;
}