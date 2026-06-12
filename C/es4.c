#include<stdio.h>
#include<math.h>
int main(void){

//Si scriva un programma che risolve un'equazione di secondo grado.

float a,b,c;
printf("ora ti chiederò i 3 termini della equzione di secondo grado\n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
printf("la tua equazione è quindi %f*x^2 + %f*x + %f\n", a,b,c);
float delta=pow(b,2) - 4*a*c;
if (delta <0){
    printf("delta minore di 0 \n");
    return 0;
}
printf("le soluzioni sono x1=%f e x2=%f\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
return 0;
}