#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int main()
{
	setlocale(LC_ALL,"");
	char palavra[20];
	int tamanhoPalavra;
	
	printf("Digite o Texto: ");
	gets(palavra);
	tamanhoPalavra = strlen(palavra);
	strlwr(palavra);
	printf("Resultado: ");

	for (int contador = 0; contador < tamanhoPalavra; contador++)
    {
		if (palavra[contador] == 32)
        {
			printf("%c",palavra[contador]);
		}
		else
        {
		    printf("%c ",palavra[contador]);
		}
	}
	getch();
	return 0;
}
