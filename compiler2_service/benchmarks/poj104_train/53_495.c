#define NUM_ITER 6292

#include <header.h>

int main_bench()
{
	int n,comp,i,j,p;
	my_scanf("%d",&n);
	int a[300],b[300];



	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	
	
	
	if(n==1)my_printf("%d",a[0]);
	

	
	else if(n>=2)
{	for(i=0;i<=n-2;i++)
	{
		comp=a[i];
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]==comp)
			{
				a[j]=1000;
			}
		}
	}

	p=0;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]!=1000)
		{
			b[p]=a[i];
			p++;
		}
	}

	for(i=0;i<=p-2;i++)
	{
		my_printf("%d,",b[i]);
	}
	my_printf("%d",b[p-1]);
}



}		