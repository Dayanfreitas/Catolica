#include <stdio.h>
#include <conio.h>
int main()
{
	int numero1 ;
	int numero2;
	int soma = 0;
	
	printf("Digite o primeiro numero :");
	scanf("%d",&numero1);
	printf("Digite o segundo numero :");
	scanf("%d",&numero2);
	
	for(int contador = numero1 ;contador <= numero2; contador++)
    {
		soma = soma + contador;
	}
	printf("\nSoma = %d",soma);
	getch();
	return 0;
}
