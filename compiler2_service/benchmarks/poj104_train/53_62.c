#define NUM_ITER 6099

#include <header.h>

int main_bench()
{
	int a[300],b[300]={0,};
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	int j,k,m;
	for(i=0,j=0;i<n;i++)
	{
		for(k=0,m=0;k<i;k++)
		{
			if(a[k]==a[i])
				m+=1;
		}
		if(m==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		my_printf("%d",b[i]);
		if(i<j-1)
			my_printf(",");
	}
	return(0);
}