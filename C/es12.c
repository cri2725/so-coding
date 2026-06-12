#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main(void){
printf(" dammi una stringa e la metto in Title Case\n");
char s[MAX];
fgets(s,MAX,stdin);
int len=strlen(s);
for(int i=0;i<len;i++){
    if(i==0 || (isalpha(s[i])&&((s[i-1])==' '))){
        s[i]=toupper(s[i]);
    }
    else{
        s[i]=tolower(s[i]);
    }
}
printf("%s",s);
return 0;
}