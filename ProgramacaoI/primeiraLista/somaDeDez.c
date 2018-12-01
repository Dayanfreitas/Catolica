#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL,"");
	int numero;
	int soma;
	
	for(int contador = 0; contador < 10; contador++)
    {
		printf("Digite o [%dª] valor para soma\n",contador+1);
		scanf("%d",&numero);
		soma = soma + numero;
	}
	printf("Soma =%d ",soma);
	getch();
    return 0;
}
