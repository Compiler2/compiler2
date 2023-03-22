#define NUM_ITER 5766

#include <header.h>

int main_bench()
{
  int n, a[310],i,s=0,temp,j;
  float ave,c,d;
  my_scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    my_scanf("%d", &a[i]);
    s+=a[i];
  }
  ave=(float)s/n;
  for(i=0;i<n;i++)
   for(j=i;j<n;j++)
    {if(a[j]<a[i]){temp=a[i];
     a[i]=a[j];
     a[j]=temp;}
    }
   c=a[n-1]-ave;
   d=ave-a[0];
   if(c==d)my_printf("%d,%d",a[0],a[n-1]);
   if(c>d)my_printf("%d", a[n-1]);
   if(c<d)my_printf("%d", a[0]);
   else;
 
  return 0;
}