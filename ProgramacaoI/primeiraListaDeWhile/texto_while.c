#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	char palavra[20];
	int inicio=0;
	int tamanho_palavra;

	printf("Digite o texto:");
	fgets(palavra,sizeof(palavra),stdin);
	strtok(palavra,"\n");
	strlwr(palavra);
	tamanho_palavra = strlen(palavra);
	
	printf("Copia do texto original=%s\n",palavra);
	printf("Transformado............:");
	
	while (inicio <= tamanho_palavra)
    {
		while(inicio%2==0)
        {
			palavra[inicio]=toupper(palavra[inicio]);
			printf("%c",palavra[inicio]);
			break;
		}
		while(inicio%2==1)
        {
			printf("%c",palavra[inicio]);
			break;
		}
		inicio++;
	}
    getch();
	return 0;
}
