#define NUM_ITER 36626

#include <header.h>

int main_bench()
{
  int n,k,sum=0,a,b,max=0;
  int i,result=0;
  my_scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
      my_scanf("%d %d",&a,&b);
      if (a>=90 && a<=140 && b>=60 && b<=90)
                 sum++;
                 else {
                      if (sum>max) max=sum;
                      sum=0;
}   
}          
if (sum>max) max=sum;
 my_printf("%d",max);
  return 0;
}
