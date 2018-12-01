#include <stdio.h>	
#include <conio.h>

int main()
{	
	int numero;
	printf("Digite um numero:(00 para sair)");
	scanf("%d",&numero);
	
	while(numero != 00){
		if(numero % 2 == 0)
		{
			printf("eh par!\n");
		}else
		{
			printf("eh impar!\n");
		}	
		printf("Digite um numero:(00 para sair)");
		scanf("%d",&numero);
	}
	return 0;
}

