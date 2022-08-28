#include <stdio.h>
int main()
{
    int n,i,j,x,y,sum;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        sum=0;
        scanf("%d%d", &x,&y);
        for(j=x; j<(x+(2*y)); j++)
        {
            if(j%2!=0){
                sum=sum+j;
            }
        }
        printf("%d\n", sum);
    }

return 0;
}
