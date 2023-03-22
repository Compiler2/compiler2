#include <header.h>

int main_bench()
{
	int n[300],i,j,num;
	int k=1,a[300]={0},p=0;
	my_scanf("%d",&num);
	for(i=0;i<num;i++)
	      my_scanf("%d",&n[i]);
	for(i=1;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			if(n[i]==n[j])
			{
				n[i]=-1;
			}
		}
	}
	for(i=0;i<=num-1;i++)
	{
		if(n[i]>=0)
		{
			a[k]=n[i];
			k++;
			p++;
		}
	}
	for(k=1;k<p;k++)
		my_printf("%d,",a[k]);
	my_printf("%d",a[p]);
	
	return 0;
}

