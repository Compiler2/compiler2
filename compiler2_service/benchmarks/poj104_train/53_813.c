#define NUM_ITER 6136

#include <header.h>

int main_bench()
{
	int n;
	int z[300];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&z[i]);
	}
	for(int j=1;j<n;j++)
	{
		for(int x=0;x<j;x++)
		{
			if(z[x]==z[j])
				z[j]=0;
		}
	}
         my_printf("%d",z[0]);
	for(int t=1;t<n;t++)
	{
		if(z[t]!=0)
			my_printf(",%d",z[t]);
	}
	return 0;
}

