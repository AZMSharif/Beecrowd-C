#include <stdio.h>
int main()
{
    double A,B,C,T;
    scanf("%lf%lf%lf", &A,&B,&C);
    if((A<(B+C))&&B<(A+C)&&C<(A+B))
    {
        T=A+B+C;
        printf("Perimetro = %.1lf\n", T);
    }
    else{
        T=((A+B)*C)/2;
        printf("Area = %.1lf\n", T);
    }
    return 0;
}
