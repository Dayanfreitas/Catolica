#include <stdio.h>
#include <locale.h>
#include <conio.h>

//Pe�a ao usuario para digitar tr�s valores inteiros e imprima a soma deles.
int main(){
	int num=0;
	
	for(int i = 0; i < 3; i++ ){		
		printf("Digite o %d numero inteiro:",i+1);
		scanf("%d",&num);
		num += num;
	}
	printf("\n%d",num);
	getch();
	return 0;
}
