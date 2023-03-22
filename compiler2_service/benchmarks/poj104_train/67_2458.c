#include <header.h>

int main_bench()
{
  int n;
  double a,b;
  double x,y;
  my_scanf("%d",&n);
  my_scanf("%lf%lf",&a,&b);
  while(--n)
  {
    my_scanf("%lf%lf",&x,&y);          
    if(b/a-y/x>0.05) my_printf("worse\n");
    else if(b/a-y/x<-0.05) my_printf("better\n");
         else my_printf("same\n");
  }
 return 0;    
}
