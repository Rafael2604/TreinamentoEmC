#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	float nota1=0, nota2=0, media=0;
	printf (" Digite a Primeira Nota do ALuno: ");
	scanf ( "%f", &nota1);
	
	printf (" Digite a Segunda Nota do ALuno: ");
	scanf ( "%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf( "Media do Aluno = %.2f", media);
	
	system ("pause"); // Pausa da Tela Somente para Windows
	return 0; // Returno da Funcao Main
}
