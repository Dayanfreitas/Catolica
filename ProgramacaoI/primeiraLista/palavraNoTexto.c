#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


int main()
{
    typedef enum{false,true} bool;
	setlocale(LC_ALL,"");

	char texto[100];
	char pesquisar[20];
	char palavra[20];
	int tamanho_Do_Texto,tamanho_Do_Pesquisa;
	int valor=0,valor2=0;
	bool resultado = false;
	
	printf("Digite sua frase:");
	fgets(texto,sizeof(texto),stdin);
	tamanho_Do_Texto = strlen(texto);
	strtok(texto,"\n");
	strlwr(texto);
	
	printf("Digite a palavra para pesquisar:");
	fgets(pesquisar,sizeof(pesquisar),stdin);
	tamanho_Do_Pesquisa=strlen(pesquisar);
	strtok(pesquisar,"\n");
	strlwr(pesquisar);
 
 	for(int contador = 0;contador < tamanho_Do_Pesquisa;contador++)
    {
		valor2= valor2+ pesquisar[contador];
    }
 	for(int contador = 0;contador < tamanho_Do_Texto;contador++)
    {
	 	palavra[contador]=texto[contador];
		valor = valor + palavra[contador];
 		if (palavra[contador] == 32 || palavra[contador] == 0)
        {
 			//Aqui é uma palavra
 			if (valor==valor2 || valor == valor2 + 32)
            {
			    resultado=true;
			    break;
		    }
		    else
            {
			 	valor = 0;
			 	continue;
			}
		}
	}
	if (resultado == true)
    {
		system("cls");
		system("color a");
		printf("A palavra %s FOI encontrada na frase com SUSCESSO.\n",pesquisar);
	}
	else
    {
		system("cls");
		system("color c");
		printf("A palavra %s NÃO FOI encontrada na frase NEGADO.\n",pesquisar);
	}
    getch();
	return 0;
}
