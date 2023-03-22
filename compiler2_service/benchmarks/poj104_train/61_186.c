#define NUM_ITER 6558

#include <header.h>

int main_bench()
{
  int a,b,c,i,k,n,m;
  a=1;
  b=1;
  my_scanf("%d\n",&n);
  int u[n];
  for(i=1;i<=n;i++)
  {my_scanf("%d\n",&m);
  if(m<=2) c=1;
  else   a=1;b=1; for(k=3;k<=m;k++)
     {
      c=a+b;
      a=b;
       b=c;
  }
   u[i]=c;
  }
  for(i=1;i<=n;i++)
	  my_printf("%d\n",u[i]);
   
  return 0;
}
