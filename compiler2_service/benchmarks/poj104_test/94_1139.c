#define NUM_ITER 18546

#include <header.h>

int main_bench()
{
	int n,x[500],i,j,k,m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&x[i]);
	for(i=0,k=0;i<n;i++)
		if(x[i]%2!=0)
		{
			x[k]=x[i];
			k=k+1;
		}
    for(i=1;i<=k-1;i++)
		for(j=i+1;j<=k;j++)
			if(x[i-1]>x[j-1])
			{
				m=x[i-1];
				x[i-1]=x[j-1];
				x[j-1]=m;
			}
	for(i=1;i<=k;i++)
	{
		my_printf("%d",x[i-1]);
		if(i<k)
			my_printf(",");
	}



	return 0;
}