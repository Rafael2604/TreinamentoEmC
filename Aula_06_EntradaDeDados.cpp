#include <stdio.h>
 
int main (void)
{
	
	int matricula; // Vareiavel do Tipo Inteiro
	float nota; // Variavel para Armazenar Valores reais
	
	// Char e um tipo de dado que recebe um unico caracter so teclado
	char turma;
	
	//Char Varavel[quantidade] e uma cadeia de caracteres ( String)
	//Uma String Armazena Varios caracteres
	char disciplina[10] = "Geografia"; // atributo valor a uma String
	
	printf ("Disciplicana: %s\n", disciplina);
	
	printf ("Informe a Turma do Aluno: ");
	scanf ("%c", &turma);
	printf ("Turma: %c\n", turma);
	
	printf ("Informe a Matricula do Aluno: ");
	scanf ("%d", &matricula);
	printf ("Numero de Matricula %d\n",matricula);
	
	printf ("Digite a Nota do Aluno: ");
	scanf ("%f", &nota);
	
//Formatacao com Duas Casas Decimais
printf ("Nota: %.2f\n", nota);

return 0;
		
}
