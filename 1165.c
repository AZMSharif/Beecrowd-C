#include <stdio.h>
int main ()
{
    int n,i,x,j,k;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        k=0;
        for(j=2; j<x; j++)
        {
            if(x%j==0){
                k++;
            }
        }
        if(k>0){
            printf("%d nao eh primo\n", x);
        }
        else{
             printf("%d eh primo\n", x);
        }
    }
    return 0;
}
