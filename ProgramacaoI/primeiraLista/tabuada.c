#include <stdio.h>
#include <conio.h>
int main()
{

    int final = 10;
    int numero = 1;
    
    for(int contador = 1; contador <= final; contador++)
    {
        for(int j = 1;j <= final; j++)
        {
            printf("%2.d * %2.d = %2.d\n",contador,j,contador*j);
        }
        printf("\n");
    }
    getch();
    return 0;
}

