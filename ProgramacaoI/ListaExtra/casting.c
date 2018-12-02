#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 16;
    int y =  3;
    
    float resultadoComCasting = (float)x/y;
    float resultadoSemCasting = x/y;
    printf("resultadoSemCasting - %f\n",resultadoSemCasting);
    printf("resultadoComCasting -%f",resultadoComCasting);
 
    return 0;
}
