#define NUM_ITER 6037

#include <header.h>

int main_bench()
{
  int b[301],a[301];
  int i,n,j,k,count;
  my_scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    my_scanf("%d",&a[i]);
  }
  
  b[0]=a[0];
  for (i=1,j=1;i<n;i++)
  {
    for (k=0,count=0;k<i;k++)
       {if (a[k]!=a[i])
          count++;
       }
    if (count==i)
      {
        b[j]=a[i];
        j++;
      }
  }
   for (i=0;i<j;i++)
   {
     my_printf("%d",b[i]);
     if(i!=j-1)
     my_printf(",");
   }
   
   return 0;
   }