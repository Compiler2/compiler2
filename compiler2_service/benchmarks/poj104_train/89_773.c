#define NUM_ITER 34

#include <header.h>

int main_bench()
{
	int n;
	int a[10001],b[10001],c[100000],d[100000];
	my_scanf("%d",&n);
	int i,j,k,sum=0,cs=0;
	for(i=0;i<10001;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
		cs=cs+1;
		if(a[i]==0&&b[i]==0)
			break;
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<cs;j++)
		{
			if(i==a[j])
			{
				sum=sum+1;
			}

		}
		c[i]=sum;
	}
	 for(i=0;i<n;i++)
	{
		if(c[i]==0)
		{
			my_printf("%d",i);
			sum+=1;
		}

	}
	if(sum==0)
		my_printf("NOT FOUND");
	return 0;

}
