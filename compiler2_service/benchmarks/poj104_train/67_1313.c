#include <header.h>

main_bench()
{
  int n,i,a1,a2,b[100][2];
  float m,c[100];
  my_scanf("%d",&n);
  my_scanf("%d %d",&a1,&a2);
  m=((float)a2)/((float)a1);
  for(i=0;i<n-1;i++)
  { my_scanf("%d %d",&b[i][0],&b[i][1]); 
    c[i]=((float)b[i][1])/((float)b[i][0]); }
  for(i=0;i<n-1;i++)
  { if(fabs(c[i]-m)<=0.05)
    { my_printf("same\n"); }
    else
    { if((c[i]-m)>0.05)
      { my_printf("better\n"); }
      else
      { my_printf("worse\n"); }
    }
  }
}
    
  