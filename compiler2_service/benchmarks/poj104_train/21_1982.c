#define NUM_ITER 5210

#include <header.h>

int main_bench()
{
	int i,j,n,num=0;
	float average,n1,m,sn=0,a[300],b[300],max,k[300],p[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%f",&a[i]);
		sn=sn+a[i];
	}
	n1=n;
	average=sn/n1;
	for(i=0;i<n;i++)
	{
		m=(average-a[i]);
		b[i]=m*m;
	}
	max=b[0];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			
			if(max>=b[j+1])
			{
				continue;
			}
			else if(max<b[j+1])
			{
				max=b[j+1];
			}
		}
	}
	memset(k,0,300);
	for(j=0;j<n;j++)
	{
		if(b[j]==max)
		{
			k[j]=a[j];
			num++;
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(k[i]!=0)
		{			
			p[j]=k[i];
			j++;
		}
	}
	if(j==1)
	{
		my_printf("%.f\n",p[0]);
	}
	if(j>1)
	{
		for(i=0;i<j-1;i++)
		{
			my_printf("%.f,",p[i]);
		}
		my_printf("%.f\n",p[j-1]);
	}
		
	
	return;
}

