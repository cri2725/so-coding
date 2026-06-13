#include<stdio.h>

void swap(int *v1,int *v2){
int intramezzo;
intramezzo=*v1;
*v1=*v2;
*v2=intramezzo;
}

int main(int argc, char *argv[]){

printf("si scriva una funzione che prende due interi per riferimento e ne scambia il valore.\n");
int a,b;
printf("valore 1:\n");
scanf("%d",&a);
printf("valore 2:\n");
scanf("%d",&b);
swap(&a,&b);
printf("primo valore: %d\nsecondo vallore: %d\n",a,b);
return 0;
}