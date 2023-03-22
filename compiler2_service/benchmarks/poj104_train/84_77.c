#include <header.h>


int main_bench()
{
  int i,j,n,t,a[100];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  my_scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]<a[j])
          {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
          }   
      }               
  }
  my_printf("%d\n%d\n",a[0],a[1]);

  return 0;
}
