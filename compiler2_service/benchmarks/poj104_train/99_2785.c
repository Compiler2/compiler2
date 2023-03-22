#define NUM_ITER 54662

#include <header.h>

int main_bench()
{
	int n,i,a[100];
	double j=0,k=0,m=0,p=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			j=j+1;
		else if(a[i]<=35)
			k=k+1;
		else if(a[i]<=60)
			m=m+1;
		else p=p+1;
	}
	j=j/n*100;
	k=k/n*100;
	m=m/n*100;
	p=p/n*100;
	my_printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%",j,k,m,p);
}

