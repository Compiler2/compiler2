#define NUM_ITER 28490

#include <header.h>

int main_bench()
{
  int a,j,b,c,i,n;
  char x[10000];
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
   { my_scanf("%s",x);
    a=strlen(x);
    for(j=0;j<a;j++)
       {
         for(b=0;b<a;b++)
           {if(b==j) continue; else if(x[b]==x[j])  break;}
        if(b==a) break;}
   if(j==a) my_printf("no\n");
   else my_printf("%c\n",x[j]);
     }
  return 0;
}
