#define NUM_ITER 47233

#include <header.h>

main_bench()
{
  int n,k,i,j,a[100000],*p;
  my_scanf("%d",&n);
  p=a;
  for(i=0;i<n;i++)
    my_scanf("%d",p++);
  p=a;
  my_scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(*(p+i)==k)
    {
      for(j=1;i+j<n;j++)
      {
        if(*(p+i+j)!=k){*(p+i)=*(p+i+j);*(p+i+j)=k;break;}
      }
    }
    if(*(p+i)==k)break;
  }
  for(j=0;j<i-1;j++)
    my_printf("%d ",*p++);
  p=a;
  my_printf("%d",*(p+i-1));
}