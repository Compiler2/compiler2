#include <header.h>


int main_bench()
{
  int i,j,sz[300],n,mark=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    my_scanf("%d",&sz[i]);
  }
  for(i=0;i<n;i++)
  {
    mark=0;
    
    
    if(i==0)
    {
      my_printf("%d",sz[0]);
    }

    if(i==n-1)
    {
      for(j=0;j<i;j++)
      {
        if(sz[i]!=sz[j])
        {
          mark++;
        }
        else if(sz[i]==sz[j])    break;
      }
      if(mark==i)  my_printf(",%d",sz[i]);
    }

    for(j=0;j<i;j++)
    {
      if(sz[i]!=sz[j])
      {
        mark++;
      }
      else if(sz[i]==sz[j])   break;
      if(mark==i)   my_printf(",%d",sz[i]);
    }
  }
  return 0;
}
