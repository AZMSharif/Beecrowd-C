#include <stdio.h>
int main()
{
    int i,a[100000],p,q;
    a[0]=p;
    for(i=0; i<10000; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<10000; i++)
    {
        if(a[i]>p)
        {
            p=a[i];
            q=i+1;

        }
    }
    printf("%d\n", p);
    printf("%d\n", q);
    return 0;

}
