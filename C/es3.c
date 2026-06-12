#include<stdio.h>

int main(void){
//si scriva un programma che legge da tastiera un intero e scrive se esso è positivo o negativo

printf("ora ti chiedo due numeri e ti dico se son negativi o positivi:\n");
float n1,n2;
scanf("%f",&n1);
scanf("%f",&n2);
if (n1>=0){
    printf("%f è maggiore o uguale a zero\n", n1);
}
else{
     printf("%f è minore di zero\n", n1);
}
if (n2>=0){
    printf("%f è maggiore o uguale a zero\n", n2);
}
else{
printf("%f è minore di zero\n", n2);
}
return 0;
}