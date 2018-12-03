#include <stdio.h>
#include <ctype.h>

void println(char *texto);

int main(int argc, char const *argv[])
{
    struct alunos{
        int id;
        char nome[20];
    };
    struct alunos aluno;
    
    //Declaração de funções 
    void menu();
    void lerOperecao(int *operacao);
    void verificarOperacao(int *operacao);

    int operacao;
    int *pOp;
    pOp = &operacao;
   
    menu();
    lerOperecao(pOp);
    verificarOperacao(pOp);

    return 0;
}
//Funções 
void menu(){
    println("1 - Cadastrar aluno");
    println("2 - Ver alunos cadastrados");
    println(" ");
}
void lerOperecao(int *operacao){
    int op;
    println("Digite sua operacao(0 - para sair ):");
    scanf("%d",&op);
    *operacao=op;
}
void verificarOperacao(int *operacao){
    printf("Operacao = %d",*operacao);
    println(" ");
   
}
void println(char *texto){
    printf(texto);
    printf("\n");
}