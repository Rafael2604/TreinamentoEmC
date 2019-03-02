//************ Rafael Araujo **********//

#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
	int cont = 1, resp;

	//***** Estrutura de Repetição do.... While() ******
	// executa um comando primeiro e somente testa se a condicao e verdadeira no final
	//isto garante que o comando sera executado no minimo UMA VEZ

	printf("Exemplo de repeticao do...while com contador\n\n");
	do
	{
		printf("valor do contador: %d\n", cont);
		cont = cont + 1;
	} while (cont <= 10);
	
	system("pause");
	
	printf("Exemplo de repetção do While... com teste de valor inserido pelo Usuario\n\n");
	do
	{
		printf("Digite um valor positivo para repetir\n");
		scanf("%d",&resp);
	}
	while(resp > 0);
	
	system("pause");
		return (0);

}
