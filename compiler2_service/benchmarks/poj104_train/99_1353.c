#define NUM_ITER 50592

#include <header.h>

int main_bench()
{
  int n,i,a,b=0,c=0,d=0,e=0;
  double f=0,g=0,h=0,j=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
  my_scanf("%d",&a);
  if(1<=a && a<=18)
     b++;
  if(19<=a && a<=35)
	 c++;
  if(36<=a && a<=60)
     d++;
 if(60<a)
	 e++; 
  }
  f=(double)b/n;
  g=(double)c/n;
  h=(double)d/n;
  j=(double)e/n;
  my_printf("1-18: %.2lf%%\n",f*100);
  my_printf("19-35: %.2lf%%\n",g*100);
  my_printf("36-60: %.2lf%%\n",h*100);
  my_printf("60??: %.2lf%%\n",j*100);
  return 0;
}