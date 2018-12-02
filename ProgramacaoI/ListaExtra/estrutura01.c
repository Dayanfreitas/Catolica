#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    struct horario 
    {
        int horas;
        int min;
        int seg;
    };
    struct horario agora;

    agora.horas =19;
    agora.min=32;

    printf("%d:",agora.horas);
    printf("%d",agora.min);
    getch();
    return 0;
}
