#define NUM_ITER 52497

#include <header.h>

 int main_bench()
{
 int n,i,c=0,y=0,a=0,o=0;
 int sum[100];
 double cl,yl,al,ol;
 my_scanf("%d\n",&n);
 for(i=1;i<=n;i++)
 {
     my_scanf("%d ",&sum[i-1]);
     if(sum[i-1]<=18)
         c=c+1;
     else if(sum[i-1]<=35)
         y=y+1;
     else if(sum[i-1]<=60)
         a=a+1;
     else  o=o+1;

 }
  cl=c*1.0*100/n;
  yl=y*1.0*100/n;
  al=a*1.0*100/n;
  ol=o*1.0*100/n;
  my_printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%",cl,yl,al,ol);
  return 0;
}