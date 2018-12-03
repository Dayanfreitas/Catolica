#include <stdio.h>
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
    void verificarOperacao(int *operacao);
    void cadastrarAluno(struct alunos t[],int *numeroDeAlunos);
    void zerarVariaveis(struct alunos t[]);

    int numeroDeAlunos = 0;
    int operacao;
    int *pOp,*pNumAlunos;
    pOp = &operacao;
    pNumAlunos = &numeroDeAlunos;
    zerarVariaveis(aluno);
    
    do{ 
        printf("\t\tAlunos cadastrados:%d\n",numeroDeAlunos);
        menu();
        lerOperecao(pOp);
        switch(*pOp)
        {
            case 1:
                printf("--Cadastras Alunos--\n");
                cadastrarAluno(aluno,pNumAlunos);                
                break;
            case 2:
                printf("AINDA SEM FUNÇÃO\nCHAMADO 05");
                break;
        }

        for(int i=0;i < maxAlunos;i++){
                printf("--alunos cadastrados--\n");
                printf("Id:%d\n",aluno[i].id);
                printf("Nome:%s\n",aluno[i].nome);
        }
    }while(*pOp != 0);
    return 0;
  
}
//Funções
void zerarVariaveis(struct alunos t[]){
    for(int i = 0;i < maxAlunos;i++ )
    {
        t[i].id = 0;
        strcpy(t[i].nome," ");
    }
}
void cadastrarAluno(struct alunos t[],int *numeroDeAlunos){ 
    if(*numeroDeAlunos < maxAlunos){
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
void verificarOperacao(int *operacao){
    printf("Operacao = %d",*operacao);
}
