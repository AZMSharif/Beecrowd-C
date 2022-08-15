#include <stdio.h>
int main()
{
    double A[100];
    int i,s=0;
    for(i=0; i<6; i++)
    {
        scanf("%lf", &A[i]);
        if(A[i]>0){
            s++;
        }
    }
    printf("%d valores positivos\n", s);
    return 0;
}
