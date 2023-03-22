#define NUM_ITER 56521

#include <header.h>

main_bench()
{
  int n,k,i,j,a[100000],*p,b;
  my_scanf("%d",&n);
  p=a;
  for(i=0;i<n;i++)
    my_scanf("%d",p++);
  p=a;
  my_scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(*(p+i)!=k)  {my_printf("%d",*(p+i)); b=i;break;}  
  }
  for(i=b+1;i<n;i++)
  {
    if(*(p+i)!=k)  {my_printf(" %d",*(p+i));}  
  }
}
