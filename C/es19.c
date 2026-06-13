#include<stdio.h>
int main(void){

printf("si legga un numero N da tastiera e si stampi sul file numeri.txt i numeri da 1 a N\n");
int N;
scanf("%d",&N);
FILE * file;
file=fopen("numeri.txt","w");
for (int i=1;i<=N;i++){
    fprintf(file,"%d\n",i);
}
return 0;
}