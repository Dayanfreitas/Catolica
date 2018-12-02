#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    struct horario 
    {
        int horas;
        int min;
        int seg;
    }agora = {10,30,44};
    
    printf("%d:",agora.horas);
    printf("%d:",agora.min);
    printf("%d",agora.seg);
    getch();
    return 0;
}
