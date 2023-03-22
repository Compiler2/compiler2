#define NUM_ITER 7792

#include <header.h>

int main_bench()
{
	int x[300];
	int n;
	int i,j;
	int q,k;
	int d[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&x[i]);
	d[0]=x[0];
	k=1;
	for(i=0;i<n;i++)
	{
		q=0;
		for(j=0;j<k;j++)
		{
			if(x[i]==d[j])
				q++;
		}
		if(q==0)
		{
			d[k]=x[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(i!=0)
			my_printf(",");
		my_printf("%d",d[i]);
	}
	return 0;
}
