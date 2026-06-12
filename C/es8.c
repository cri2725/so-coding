#include<stdio.h>
int main(void){

printf("si leggano 5 interi e si stampino in ordine inverso.\n");
int a[5];
for (int i=0; i<5; i++){
scanf("%d",&a[i]);
} 
for (int i=4; i>=0; i--){
printf("%d\n",a[i]);
} 
return 0;
}