#include <header.h>

int main_bench()
{
  double n,x,y;
  double a,b;
  double m,p,q,h;
  my_scanf("%lf",&n);
  my_scanf("%lf %lf",&x,&y);
  m=y/x;
  int i=2;
  while(i<=n){
    my_scanf("%lf %lf",&a,&b);
    p=b/a;
    q=m-p;
    h=p-m;
    if(h>0.05){
      my_printf("better\n");
    }else if(q>0.05){
      my_printf("worse\n");
    }else{
      my_printf("same\n");
    }
    i++;
  }
  return 0;
}
  