#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char deixaOlike[] = "deixa o like aqui";
    int tamanhoString;
    int linha = 0;
    tamanhoString = strlen(deixaOlike);
    for(int letra = 0;letra<=tamanhoString;letra++){
        for(linha=0;linha < letra;linha++){
            printf("%c",deixaOlike[linha]);
        }
        printf("\n");
        linha=0;
    }
    for(int letra = 0;letra<=tamanhoString;){
        for(linha = 0; linha < tamanhoString;linha++){
            printf("%c",deixaOlike[linha]);
        }
        printf("\n");
        tamanhoString--;
    }  

    return 0;
}
