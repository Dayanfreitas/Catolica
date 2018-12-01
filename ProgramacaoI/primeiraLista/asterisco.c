#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int numDeAsteriscos;
    int linha=0;
    int numLinhas;
    
    printf("Quantos asteriscos: ");
    scanf("%d",&numLinhas);

    for(int i=1;i<=numLinhas;i++)
    {
        for(numDeAsteriscos=0; numDeAsteriscos < i;numDeAsteriscos++)
        {
             printf("*");
        }
        printf("\n");
        numDeAsteriscos=0;
    }
    getch();
    return 0;
}
