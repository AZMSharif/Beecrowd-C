#include <stdio.h>
int main ()
{
    int a,b=0;
    double avrg,sum=0.00;
    while (1){
        scanf("%d", &a);
        if(a>0){
        sum+=a;
        b++;
        avrg=sum/b;
        }
        else if(a<0){
            break;
        }
    }
    printf("%.2lf\n", avrg);
    return 0;
}
