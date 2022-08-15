#include <stdio.h>
int main()
{
    int h,s;
    double l,f;
    f = 12.000;
    scanf("%d%d", &h, &s);
    l = (h*s)/f;
    printf("%.3lf\n", l);
    return 0;

}
