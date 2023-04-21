#define NUM_ITER 52238

#include <header.h>

int main_bench() 
{ 
  int n,i;
  int a[200];
  int e=0;
  int b=0;
  int c=0;
  int d=0;
  double A,B,C,D;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  my_scanf("%d",&a[i]);
	  if(a[i]>=1 && a[i]<=18)
	  {
		  e=e+1;
	  }
	  if(a[i]>=19 && a[i]<=35)
	  {
		  b=b+1;
	  }
	  if(a[i]>=36 && a[i]<=60)
	  {
		  c=c+1;
	  }
	  if(a[i]>60)
	  {
		  d=d+1;
	  }
  }

  A=(double)(100.0*e/n);
  B=(double)(100.0*b/n);
  C=(double)(100.0*c/n);
  D=(double)(100.0*d/n);

  
  my_printf("1-18: %.2lf%%\n",A);
  my_printf("19-35: %.2lf%%\n",B);
  my_printf("36-60: %.2lf%%\n",C);
  my_printf("60??: %.2lf%%\n",D);
  
  
 
  
  return 0; 
}