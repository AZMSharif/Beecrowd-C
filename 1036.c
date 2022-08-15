#include <stdio.h>
#include<math.h>
int main ()
{
    double A,B,C,r1,r2,r;
    scanf("%lf%lf%lf", &A,&B,&C);
    r=((B*B)-(4.00*(A)*(C)));
    if(r>=0&&A!=0)
    {
       r1=(-B+sqrt(r))/(2.00*A);
       r2=(-B-sqrt(r))/(2.00*A);
       printf("R1 = %.5lf\n", r1);
       printf("R2 = %.5lf\n", r2);

    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
