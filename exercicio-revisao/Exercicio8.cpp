#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

/* Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

*/

int main() {

float A,B,C;

scanf("%f %f %f",&A,&B,&C); 

printf("TRIANGULO: %.3f\n",A*C/2); // Ao inves de criar uma variável para cada calculo também pode faze-lo na hora de printar

printf("CIRCULO: %.3f\n",3.14159*C*C);

printf("TRAPEZIO: %.3f\n",(A+B)*C/2);

printf("QUADRADO: %.3f\n",B*B);

printf("RETANGULO: %.3f\n",A*B);

return 0;

}