#define NUM_ITER 1740924

#include <header.h>

int n[300];
int main_bench()
{
      int ctr,i=1;
      int max=0,temp;
      my_scanf("%d",n);
      while((getchar())==',')
      {
      my_scanf("%d",&n[i]);
      i++;
      }
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]>max)
      max=n[ctr];
      }
      temp=max;
      max=0;
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]==temp)
      n[ctr]=0;
      }
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]>max)
      max=n[ctr];
      }
      if(max==0)
      my_printf("No");
      else
      my_printf("%d",max);
      return 0;
}