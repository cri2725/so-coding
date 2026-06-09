#include <stdio.h>
int main(void){
//Si scriva un programma che dato un numero di minuti, calcola a quante ore (e minuti
//rimanenti) equivale.
int minuti;
printf("dimmi un num di minuti in interi e diventa ore:minuti\n");
scanf("%d", &minuti);
printf("in totale sono %d:%d\n", minuti/60, minuti%60);
return 0;
}