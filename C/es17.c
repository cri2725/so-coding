#include<stdio.h>
#define MAX 100
int aumentadi2(int a){
    return a+2;
}
void applicatore(int *vettore, int lunghezza, int (*funzione)(int a)){
    for(int i=0; i<lunghezza; i++){
        *(vettore+i)=funzione(*(vettore+i));
    }
}

int main(void){

printf("si crei e si usi una funzione che applica a ogni "); 
printf("elemento di un vettore di interi una funzione fornita dal chiamante.\n");


printf("dimmi un numero di interi da mettere nel vettore\n");
int q;
scanf("%d",&q);
if (q>=MAX){
    printf("trooppi numeri bro\n");
    return 1;
}
int vettore[MAX];
for (int i = 0; i<q; i++){
    printf("numero %d\n",i+1);
    int n;
    scanf("%d",&n);
    vettore[i]=n;
}

int (*puntfunz)(int);
puntfunz=aumentadi2;
applicatore(vettore,q,puntfunz);
for(int i =0;i<q;i++){
    printf("%d",vettore[i]);
}
printf("\n");
return 0;
}