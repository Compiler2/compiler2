#include <header.h>



	int main_bench()
{
	int n,i=0,j=0,r[300],sum=0,l=0,k=0;
	double aver,cha[300],max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&r[i]);
		sum=sum+r[i];
	}
	aver=sum*1.0/n;
	for(i=0;i<n;i++)
	{
		cha[i]=fabs(aver-r[i]);
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]>max)
		{
			max=cha[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			l++;
		}
		
	}
	if(l==0)
	{
		for(i=0;i<n;i++)
		{
			if(cha[i]==max)
			{
				my_printf("%d",r[i]);
			}
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(cha[i]==max)
			{
				k++;
				if(k<l)
				{
					my_printf("%d,",r[i]);
				}
				else
				{
					my_printf("%d",r[i]);
				}
			}
		}
	}
	return 0;

}
