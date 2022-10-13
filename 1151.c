#include <stdio.h>
int main()
{
    int t1=0,t2=1,t=0,x,i;
    scanf("%d", &x);
    printf("%d", t1);
    for(i=2; i<=x; i++)
    {
        t1=t2;
        t2=t;
        t=t1+t2;
        printf(" %d",t);
    }
    printf("\n");
    return 0;
}
