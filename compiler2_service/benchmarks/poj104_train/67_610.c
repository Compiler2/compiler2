#include <header.h>

main_bench()
{
  int n;
  my_scanf("%d",&n);
  int i;
  double m0,m,x,a[n+1],b[n+1],t0,t;
  for(i=0;i<n;i++)
    my_scanf("%lf %lf",&a[i],&b[i]);
  t0 = a[0] - b[0];
  m0 = t0 / a[0];
  for(i=1;i<n;i++)
  {
    t = a[i] - b[i];
    m = t/a[i];
    if(m >= m0)
    {
      x = m - m0;
      if(x > 0.05)
        my_printf("worse\n");
      else
        my_printf("same\n");
    }
    else
    {
      x = m0 - m;
      if(x >0.05)  
         my_printf("better\n");
      else
        my_printf("same\n");
     }
  }
}
