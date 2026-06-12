#include<stdio.h>
#include<string.h>
int main(void){

printf("si acquisisca una stringa da tastiera di max 20 caratteti e si verifichi se è palindroma\n");
char a[20];
scanf("%s",a);
int len=strlen(a);
for (int i=0; i<len/2;i++){
    if(a[i]!=a[len-i-1]){
        printf("non è palindromo\n");
        return 0;
}
}
printf("è palindromo\n");
return 0;

}