#include <header.h>

int main_bench()
{
    int n,i,j,a[100000],b[100000]={0},k;
    my_scanf("%d",&n);
    j=1;
    for(i=1;i<=n;i++)
    {
      my_scanf("%d",&k);
      if(b[k]==0)
      {
        a[j]=k;
        j++;
        b[k]=1;
      }
      }
      for(i=1;i<j;i++)
      {
        if(i==1)my_printf("%d",a[i]);
        else my_printf(" %d",a[i]);
        }
}