#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	int contador; //variável de controle do loop
	
	//for (Valor Inicial do Contador; condição Limite; incremento)

	for (contador = 10; contador >= 1; contador--)
	{
		printf("%d - Boa Tarde\n",contador);
	}

	system("pause"); // pausa na tela, somente para ambiente windows
	return(0);
}