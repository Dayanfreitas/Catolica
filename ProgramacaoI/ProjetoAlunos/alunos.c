#include <stdio.h>
#include <ctype.h>
#define maxAlunos 4

void println(char *texto);
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

    int numeroDeAlunos = 0;
    int operacao;
    int *pOp,*pNumAlunos;
    pOp = &operacao;
    pNumAlunos = &numeroDeAlunos;

    do{ 
        menu();
        lerOperecao(pOp);
        printf("Numero de alunos cadastrados%d\n",numeroDeAlunos);
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
            if(aluno[i].id != 0){
                printf("--alunos cadastrados--\n");
                printf("Id:%d\n",aluno[i].id);
                printf("Nome:%s\n",aluno[i].nome);
            }
        }
    }while(*pOp != 0);
    return 0;
  
}
//Funções 
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