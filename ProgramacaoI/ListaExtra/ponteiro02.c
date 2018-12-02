#include <stdio.h>

int main(int argc, char const *argv[])
{
    void addOne(int x);//não add 
    void addOneP(int *x);//add
    int num = 1;
    int *p = &num;

    addOneP(p);
    printf("%d",num);    
    return 0;
}
void addOne(int x){
    ++x;
}
void addOneP(int *x){
    ++*x;
}