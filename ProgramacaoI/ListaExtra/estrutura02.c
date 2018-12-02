#include <stdio.h>
#include <conio.h>
struct horario
{
        int horas;
        int min;
        int seg;
};
int main(int argc, char const *argv[])
{
    struct horario teste(struct horario x);

    struct horario agora;
    agora.horas =10;
    agora.min =42;
    agora.seg=58;
    
    struct horario depois;
    depois = teste(agora);
    
    printf("%d:%d:%d",depois.horas,depois.min,depois.seg);

    getch();
    return 0;
}
struct horario teste(struct horario x){
    printf("%d:%d:%d\n",x.horas,x.min,x.seg);
    x.horas=24;
    x.min=60;
    x.seg=50;
    return x;
}