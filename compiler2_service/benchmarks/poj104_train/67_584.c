#include <header.h>

int main_bench()
{
    int n,i;
    my_scanf("%d",&n);
    float a[n],b[n],s;
    my_scanf("%f %f",&a[0],&b[0]);
    s=b[0]/a[0];
    for(i=1;i<n;i++)
    {
      my_scanf("%f %f",&a[i],&b[i]);
      if(fabs(b[i]/a[i]-s)>0.05)
      {
        if(b[i]/a[i]-s>0)
        my_printf("better\n");
        else
        my_printf("worse\n");
      }
      else
      my_printf("same\n");
    }
    getchar();
    getchar();
} 