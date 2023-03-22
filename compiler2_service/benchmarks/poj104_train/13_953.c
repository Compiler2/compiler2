#include <header.h>

int main_bench()
{
  int jud[200],num[30000],n,i,j,sum,res[200];
  my_scanf("%d",&n);
  sum=0;
  for(i=1;i<=100;i++)
   jud[i]=0;
  for(i=1;i<=n;i++)
   {
    my_scanf("%d",&num[i]);
    if(jud[num[i]]==0) 
     {
       sum++;
       res[sum]=num[i];
       jud[num[i]]=1;
      }
    }
  for(i=1;i<sum;i++)
   my_printf("%d ",res[i]);
  my_printf("%d",res[sum]);
  return 0;
}
       