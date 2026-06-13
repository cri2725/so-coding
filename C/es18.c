#include<stdio.h>
#include<string.h>
#define MAX 100
int main(void){
printf("si legga un path da tastiera e se ne stampi il contenuto come file di testo\n");
char stringa[MAX];
fgets(stringa,MAX,stdin);
stringa[strcspn(stringa, "\n")] = '\0';
FILE * prova;
prova=fopen(stringa,"r");
if(prova==NULL){
    printf("errore\n");
    return 1;
}
char riga[MAX];
while(fgets(riga,MAX,prova)!=NULL){
    fputs(riga,stdout);
}
fclose(prova);
printf("\n");
return 0;
}