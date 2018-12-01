#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num = 0,cont1 = 0,cont2 = 0;

	printf("\t\t Digite um numero inteiro:  ");
    scanf("%d",&num);
	printf("\n\n");
				
	cont1 = 1;
	while(cont1<=num)
	{
		printf("\t\t ");
	    cont2=1;
		while(cont2<=cont1)	
		{
			printf("*");
			cont2++;
		}
	    	printf("\n");
			cont1++;
    }
	system("pause");
	return 0;
}


