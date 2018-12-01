#include <stdio.h>
#include <conio.h>

int main()
{	
	int primeiroNum;
	int segundoNum;
	int soma;

	printf("Digite o primeiro numero:");
	scanf("%d",&primeiroNum);
	printf("Digite o segundo numero:");
	scanf("%d",&segundoNum);
	
	while(primeiroNum <= segundoNum){
		soma += primeiroNum; 
		primeiroNum++;
	}
	printf("Soma=%d",soma);
	getch();
	return 0;
}
