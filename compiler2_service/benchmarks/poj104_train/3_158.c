#include <header.h>

int main_bench()
{
  int i,j,n,k,l=0,s[1000],h[1000][1000];
  my_scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    my_scanf("%d",&s[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      h[i][j]=s[i]+s[j];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(h[i][j]==k)
      {
        l=l+1;
      }
    }
  }
  if(l>0)
  {
    my_printf("yes");
  }
  else
  {
    my_printf("no");
  }
  return 0;
} 
       