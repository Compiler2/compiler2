#define NUM_ITER 58943

#include <header.h>


int main_bench()
{
  int i,j,n,k,a[1000];
  my_scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  my_scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
        if(a[i]>k)
        continue;
        if(a[i]<=k)
        for(j=i+1;j<n;j++)
        {
                if(a[j]>k)
                continue;
                if(a[i]+a[j]==k)
                break;
        }
        if(j<n)
        {
             my_printf("yes");
             break;
        }
  }
  if(i==n)
  my_printf("no");	
  return 0;
}
