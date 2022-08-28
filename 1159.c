#include <stdio.h>
int main ()
{
    int x,i,sum;
    while(1)
    {
        scanf("%d", &x);
        if(x!=0)
        {
            sum=0;
            for(i=x; i<(x+(5*2)); i++)
            {

                if(i%2==0)
                {
                    sum=sum+i;
                }

            }
            printf("%d\n", sum);

        }
        else
        {
            break;
        }
    }
    return 0;
}
