#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char texto[20];
	int tamanho_Do_Texto;
	
    printf("Digite o texto:");
	gets(texto);
	tamanho_Do_Texto = strlen(texto);
	
	for (int contador = 0; contador < tamanho_Do_Texto; contador++)
    {
		printf("[%d]%c-->",contador,texto[contador]);
		if (contador % 2 == 0)
        {
			printf("Par\n");
			texto[contador] = toupper(texto[contador]);
		}
		else
        {
			printf("Impar\n");
		}	
	}
	printf("%s",texto);
	getch();
	return 0;
}
