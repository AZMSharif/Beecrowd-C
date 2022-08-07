#include <stdio.h>
int main()
{
    double N, H, P, SALARY;
    scanf("%lf%lf%lf", &N, &H, &P);
    SALARY = H * P;
    printf("NUMBER = %.0lf\n", N);
    printf("SALARY = U$ %.2lf\n", SALARY);
    return 0;
}
