#include <stdio.h>
int main ()
{
    double R;
    scanf("%lf", &R);
    if(R>=0&&R<=25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(R>25&&R<=50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(R>50&&R<=75)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(R>75&&R<=100)
    {
        printf("Intervalo (75,100]\n");
    }
    else if(R<0||R>100)
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
