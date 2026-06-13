#include<stdio.h>
#define MAX 100

int LStringa(char *s){
    int contatore=0;
    while(*(s+contatore) != '\0'){
        contatore++;
    }
    return contatore;
}

int main(int argc, char *argv[]){
printf("si scriva una funzione che calcola la lunghezza di una stringa terminata da '/0'\n");
char stringa[MAX];
fgets(stringa, MAX, stdin);
int lunghezza=LStringa(stringa);
printf("la lunghezza e: %d\n", lunghezza);
return 0;
}