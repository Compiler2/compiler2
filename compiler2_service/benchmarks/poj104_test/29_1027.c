#define NUM_ITER 3885

#include <header.h>

int main_bench()
{
  int m,n,i,j;
  my_scanf("%d",&m);
  for(j=0;j<m;j++)
  {
    my_scanf("%d",&n);
    int a[n],b[n];
    double c[n],s=0;
    for(i=0;i<n;i++)
    {
      if(i==0)
      {
        a[i]=2;
        b[i]=1;
        c[i]=2;
      }else{
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
        c[i]=1.0*a[i]/b[i];
      }
      s+=c[i];
    }
    my_printf("%.3lf\n",s);
  }
}