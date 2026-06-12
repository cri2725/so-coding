#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
int a = atoi(argv[1]);
int b = atoi(argv[2]);
printf("si scriva un programma che riceve due interi come parametri e ne stampa la somma.\n");
if(argc!=3){ //voglio dire che i due parametri non sono interi ma nn so come fare
    return 1;
}
printf("la somma è: %d\n", a + b );
return 0;
}