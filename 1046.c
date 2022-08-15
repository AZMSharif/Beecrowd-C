#include <stdio.h>
int main()
{
    int S,E,t;
    scanf("%d%d", &S,&E);
    if(S>=E){
    t=(24-S)+E;
    printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    else {
        t=E-S;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    return 0;
}
