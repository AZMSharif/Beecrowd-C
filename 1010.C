#include<stdio.h>
int main()
{
    double cp1, nup1, pup1, cp2, nup2, pup2, VALORAPAGAR;
    scanf("%lf%lf%lf", &cp1, &nup1, &pup1);
    scanf("%lf%lf%lf", &cp2, &nup2, &pup2);
    VALORAPAGAR = (nup1 * pup1) + (nup2 * pup2);
    printf("VALOR A PAGAR: R$ %.2lf\n", VALORAPAGAR);
    return 0;
}
