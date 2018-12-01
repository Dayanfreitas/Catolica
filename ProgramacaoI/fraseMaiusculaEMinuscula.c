#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
	setlocale(LC_ALL,"");
	char frase[100];
	int tamanhoFrase;
	char transMai[100];
	char transMin[100];
	
	printf("Digite a Frase: ");
	gets(frase);
	tamanhoFrase = strlen(frase);
	printf("Resultado maiúsculas:");

	for (int contador = 0; contador < tamanhoFrase; contador++)
    {
	    //Maiúsculas
		if (frase[contador] == 32)
        {
			printf(" ");
		}
		else if (frase[contador] > 64 && frase[contador] < 90 )
        {
			printf("%c",frase[contador]);
		}
		else if( frase[contador] > 96 && frase[contador] < 122 )
        {
			transMai[contador] = frase[contador] - 32;
			printf("%c",transMai[contador]);
		}
	}
	printf("\nResultado minúsculas:");
	for (int contador = 0; contador < tamanhoFrase; contador++)
    {
		if(frase[contador] == 32)
        {
			printf(" ");
		}
		else if (frase[contador] > 64 && frase[contador] < 90)
        {
			transMin[contador] = frase[contador] + 32;
			printf("%c",transMin[contador]);
		}
		else if( frase[contador] > 96 && frase[contador] < 122 )
        {
			printf("%c",frase[contador]);
		}	
	}
	getch();
	return 0;
}
