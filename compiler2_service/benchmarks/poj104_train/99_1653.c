#define NUM_ITER 44203

#include <header.h>

int main_bench()
{
	int n=0;
	my_scanf("%d",&n);
	int a[100]={0};
	int i=0;
	double b=0;
	 double c=0;
          double d=0;
double e=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);                                                                            
		if(a[i]>=1&&a[i]<=18){
			b=b+1;
		}
        if(a[i]>=19&&a[i]<=35){
			c=c+1;
		}
      if(a[i]>=36&&a[i]<=60){
		  d=d+1;
	  }
     if(a[i]>=61){
		 e=e+1;
	 }
	}
	my_printf("1-18: %.2f%%\n",100*b/(1.0*n));
    my_printf("19-35: %.2f%%\n",100*c/(1.0*n));
   my_printf("36-60: %.2f%%\n",100*d/(1.0*n));
    my_printf("60??: %.2f%%",100*e/(1.0*n));
	return 0;
}