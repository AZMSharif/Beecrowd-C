#include <stdio.h>
int main()
{
    double x,p,q,r,s,t;
    scanf("%lf", &x);
    p=(8*1000.00)/100;
    q=(18*1500.00)/100;
    if(x>0.00&&x<=2000.00){
        printf("Isento\n");
    }
    else if(x>2000.00&&x<=3000.00){
            r=((x-2000.01)*8)/100;
    printf("R$ %.2lf\n", r);
}
    else if(x>3000.00&&x<=4500.00)
    {
        t=((x-3000.01)*18)/100;
        r=p+t;
        printf("R$ %.2lf\n", r);
    }

    else if(x>4500.00)
    {
       s=((x-4500.01)*28)/100;
       r=p+q+s;
       printf("R$ %.2lf\n", r);
    }

    return 0;
}
