#define NUM_ITER 45389

#include <header.h>

int main_bench()
{
	int i,j,k,l,m,n;
	double average,sum=0.0,max;
	int a[305];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	max=fabs(a[0]-average);
   
	for(i=1;i<n;i++)
	{
		if(fabs(a[i]-average)>max) max=fabs(a[i]-average);
	}
    for(i=0;i<n;i++)
	{
		if(max-fabs(a[i]-average)<1e-6) {my_printf("%d",a[i]);
		break;}
	}
	for(i++;i<n;i++)
	{

		if(max-fabs(a[i]-average)<(1e-6)) my_printf(",%d",a[i]);
	}
	return 0;
}
		