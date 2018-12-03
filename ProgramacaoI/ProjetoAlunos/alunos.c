#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define maxAlunos 4
struct alunos{
    int id;
    char nome[20];
};

int main(int argc, char const *argv[])
{
    struct alunos aluno[maxAlunos];
    //Declaração de funções 
    void menu();
    void lerOperecao(int *operacao);
    void verificarOperacao(int *operacao,struct alunos t[],int *numeroDeAlunos);
    void cadastrarAluno(struct alunos t[],int *numeroDeAlunos);
    void verAlunos(struct alunos t[],int *numeroDeAlunos);
    void zerarVariaveis(struct alunos t[]);
    void limparPosicao(struct alunos t[],int posicao);
    //Declaração de variáveis
    int numeroDeAlunos = 0;
    int operacao;
    int *pOp,*pNumAlunos;
    pOp = &operacao;
    pNumAlunos = &numeroDeAlunos;
    
    zerarVariaveis(aluno);
    do{ 
        printf("\tAlunos cadastrados:%d\n",numeroDeAlunos);
        menu();
        lerOperecao(pOp);
        verificarOperacao(pOp,aluno,pNumAlunos);
    }while(*pOp != 0);
    return 0;
  
}
//Funções
 void limparPosicao(struct alunos t[],int posicao){
    t[posicao].id = 0;
    strcpy(t[posicao].nome," ");
 }   
void zerarVariaveis(struct alunos t[]){
    for(int i = 0;i < maxAlunos;i++ )
    {
        limparPosicao(t,i);
    }
}
void verAlunos(struct alunos t[],int *numeroDeAlunos){
    for(int i = 0; i < *numeroDeAlunos;i++)
    {
        printf("Id:%d",t[i].id);
        printf("\n");
        printf("Nome:%s",t[i].nome);
        printf("\n");
    }
}
void cadastrarAluno(struct alunos t[],int *numeroDeAlunos){ 
    if(*numeroDeAlunos < maxAlunos)
    {
        fflush(stdin);
        t[*numeroDeAlunos].id = *numeroDeAlunos+1;
        printf("Digite o nome:");
        gets(t[*numeroDeAlunos].nome);
        *numeroDeAlunos+=1;
    }
}
void menu(){
    puts("1 - Cadastrar aluno");
    puts("2 - Ver alunos cadastrados");
}
void lerOperecao(int *operacao){
    int op;
    printf("Digite sua operacao(0 - para sair ):");
    scanf("%d",&op);
    *operacao=op;
}
void verificarOperacao(int *operacao,struct alunos t[],int *numeroDeAlunos){
    printf("Operacao = %d\n",*operacao);
    switch(*operacao)
    {
        case 1:
            printf("--Cadastras Alunos--\n");
            cadastrarAluno(t,numeroDeAlunos);              
            break;
        case 2:
            printf("--Lista de Alunos--\n");
            verAlunos(t,numeroDeAlunos);
            break;
    }
}
