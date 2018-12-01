#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{	
	char texto[20];
	int tamanho_Do_Texto;
	int quantidade_De_Vogal=0;
	int quantidade_De_Consoante=0;
	int quantidade_De_Numero=0;
	int	quantidade_De_Letras=0;

	printf("Texto:");
	gets(texto);
	strlwr(texto);
	tamanho_Do_Texto = strlen(texto);

	printf("Texto...:%s\n",texto);
	
	for (int contador = 0; contador < tamanho_Do_Texto; contador++)
	{
		printf("%c\n",texto[contador]);
		if(texto[contador] == 'a' || 
		   texto[contador] == 'e' ||
		   texto[contador] == 'i' ||
		   texto[contador] == 'o' || 
		   texto[contador] == 'u')
		{
			quantidade_De_Vogal++; 
		}
		else if(toupper(texto[contador]) !=  tolower(texto[contador]))
		{	
			quantidade_De_Consoante++;
		}
		else if(toupper(texto[contador]) ==  tolower(texto[contador]))
		{	
			quantidade_De_Numero++;
		}
		quantidade_De_Letras = quantidade_De_Vogal + quantidade_De_Consoante;
	}
	printf("_________________________________________________\n");
	printf("Quantidades de Caracteres..:%d\n",tamanho_Do_Texto);
	printf("Quantidades de Letras......:%d\n",quantidade_De_Letras);
	printf("Quantidade de Vogais.......:%d\n",quantidade_De_Vogal);
	printf("Quantidade de Consoantes...:%d\n",quantidade_De_Consoante);
	printf("Quantidade de Numeros......:%d\n",quantidade_De_Numero);
    getch();
	return 0;
}
