#define NUM_ITER 531

#include <header.h>

int main_bench()
{
	int i,j,C[1000][1000];
	int n,s;
	int a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&(C[i][j]));
		}
	}
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=0;j<n;j++)
		{
			if(C[i][j]==0)
				sum = sum +1;
		
		if(sum>2)
			a=sum;
		}
	}
	for(j=0;j<n;j++)
	{
		int um=0;
		for(i=0;i<n;i++)
		{
			if(C[i][j]==0)
			um = um +1;
		
		if(um>2)
			b=um;
		}
	}

	s=(a-2)*(b-2);
	my_printf("%d\n",s);
	return 0;
}
