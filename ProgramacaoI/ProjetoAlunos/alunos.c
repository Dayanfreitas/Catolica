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
    void buscarAluno(struct alunos t[]);
   
    void zerarVariaveis(struct alunos t[]); 
    void limparPosicao(struct alunos t[],int posicao);
    void mostraPosicao(struct alunos t[],int posicao);

    //Declaração de variáveis
    int numeroDeAlunos = 0;
    int operacao;
    int *pOp,*pNumAlunos;
    pOp = &operacao;
    pNumAlunos = &numeroDeAlunos;
    zerarVariaveis(aluno);
    do{ 
        system("cls");
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
void mostraPosicao(struct alunos t[],int posicao){
    printf("Id:%d",t[posicao].id);
    printf("\n");
    printf("Nome:%s",t[posicao].nome);
    printf("\n");
    
}
void zerarVariaveis(struct alunos t[]){
    for(int i = 0;i < maxAlunos;i++ )
    {
        limparPosicao(t,i);
    }
}
void buscarAluno(struct alunos t[]){
    int id;
    printf("Digite o id:");
    scanf("%d",&id);
    mostraPosicao(t,id);
    system("pause");

}
void verAlunos(struct alunos t[],int *numeroDeAlunos){
    for(int i = 0; i < *numeroDeAlunos;i++)
    {
      mostraPosicao(t,i);
    }
    system("pause");
}
void cadastrarAluno(struct alunos t[],int *numeroDeAlunos){ 
    if(*numeroDeAlunos < maxAlunos)
    {
        fflush(stdin);
        t[*numeroDeAlunos].id = *numeroDeAlunos;
        printf("Digite o nome:");
        gets(t[*numeroDeAlunos].nome);
        *numeroDeAlunos+=1;
    }else if(*numeroDeAlunos >= maxAlunos)
    {
        printf("\n");
        printf("SALA CHEIA!");
        system("pause");
    }
}
void menu(){
    puts("1 - Cadastrar aluno");
    puts("2 - Ver alunos cadastrados");
    puts("3 - Buscar aluno");
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
        case 3:
            buscarAluno(t);
            break;
    }
}
