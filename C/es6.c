#include<stdio.h>
int main(void){

//si crei un programma che determina su un numero inserito dall'utente è primo.
printf("ti chiedo un numero e ti dico se e primo\n");
int numero, i;
scanf("%d", &numero);
for (i=2;i<=(numero/2);i++){
    if (numero%i==0){
        printf("non è primo\n");
        return 0;
    }
}
printf("il numero è primo \n");
}
