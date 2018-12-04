#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu();
void limpar();
void mostrarQuantidadeAlunos(int quantidade);
void pause();
void erroDeAluno(int numeroDeAluno);

void menu(){
    puts("1 - Cadastrar aluno");
    puts("2 - Ver alunos cadastrados");
    puts("3 - Buscar aluno");
}
void limpar(){
    system("cls");
}
void mostrarQuantidadeAlunos(int quantidade){
    printf("%100s%d\n","Alunos cadastrados:",quantidade);
}
void pause(){
    printf("Aperte ENTER para continuar...");
    getch();
}
void erroDeAluno(int numeroDeAluno){
    if(numeroDeAluno == 0)
    {
        printf("\n");
        printf("Nenhum Aluno Cadastrado\n");
    }
    else if(numeroDeAluno == 4)
    {
        printf("\n");
        printf("SALA CHEIA!\n");
    }
}