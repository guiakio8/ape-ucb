#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a
condição:
? “F1”, se N <= 10
? “F2”, se N > 10 e N <= 100
? “F3”se n > 100
|  Exemplos de entrada |  Exemplos de saída|
|            4         |        F1         |
|           11         |        F2         |
|          420         |        F3         |

*/

int main() {

	int N;
	
	scanf("%d",&N);

	
	if (N <=  10)
		printf("F1");
	else if (N > 10 && N <= 100)
		printf("F2");
	else
		printf("F3");
return 0;

}
