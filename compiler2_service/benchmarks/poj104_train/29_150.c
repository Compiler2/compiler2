#define NUM_ITER 3671

#include <header.h>


int main_bench()
{
  
	int n,i,j,a=2,b=1,t;
	float sum;
	int d[100];

	my_scanf ("%d",&n);

	for (i=0;i<n;i++){
	           sum=0;a=2;b=1;
            my_scanf ("%d",&d[i]);
			 
			for (j=0;j<d[i];j++){
			
			     sum=sum+0.1*10*a/b;
			       t=a+b;
			       b=a;
				   a=t;
			}  
			my_printf ("%.3f\n",sum);
	}


return 0;
}