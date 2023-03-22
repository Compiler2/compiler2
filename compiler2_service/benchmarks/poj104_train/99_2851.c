#define NUM_ITER 55124

#include <header.h>

int main_bench()
{
  int i,n,j,a=0,b=0,c=0,d=0;
  double w,x,y,z;
  my_scanf("%d\n",&n);
  for(i=0;i<n;i++){
    my_scanf("%d",&j);
	if(j<=18){
	  a++;
	  }
	  else if(19<=j&&j<=35){
	  b++;
	  }
	  else if(36<=j&&j<=60){
	  c++;
	  }
	  else   d++;
	  }
      w=(double)a/n*100;
      x=(double)b/n*100;
	  y=(double)c/n*100;
	  z=(double)d/n*100;
	  my_printf("1-18: %.2lf%%\n",w);
	  my_printf("19-35: %.2lf%%\n",x);
      my_printf("36-60: %.2lf%%\n",y);
      my_printf("60??: %.2lf%%\n",z);
      return 0;
}

