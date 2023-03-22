#define NUM_ITER 51659

#include <header.h>

main_bench()
{
  int a=1,n,k,i[100001];
  my_scanf("%d",&n);
  for(a=1;a<=n;a++) my_scanf("%d ",&i[a]);
  my_scanf("%d",&k);
  for(a=1;a<=n;)
  {
         while(i[a]==k)
         {a++;
          if(i[a]!=k) break;
          }
         my_printf("%d",i[a]);
         a=a+1;
         for(;a<=n;a++)
         if(i[a]!=k) my_printf(" %d",i[a]);
  }
  return(0);
}