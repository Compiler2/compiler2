#include <header.h>

int main_bench(){
  int n,t,i;
  double m,a,b,c,d;
  a=0;
  b=0;
  c=0;
  d=0;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++){
    my_scanf("%d",&t);
    if(t>=1&&t<=18){
    a++;
    }else if(t>=19&&t<=35){
    b++;
    }else if(t>=36&&t<=60){
    c++;
    }else if(t>=61){
    d++;
    }
  }
  m=n;
  a=100*a/m;
  b=100*b/m;
  c=100*c/m;
  d=100*d/m;
my_printf("1-18: %.2lf%%\n",a);
my_printf("19-35: %.2lf%%\n",b);
my_printf("36-60: %.2lf%%\n",c);
my_printf("Over60: %.2lf%%\n",d);
return 0;
}
