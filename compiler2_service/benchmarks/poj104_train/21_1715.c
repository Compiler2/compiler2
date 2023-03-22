#define NUM_ITER 38314

#include <header.h>

int main_bench()
{
	int num[300],i,k=0,n,j;
	float aver,sub[300],sum=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	aver=sum/n;
	for (i=0;i<n;i++)
		sub[i]=fabs(num[i]-aver);
	for (i=0;i<n;i++)
		if (sub[i]>sub[k])
			k=i;
	for (i=0;i<n;i++)
		if (sub[i]==sub[k]&&i!=k)
		{
			if (num[i]>num[k])
			{
				j=num[i];
				num[i]=num[k];
				num[k]=j;
			}
			my_printf("%d,",num[i]);
			break;
		}
	my_printf("%d\n",num[k]);
}
