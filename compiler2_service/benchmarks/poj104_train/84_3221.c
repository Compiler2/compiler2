#define NUM_ITER 49404

#include <header.h>

int main_bench()
{
 int a[100],i,max=0,smax=0,n;
 my_scanf("%d",&n);
 for (i=0;i<n;i++)
  my_scanf("%d",&a[i]);
 for (i=0;i<n;i++)
  { 
    if(a[i]>max)
     max=a[i];
  }
 for (i=0;i<n;i++)
  {
    if((a[i]>smax)&&(a[i]!=max))
      smax=a[i];
   }
 my_printf("%d\n",max);
 my_printf("%d\n",smax);
}