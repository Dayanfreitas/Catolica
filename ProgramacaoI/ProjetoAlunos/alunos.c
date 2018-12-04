#include "estilo.h"
#include "funcoes.h"
#define maxAlunos 4

int main(int argc, char const *argv[])
{
    struct alunos aluno[maxAlunos]; 
   
    int numeroDeAlunos = 0;
    int operacao;
    int *pOp,*pNumAlunos;
    pOp = &operacao;
    pNumAlunos = &numeroDeAlunos;
    zerarVariaveis(aluno,maxAlunos);
    do{ 
        limpar();
        mostrarQuantidadeAlunos(*pNumAlunos);
        menu();
        lerOperecao(pOp);
        verificarOperacao(pOp,aluno,pNumAlunos,maxAlunos);
    }while(*pOp != 0);
    return 0; 
}
