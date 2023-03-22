#define NUM_ITER 56842

#include <header.h>

int main_bench()
{
 int n,k,a=0,b=0,c=0,d=0;
  my_scanf("%d",&n);
 for(int i=1;i<=n;i++)
{ my_scanf("%d",&k);
 if(k<=18){
 a  =a +1;}
 else if(k<=35){
 b  =b+ 1;}
 else if(k<=60){
 c  =c +1;}
 else {
 d  =d + 1;}
}
 a=a*100;b=b*100;
c=c*100;d=d*100;
 my_printf("1-18: %.2lf%\n",a*1.0/n);
 my_printf("19-35: %.2lf%\n",b*1.0/n);
  my_printf("36-60: %.2lf%\n",c*1.0/n);
 my_printf("60??: %.2lf%\n",d*1.0/n);
return 0;
}
 