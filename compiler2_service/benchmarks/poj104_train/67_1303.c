#include <header.h>


int main_bench()
{
	int n,i;
	double a[10000],b[10000],x,y;
	my_scanf("%d",&n);
	my_scanf("%lf %lf",&a[0],&b[0]);
	x=b[0]/a[0];
	for(i=0;i<n-1;i++){
	
	my_scanf("%lf %lf",&a[i],&b[i]);
	y=b[i]/a[i];
	
	if(y-x>0.05){my_printf("better\n");}
	else if(x-y>0.05){my_printf("worse\n");}
	else {my_printf("same\n");}

	
	}
 

 return 0;
}