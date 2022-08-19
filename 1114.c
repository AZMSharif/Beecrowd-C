#include <stdio.h>
int main ()
{
    int a;
    while(1)
    {
        scanf("%d", &a);
        if(a!=2002)
        {
            printf("Senha Invalida\n");
        }
        else if(a==2002){
            printf("Acesso Permitido\n");
            break;
        }
    }
    return 0;
}
