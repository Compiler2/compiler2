#define NUM_ITER 19

#include <header.h>

int main_bench()
{
	int k,m[100],n[100];
	int a[100][10000];
	int i,j,s,sum=0;
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		my_scanf("%d%d",&m[i],&n[i]);
		s=m[i]*n[i];
		for(j=0;j<s;j++)
			my_scanf("%d",&a[i][j]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0,sum=0;j<m[i]*n[i];j++)
		{
			if(j<n[i])
				sum=sum+a[i][j];
			else if(j%n[i]==0)
				sum=sum+a[i][j];
			else if((j+1)%n[i]==0)
				sum=sum+a[i][j];
			else if(j>m[i]*n[i]-n[i]-1)
				sum=sum+a[i][j];
			else
				continue;
		}
		if(i==0)
			my_printf("%d",sum);
		else
			my_printf("\n%d",sum);

	}
	return 0;
}

				



