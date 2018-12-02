#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[10];
    int nameSize;

    printf("Digite um nome:");
    gets(name);
    nameSize=strlen(name);
    for(int i=0; i < nameSize ;i+=2){
        printf("%c",name[i]);
    }
    getch();
    return 0;
}
