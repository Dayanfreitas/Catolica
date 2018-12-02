#include <stdio.h>
#include <conio.h>

//Fa�a um programa que leia um numero real e o imprima
int main(){

	float num;
	printf("Digite um numero real (na formatacao 0.0): ");
	scanf("%f",&num);
	printf("O numero real digitado foi: %f",num);	
	getch();
	return 0;
}
