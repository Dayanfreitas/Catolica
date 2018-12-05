#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char deixaOlike[] = "deixa o like aqui";
    int tamanhoString;
    int linha = 0;
    int letra = 0;
    tamanhoString = strlen(deixaOlike);
    for(linha=0;linha <= tamanhoString;linha++)
    {
        for(letra; letra < linha;letra++)
        {
            printf("%c",deixaOlike[letra]);
        }
        printf("\n");
        letra=0;
    }
    for(linha = tamanhoString;linha >=0;linha--)
    {
        for(letra = 0;letra < tamanhoString;letra++)
        {
            printf("%c",deixaOlike[letra]);
        }
        printf("\n");
        tamanhoString--;
    }
    return 0;
}
