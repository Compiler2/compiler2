#define NUM_ITER 1065194

#include <header.h>

int f(int a,int b)
{
 if (a==0)
   return(b);
 else
    return f(a/10,b*10+a%10);
}
int main_bench()
{
 int m,n,i,j,t=0;
 my_scanf("%d %d",&m,&n);
 for(i=m;i<=n;i++)
   {
    if (i==f(i,0)&&i>2)
     {
      for (j=2;j<i;j++)
        if(i%j==0)
          break;
      if(j==i)
       {
        if(t==0)
         {
          my_printf ("%d",i);
          t=1;
          }
        else
          my_printf (",%d",i);
       }
     }
    }
if(t==0)
  my_printf ("no\n");
}