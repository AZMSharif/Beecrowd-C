#include <stdio.h>
int main ()
{
  double a,b,c,d,av;
  scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
  av=(a*2+b*3+c*4+d)/10;

  if(av<5)
  {
      printf("Media: %.1lf\n", av);
      printf("Aluno reprovado.\n");
  }
  if(av>=5&&av<=6.9){
         double e, mav;
         scanf("%lf", &e);
         printf("Media: %.1lf\n", av);
         printf("Aluno em exame.\n");
         printf("Nota do exame: %.1lf\n", e);
         mav=(av+e)/2;
         if(mav>=5)
        {
            printf("Aluno aprovado.\n");
        }
        if(mav<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", mav);

     }
   if(av>=7){
       printf("Media: %.1lf\n", av);
       printf("Aluno aprovado.\n");
      }

return 0;
}
