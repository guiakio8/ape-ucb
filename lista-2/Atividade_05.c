#include <stdio.h>
#include <string.h>

// programa de copia de strings

int main ()
{
	char str1[50];
    char str2[50];
    char strcopia[50];

	printf ("Digite uma palavra(cojunto de caracteres), nesse caso uma string: ");
	gets (str1);

	strcpy (str2,str1);	
	strcpy (strcopia,"foi informado a palavra/string: ");

	printf ("\n%s",strcopia);
    printf ("\n%s",str2);

	return 0;
}