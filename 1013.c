#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a, b, c, X, y;
   scanf("%d%d%d", &a, &b, &c);
   X = (a+b+abs(a-b))/2;
   y = (c+X+abs(c-X))/2;
   printf("%d eh o maior\n", y);
   return 0;
}

