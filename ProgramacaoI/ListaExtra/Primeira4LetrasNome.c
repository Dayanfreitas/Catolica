#include <stdio.h>
#include <conio.h>

//Receber um nome e imprimir as 4 primeiras letras do nome.

int main(int argc, char const *argv[])
{
    char nome[10];
    printf("Digite seu nome: ");
    gets(nome);
    for(int i = 0; i < 4;i++){
        printf("%c\n",nome[i]);   
    }
    getch();
    return 0;
}
