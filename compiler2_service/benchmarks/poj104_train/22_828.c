#define NUM_ITER 1563687

#include <header.h>

int main_bench()
{
	int a[301];
	char c;
	int i,max,lmax,leap=0,n,t;
	for(i=0;;i++)
	{
		my_scanf("%d%c",&a[i],&c);
		if(c!=',')
		break;
	}
	n=i+1;
	if(n==1)
	my_printf("No");
	else 
	{
		for(i=1;i<n;i++)
		    if(a[i]!=a[i-1])
		    leap=1;
		if(leap==0)
		my_printf("No");
	    else
		{
			max=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>max)
			{
			    max=a[i];
				t=i;
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=max)
			{
				lmax=a[i];
			    break;
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>lmax&&a[i]!=max)
			lmax=a[i];
		}
		my_printf("%d",lmax);
	    }
	}
}