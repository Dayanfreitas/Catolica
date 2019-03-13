#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

void loopDez()
{
	int i=0,
	    desenhosPorLinhas = 10;
	for(i=0; i <=desenhosPorLinhas;i++)
	{	
		printf("s2");
		Sleep(200);
		printf(" ");
	}
}

int main(){
	setlocale(LC_ALL,"");
	int  i=0;
	char nome[20],
		 nomeEsperado[20];
	strcpy( nomeEsperado, "dayan" );
					
	printf("Qual é seu nome?");
	scanf("%s",&nome);
	fflush(stdin); //burffer teclado
  	
	if(strcmp(nome, nomeEsperado) == 0)
	{		
		for(i=0; i <=1;i++)
		{
			loopDez();
			printf("\n");
		}	
	}
	
	return 0;
}

