#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int x = 0, y = 0;
	int produto = 0;
		
	while(x<=10)
    {
        y=1;        
		while(y<=10)
        {
			produto = x * y;
			printf("\t\t %d * %d = %d\n",x,y,produto);
			y++;
		}
			printf("\n\n");
			x++;
		}
    getch();
    return 0;
}

