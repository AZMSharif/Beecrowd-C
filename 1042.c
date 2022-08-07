#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a<b&&a<c&&b<c)
    {
        printf("%d\n%d\n%d\n", a,b,c);
    }
    else if(a>b&&a>c&&b<c)
    {
        printf("%d\n%d\n%d\n", b,c,a);
    }
    else if(a<c&&c<b&&b>a)
    {
        printf("%d\n%d\n%d\n", a,c,b);
    }
    else if(b<a&&a<c&&c>b)
    {
        printf("%d\n%d\n%d\n", b,a,c);
    }
    else if(c<b&&a<b&&c<b)
    {
        printf("%d\n%d\n%d\n", c,a,b);
    }
    else if(c<b&&b<a&&c<a)
    {
        printf("%d\n%d\n%d\n", c,b,a);
    }
    else if(a==b)
    {
        if(c>b)
        {
            printf("%d\n%d\n%d\n", a,b,c);
        }
        else
        {
            printf("%d\n%d\n%d\n", c,a,b);
        }
    }

    else if(b==c)
    {
        if(a>b)
        {
            printf("%d\n%d\n%d\n", b,c,a);
        }
        else
        {
            printf("%d\n%d\n%d\n", a,b,c);
        }
    }

    else if(c==a)
    {
        if(a>b)
        {
            printf("%d\n%d\n%d\n", b,a,c);
        }
        else
        {
            printf("%d\n%d\n%d\n", a,c,b);
        }
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a,b,c);
}
