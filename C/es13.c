#include<stdio.h>
int main(int argc, char* argv[]){
printf("si scriva un programma che accetta un solo parametro e lo stampa.\n");

if (argc!=2){
    return 1;
}
printf("%s\n",argv[1]);
}