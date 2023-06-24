#include <stdio.h>
#include <stdlib.h>

/* Construa um algoritmo que receba como entrada três valores e os imprima em ordem
crescente. 
 */

int main() {

int valor1, valor2, valor3;

  printf("Digite o valor 1: ");
scanf("%d", &valor1);

printf("Digite o valor 2: ");
scanf("%d", &valor2);

printf("Digite o valor 3: ");
scanf("%d", &valor3);


int valores[3] = {valor1, valor2, valor3};
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2 - i; j++) {
        if (valores[j] > valores[j + 1]) {
            int temp = valores[j];
            valores[j] = valores[j + 1];
            valores[j + 1] = temp;
        }
    }
}

printf("Valores em ordem crescente: %d, %d, %d\n", valores[0], valores[1], valores[2]);

return 0;

}
