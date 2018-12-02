#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int x =100;
    double y = 20.50;
    char z = 'a';
    
    int *ponteirox = &x;
    double *ponteiroy = &y;
    char *ponteirochar = &z;

    printf("Endereco x = %d valor= %d\n",ponteirox,*ponteirox);    
    printf("Endereco x = %d valor= %f\n",ponteiroy,*ponteiroy);    
    printf("Endereco x = %d valor= %c\n",ponteirochar,*ponteirochar);    
    
    double soma =  *ponteirox+*ponteiroy;
    printf("%f",soma);
    getch();
    return 0;
}
    