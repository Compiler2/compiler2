#define NUM_ITER 7910

#include <header.h>

int main_bench()
{
 int a[1000],b[1000],i,j,n,t;
 int *p,*q;
 p=a;
 q=b;
 my_scanf("%d",&n);
 for(i=0;i<=n-1;i++)
  my_scanf("%d",p+i);
 t=0;
 for(i=0;i<=n-1;i++)
  {
  for(j=0;j<=i-1;j++)
   if(*(p+i)==*(p+j)) break;
  if(j>i-1) 
   {
    *(q+t)=*(p+i);
    t++;
   }
  }
  for(i=0;i<=t-2;i++)
   my_printf("%d,",*(q+i));
  my_printf("%d",*(q+t-1));

}