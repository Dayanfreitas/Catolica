#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char texto[20];
	int tamanho_Do_Texto;
	int palavras=1;
	printf("Digite o texto:");
	gets(texto);
	tamanho_Do_Texto = strlen(texto);
	
	
	for (int contador = 0; contador < tamanho_Do_Texto ;contador++ )
    {
		if (texto[contador]==' ' )
        {		
			palavras++;
		}
		else if(texto[contador] == '\0')
        {
			break;
		}
	}
	printf("Palavras=%d",palavras);
	getch();
    return 0;
}
