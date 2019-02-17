#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a, b, soma;
	
	printf ( "Digite um NUmero Inteiro: " );
	scanf ( "%d", &a);
	
	printf (" Digite um Numero Inteiro: ");
	scanf ("%d", &b);
	
	soma = a + b;
	
	printf ( "Valor da Soma = %d\n", soma);
	
	system ("pause"); // Somente para Windows
    return 0;
}
