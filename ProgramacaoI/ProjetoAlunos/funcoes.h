#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct alunos{
    int id;
    char nome[20];
};
int existsStudent(struct alunos t[],int id);

void lerOperecao(int *operacao);
void limparPosicao(struct alunos t[],int posicao);
void mostraPosicao(struct alunos t[],int posicao,int respostaExists);
void zerarVariaveis(struct alunos t[],int quantidade); 

void verificarOperacao(int *operacao,struct alunos t[],int *numeroDeAlunos,int maxAlunos);
void cadastrarAluno(struct alunos t[],int *numeroDeAlunos,int maxAlunos);
void verAlunos(struct alunos t[],int *numeroDeAlunos);
void buscarAluno(struct alunos t[],int maxAlunos);   

int existsStudent(struct alunos t[],int id){
    if(t[id].id == -1)
    {
        return -1;
    }
    else{
        return 1;
    }
}

void lerOperecao(int *operacao){
    int op;
    printf("Digite sua operacao(0 - para sair ):");
    scanf("%d",&op);
    *operacao=op;
}
void limparPosicao(struct alunos t[],int posicao){
    t[posicao].id = -1;
    strcpy(t[posicao].nome," ");
}

void mostraPosicao(struct alunos t[],int posicao,int respostaExists){
    if(respostaExists == -1)
    {
        printf("ID not registered\n");
    }else if(respostaExists == 1){
        printf("Id:%d",t[posicao].id);
        printf("\n");
        printf("Nome:%s",t[posicao].nome);
        printf("\n");
    }
}

void zerarVariaveis(struct alunos t[],int quantidade){
    for(int i = 0;i < quantidade;i++ )
    {
        limparPosicao(t,i);
    }
}

void verAlunos(struct alunos t[],int *numeroDeAlunos){
    if(*numeroDeAlunos > 0)
    { 
        for(int i = 0; i < *numeroDeAlunos;i++)
        {
        mostraPosicao(t,i,existsStudent(t,i));
        }
    }
    else if(*numeroDeAlunos == 0)
    {
        erroDeAluno(*numeroDeAlunos);
    }
    pause();
}

void buscarAluno(struct alunos t[],int maxAlunos){
    int id;
    do{
        printf("Digite o id:");
        scanf("%d",&id);
    }while(id > maxAlunos);
    mostraPosicao(t,id,existsStudent(t,id));
    pause();
}
void cadastrarAluno(struct alunos t[],int *numeroDeAlunos,int maxAlunos){ 
    if(*numeroDeAlunos < maxAlunos)
    {
        fflush(stdin);
        t[*numeroDeAlunos].id = *numeroDeAlunos;
        printf("Digite o nome:");
        gets(t[*numeroDeAlunos].nome);
        *numeroDeAlunos+=1;
    }
    else if(*numeroDeAlunos >= maxAlunos)
    {
        erroDeAluno(*numeroDeAlunos);
        pause();
    }
}
void verificarOperacao(int *operacao,struct alunos t[],int *numeroDeAlunos,int maxAlunos){
    printf("Operacao = %d\n",*operacao);
    switch(*operacao)
    {
        case 1:
            printf("\n");
            printf("--Cadastras Alunos--\n");
            cadastrarAluno(t,numeroDeAlunos,maxAlunos);              
            break;
        case 2:
            printf("\n");
            printf("--Lista de Alunos--\n");
            verAlunos(t,numeroDeAlunos);
            break;
        case 3:
            printf("\n");
            printf("--Busca de alunos--\n");
            buscarAluno(t,maxAlunos);
            break;
    }
}