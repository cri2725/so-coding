#include<stdio.h>
//si crei un programma che effettua la somma vettoriale tra due vettori bi-dimensionali.

typedef struct{
    float x;
    float y;
} punto;

int main(void){
punto p1,p2,psomma;
printf("x e y di p1:\n");
scanf("%f",&p1.x);
scanf("%f",&p1.y);
printf("x e y di p2:\n");
scanf("%f",&p2.x);
scanf("%f",&p2.y);
psomma.x=p1.x+p2.x;
psomma.y=p1.y+p2.y;
printf("il punto somma ha coordinate \nx: %f\ny:%f\n",psomma.x,psomma.y);
return 0;
}