#include <stdio.h>
int main ()
{
    int A[100];
    int i,s=0,p=0,q=0,r=0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &A[i]);
        if(A[i]>0)
        {
            s++;
        }
        if(A[i]<0)
        {
            p++;
        }
        if(A[i]%2==0)
        {
            q++;
        }
        if(A[i]%2!=0)
        {
            r++;
        }
    }
    printf("%d valor(es) par(es)\n", q);

    printf("%d valor(es) impar(es)\n", r);
    printf("%d valor(es) positivo(s)\n", s);
    printf("%d valor(es) negativo(s)\n", p);
    return 0;
}
