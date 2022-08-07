#include<stdio.h>
int main()
{
    double A, B, C, W, X, Y, Z, P;
    scanf("%lf%lf%lf", &A, &B, &C);
    W = .5*A*C;
    X = 3.14159*C*C;
    Y = .5*(A+B)*C;
    Z = B*B;
    P = A*B;
    printf("TRIANGULO: %.3lf\n", W);
    printf("CIRCULO: %.3lf\n", X);
    printf("TRAPEZIO: %.3lf\n", Y);
    printf("QUADRADO: %.3lf\n", Z);
    printf("RETANGULO: %.3lf\n", P);
return 0;
}
